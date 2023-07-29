#include <stdio.h>

int main(void)
{
        printf("hello, world\n");
	int r=0;
	float v=0;

	printf("Enter the radius of sphere: ");
	scanf("%d",&r);
		v=(4*22*r*r*r)/(7*3);
	printf("Volume of sphere: %f\n",v);
        
}
