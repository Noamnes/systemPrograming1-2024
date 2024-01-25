CFlags = -Wall -Wextra -g

# Object files for static library
StaticObjectsRec = advancedClassificationRecursion.o aidFunctions.o basicClassification.o
StaticObjectsLoop = advancedClassificationLoop.o aidFunctions.o basicClassification.o

# Object files for dynamic library (position-independent code)
DynamicObjectsRec = advancedClassificationRecursion.pic.o aidFunctions.pic.o basicClassification.pic.o
DynamicObjectsLoop = advancedClassificationLoop.pic.o aidFunctions.pic.o basicClassification.pic.o

all : maindrec maindloop mains libclassloops.a libclassrec.a

# General rule for compiling object files
%.o : %.c
	gcc $(CFlags) -c $< -o $@

# Rule for compiling position-independent code (PIC) object files for dynamic libraries
%.pic.o : %.c
	gcc $(CFlags) -fPIC -c $< -o $@

# Static libraries
libclassloops.a : $(StaticObjectsLoop)
	ar rcs $@ $^ 

libclassrec.a : $(StaticObjectsRec) 
	ar rcs $@ $^ 

# Dynamic libraries (using PIC object files)
libclassloops.so : $(DynamicObjectsLoop)
	gcc $(CFlags) -shared $^ -o $@

libclassrec.so : $(DynamicObjectsRec)
	gcc $(CFlags) -shared $^ -o $@

# Last compilation process
mains : libclassrec.a main.o 
	gcc $(CFlags) main.o ./libclassrec.a -L. -o $@

maindloop : libclassloops.so main.o
	gcc $(CFlags) main.o -L. -Wl,-rpath=. -lclassloops -o $@

maindrec : libclassrec.so main.o 
	gcc $(CFlags) main.o -L. -Wl,-rpath=. -lclassrec -o $@

clean :
	rm *.o *.a *.so maindrec maindloop mains

# References:
loops : libclassloops.a
recursives : libclassrec.a
recursived : libclassrec.so
loopd : libclassloops.so
