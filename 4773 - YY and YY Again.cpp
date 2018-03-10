#include<stdio.h>

int main()
{
    char ch;
    int ans=0;

    while(scanf("%c",&ch)==1)
    {
        if(ch=='\n')
        {
            if(ans>100)
            {
                printf("INVALID\n");
            }
            else
            {
                printf("%d\n",ans);
            }

            ans=0;
            continue;
        }
        else if(ch>='A' && ch<='Z')
        {
            ans+=(ch%64);
        }

    }

    return 0;
}
