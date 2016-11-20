#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit limit;
    getrlimit(RLIMIT_STACK, &limit);
    printf("stack size: %lld\n", (long long)limit.rlim_cur);
    getrlimit(RLIMIT_NPROC, &limit);
    printf("process limit: %ld\n", (long)limit.rlim_cur);
    getrlimit(RLIMIT_NOFILE, &limit);
    printf("max file descriptors: %ld\n", limit.rlim_cur);
    return 0;
}
