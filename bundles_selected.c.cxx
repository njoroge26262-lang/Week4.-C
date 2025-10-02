/*
Description: The program should use a awitch statement to display bundles selected and its cost
Reg No: CT100/G/26262/25
*/

#include <stdio.h>
int main()
{
int choice; 

    printf("Select a data bundle below:\n");
    printf("1. 100MB @ 50KES\n");
    printf("2. 500MB @ 200KES\n");
    printf("3. 1GB @ 350KES\n");
    printf("4. 2GB @ 600KES\n");
    
    printf("Select choice (1-4)");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1 :
        printf("You've selected 100MB @ 50KES\n");
        break;
        case 2:
        printf("You've selected 500MB @ 200KES\n");
        break;
        case 3:
        printf("You've selected 1GB @ 350KES\n");
        break;
        case 4:
        printf("You've selected 2GB @ 600KES\n");
        break;
        default:
        printf("Invalid choice!\n");
    }
    
    return 0;
}