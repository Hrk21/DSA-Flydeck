#include <stdio.h>
void printinc(int n)
{
    if(n==1)
    {
        printf("1");
        return;
    }
    printinc(n-1);
    printf("%d",n);
}

int main(){
    printinc(5);
    return 0;
}