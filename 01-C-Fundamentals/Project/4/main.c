#include <stdio.h>

int main(void)
{
	      float Dollar=0;
        float Tax=5;
        float Total=0;
        
        printf("Enter dollar and cents:$");
        scanf("%f",&Dollar);
            Total=Dollar+Tax;
        printf("total: $ %f\n",Total);
        
}
