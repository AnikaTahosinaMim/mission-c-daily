#include <stdio.h>
int main(){
    int n;
    int i;
    int fact = 1,facts;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        facts = fact*i;
    }
    printf("%d\n",facts);
    return 0;
}
