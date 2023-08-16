#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    void *ext_library;
    double value = 0;
    double (*powerfunc)(double x);

    ext_library = dlopen("libfsdyn.so", RTLD_LAZY);
    if (!ext_library){
        fprintf(stderr, "Could not open libdyn.so\n");
        return 1;
    }
    powerfunc = dlsym(ext_library, argv[1]);
     
    value = atoi(argv[2]);

    printf("%s(%f) = %f\n", argv[1], value, (*powerfunc)(value));

    dlclose(ext_library);

    return 0;
}