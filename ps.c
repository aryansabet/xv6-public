#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


#define N 8

struct proc_info {
  int pid;
  int memsize;
};
int
main(int argc, char *argv[])
{   
    int i,a = atoi(argv[1]) -1;
    for ( i = 0; i < a; i++)
    {
       int r =fork() ;
       if(r == 0){
        int* mem2 = malloc(atoi(argv[i + 2]));
        while(1){}
        free(mem2);
        exit();
       }  
    }
    int* mem = malloc(64 * sizeof(struct proc_info));
    proc_dump(mem);
    free(mem);
    exit();
}