#include<stdio.h>
#include<conio.h>
int main()
{
	int a=100;
	int *p,**p1;
	p=&a;
	p1=&p;
	printf("%d\n",a);/* value of a */
	printf("%p\n",&a); /* address of a */
	printf("%d\n",*p); /* access the value of a */
	printf("%p\n",&p);	/* address of *p */
	printf("%d\n",**p1); /* value of a */
	printf("%p\n",*p1);  /* value of *p means address of a */
	printf("%p\n",&p1); /* address of p1 */
	getch ();
	return 0;
}
