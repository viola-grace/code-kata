#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    scanf("%ld",&n);
    if(n>0)
    {
        printf("Positive");
    }
    else if(n==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}
