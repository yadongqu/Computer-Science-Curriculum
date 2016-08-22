#include <stdio.h>
#include <limits.h>

int int_size_is_at_least_32(void);

int main(){
	printf("%d", int_size_is_at_least_32());
}

int int_size_is_at_least_32(void)
{
        int t = 0x80000000;
        return t == INT_MIN;
}
