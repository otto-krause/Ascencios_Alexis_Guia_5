#include<stdio.h>
#include<stdlib.h>

int main()
{
float n,nc,np,c,pc,nt;
c=0;
int i;
for (i=1; i<=30; i++)
{
for (nc=1; nc<=10; nc++)
{
	printf("ingrese una nota \n");
	scanf("%f",&n);
	nt=n+nt;
	}
np=nt/10;
printf("el promedio del alumno es %f \n",np);	
}
pc=c/30;
printf("el promedio de la clase es %f \n",pc);
return 0;

}
