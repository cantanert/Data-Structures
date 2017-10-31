#include <stdio.h>
#include <stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();


int main()
{
    char selection='C';
    int firstValue,secondValue,summary;

    printf("************************** CALCULATOR ******************************\n\n");
    printf("Please select an operation from below.\n\n");


    while(selection == 'C' ){
            printf(" Addition  -  A\n Subtraction  -  S\n Multiplication  -  M\n Division  -  D");
            printf("\n Your choose : "); scanf("%c",&selection);
            printf("\n Your selection is : %c", selection);


                if(selection == 'a' || selection == 'A'){
                    printf("\n First value : "); scanf("%d",&firstValue);
                    printf(" Second value : "); scanf("%d",&secondValue);
                    summary= firstValue + secondValue;
                }
                else if(selection== 's' || selection == 'S'){
                    printf("\n First value : "); scanf("%d",&firstValue);
                    printf(" Second value : "); scanf("%d",&secondValue);
                    summary= firstValue - secondValue;
                }
                else if(selection== 'm' || selection == 'M'){
                    printf("\n First value : "); scanf("%d",&firstValue);
                    printf(" Second value : "); scanf("%d",&secondValue);
                    summary= firstValue * secondValue;
                }
                else if(selection== 'd' || selection == 'D'){
                    printf("\n First value : "); scanf("%d",&firstValue);
                    printf(" Second value : "); scanf("%d",&secondValue);
                    summary= firstValue / secondValue;
                }
                else{
                    printf("Invalid character!");
                }

            printf("Sonuç : %d",summary);

            printf("\n\n Clear  -  C\n Go ahead  -  G");
            printf("\n Your choose : "); scanf("%c",&selection);
    }





    return 0;
}
