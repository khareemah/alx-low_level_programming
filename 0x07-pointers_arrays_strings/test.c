#include <stdio.h>

int main() {
    // Write C code here
    printf("enter integer:");
    int i, a[3], total = 0;
    
    for(i = 0; i < 3; i++)
{
    scanf("%d", &a[i]);
}
    for(i = 2; i >= 0; i--)
{
	total += a[i];
}
	
    printf("%d\n", total / 3);
    return 0;
}
