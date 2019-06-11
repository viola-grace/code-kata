#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
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
