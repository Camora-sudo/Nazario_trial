#include <stdio.h>  

int main ()
{
    int nOption = 0; 
    float nNumber1;
    float nNumber2; 
    float nResult = 0; 

    printf ("enter first number: \n");
    scanf("%f", &nNumber1);
    printf ("Enter second number: \n");
    scanf("%f", &nNumber2);

    printf ("_______________________________________\n"); 
    printf ("1: Addition\n");
    printf ("2: Subtraction\n");
    printf ("3: Multiplication\n");
    printf ("4: Division\n");
    
    printf ("Enter option number: \n");
    scanf("%d", &nOption);


    switch (nOption){

    case 1: 
        nResult = nNumber1 + nNumber2; 
        printf ("Result: %.2f", nResult); 
        break; 
    case 2: 
        nResult = nNumber1 - nNumber2; 
        printf ("Result: %.2f", nResult); 
        break;
    case 3: 
        nResult = nNumber1 * nNumber2; 
        printf ("Result: %.2f", nResult); 
        break;
    case 4:
        nResult = nNumber1 / nNumber2; 
        printf ("Result: %.2f", nResult); 
        break;
    }

    return 0; 
}