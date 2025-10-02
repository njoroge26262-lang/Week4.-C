/*Description : The program should check the exam eligibility provided with details
Registration Number: CT100/G/26262/25
*/

#include <stdio.h>

int main ()
{
int a,m;

printf("Enter attendance : ");
scanf("%d", &a);
printf("Enter average marks: ");
scanf("%d", &m);

    if(a>=75 && m>=40)
    {printf("You are eligible");}
    else {printf("Not eligible");}

return 0;
}