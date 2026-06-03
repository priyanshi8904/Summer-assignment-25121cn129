#include<stdio.h>
int main()
{int n1,n2,max,lcm;
printf("enter two number");
scanf("%d %d",&n1 ,&n2);
max=(n1>n2)?n1:n2;
while(1)
{if(max %n1==0 &&max%n2==0)
{lcm=max;
break;
}max++;
}
printf("lcm of %d and %d =%d",n1,n2,lcm);
return 0;
}
