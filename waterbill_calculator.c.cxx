/*
Description: The program should calculate the total water bill
Reg no: CT100/G/26262/25
*/

#include <stdio.h>
int main()
{
    
int units;
float bill;

printf("Enter water units consumed: ");
scanf("%d",&units);

if(units>=0&& units<=30)
{bill= units * 20;}
else if(units>=31&& units<=60)
{bill= units * 25;}
else if(units>60)
{bill= units * 30;}

printf("Total bill: KES %0.2f\n", bill);

return 0;
}