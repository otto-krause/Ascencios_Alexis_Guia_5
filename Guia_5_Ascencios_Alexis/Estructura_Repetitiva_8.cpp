#include<stdio.h>
#include<stdlib.h>

int main(){
int i=0,c=0,c1=0,c2=0,num=0;
for (i=1; i<=10; i++)
{
printf("ingrese un numero \n");
scanf("%d",&num);
if (num>0)
{
c=c+1;
}
else{
if(num==0){

c1=c1+1;
}
else{
c2=c2+1;
}
}
}
printf("hay %d positivos, %d negativos y %d ceros\n",c,c2,c1);
return 0;

}
