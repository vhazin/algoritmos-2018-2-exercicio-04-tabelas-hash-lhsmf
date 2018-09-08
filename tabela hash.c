#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    bool x = false;
    while(n--)
    {
        if(x)
        {
            printf("\n");
        }
        else
            x = true;
        int a;
        int b;
        scanf("%d%d", &a, &b);
        int c[b], i=0;
        for(int j=0; j<b; j++)
            scanf("%d", &c[j]);
        for(i = 0; i < a; i++)
        {
            printf("%d -> ", i );
            for(int j=0;j<b;j++){
            
            if(c[j]%a==i)
                printf("%d -> ", c[j] );
            
            }
            printf("\\ \n");
        }
    }
    return 0;
}
