#include<stdio.h>
#include<conio.h>
int main()
{
	int a=100;
	int *p,**p1;
	p=&a;
	printf("%d\n",a); /*value of a */
	printf("%p\n",&a);/*address of a */
	printf("%d\n",*p);/*value of a */
	printf("%d\n",p);/*value of p means address of a */
	printf("%p\n",&p);/*address of p */
	getch ();
	return 0;
}
