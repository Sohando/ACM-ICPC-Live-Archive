#include <stdio.h>
#include<math.h>

bool isLeap(int year)
{
      if(year%4==0 && year%100!=0 || year%400==0){
      	return true;
      }
      else{
      	return false;
      }
}
 
int main()
{
     int day,month,y,qy,cases=1,t;
     
     scanf("%d",&t);
     
     while(t--){
     	scanf("%d %d %d %d",&day,&month,&y,&qy);
     	int cou=0;
     	
     	if(isLeap(y) && month==2 && day== 29){
     	     for(int i=y+4;i<=qy;i+=4){
     	     	if(isLeap(i)){
     	     	   cou++;
     	     	}
     	     }
     	   printf("Case %d: %d\n",cases++,cou);
     	}
     	else{
     	    printf("Case %d: %d\n",cases++,qy-y);
     	}
     }
   
     return 0;
}
