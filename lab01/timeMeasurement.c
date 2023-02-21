#include <sys/time.h>
#include <stdio.h>
struct timeval t1, t2;
int main(void)
{
    double time_taken;
    gettimeofday(&t1, NULL);
    int t =1000000000;
    while(t--){
    }
    // Perform the tasks whose execution time is to be measured
    gettimeofday(&t2, NULL);
    time_taken = (t2.tv_sec - t1.tv_sec) * 1e6;
    time_taken = (time_taken + (t2.tv_usec - t1.tv_usec)) * 1e-6;
    printf("The tasks took %f seconds to execute\n", time_taken);
}