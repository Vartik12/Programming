#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{	
	int n,m;
	printf("no. of elements in circular array\n");
	scanf("%d",&n);
	int a[n];
	printf("any number corresponding to which a element is printed by that circular array\n");
	scanf("%d",&m);
	printf("%d",a[m%n]);
}