#include <bits/stdc++.h>
using namespace std;

int main()
{

    char ch;
    while(1){
       map <char,int> ma;
       int word = 0,w=0;

       while(scanf("%c",&ch) && ch!='1'){

       	if(ch>='A' && ch<='z') {
            ch = tolower(ch);
            w=1;
       	}

       	else if(ch==' ' || ch=='\n'){
            if(w==1){
                word++;
                w=0;
            }
            if(ch=='\n') break;
       	}

       	ma[ch]++;
       }

       if(ch=='1') break;

       printf("%d ",word);
       for(char i='a'; i<='z'; i++){
            printf("%d",ma[i]);

            if(i!='z') printf(" ");
       }
       printf("\n");


    }
    return 0;
}
