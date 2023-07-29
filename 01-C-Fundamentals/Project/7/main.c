#include <stdio.h>

int main(void)
{
         int dollor=0, bill=0;

    printf("Enter a dollar$: \n");
    scanf("%d", &dollor);

    bill = dollor / 20;   
    printf("$20 bill: %d\n", bill);
    dollor=(dollor-20);
    
    
     bill = dollor / 10;
    printf("$10 bill: %d\n", bill);
    dollor=(dollor-10);
    
      bill = dollor / 5;
    printf("$5 bill: %d\n", bill);
    dollor=(dollor-5);
    
      bill = dollor / 1;
    printf("$1 bill: %d\n", bill);
    dollor=(dollor-1);
        
}
