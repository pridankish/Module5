# static library

# static: main.o libfs.a
# 	cc main.o -L. -lfs -o static

# main.o: main.c
# 	cc -c main.c

# libfs.a: f1.o f2.o
# 	ar rcs libfs.a f1.o f2.o

# f1.o: f1.c
# 	cc -c f1.c

# f2.o: f2.c
# 	cc -c f2.c

# clean: 
# 	rm -f *.o

# dynamic library with static loading

# dynamic: maindyn.o libfsdyn.so
# 	cc maindyn.o -L. -lfsdyn -o dynamic

# maindyn.o: maindyn.c
# 	cc -c maindyn.c

# libfsdyn.so: f1.o f2.o
# 	cc -shared -o libfsdyn.so f1.o f2.o

# f1.o: f1.c
# 	cc -fPIC -c f1.c

# f2.o: f2.c
# 	cc -fPIC -c f2.c

# clean: 	
# 	rm -f *.o


# dynamic library

dynamic: libfsdyn.so maindyn.c
	cc maindyn.c -o dynamic -ldl

libfsdyn.so: f1.o f2.o
	cc -shared f1.o f2.o -o libfsdyn.so 

f1.o: f1.c
	cc -fPIC -c f1.c

f2.o: f2.c
	cc -fPIC -c f2.c

clean: 	
	rm -f *.o
