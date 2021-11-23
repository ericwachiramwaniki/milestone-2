






/*

Users - view users ,add new user , edit, delete, login,
catalogue

*/



#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(); // prototype
int main()
{
   int action;
   action = menu();
   // execute action
    return 0;


}

int menu()//header
{
int action;
    do{
        printf("\tCounty Library!\n");
        printf("welcome Eric.\n");
        printf("What would you like to do?\n");
        printf("1. View Users.\n");
        printf("2. Add new User\n");
        printf("3. Edit user.\n");
        printf("4. Delete User.\n");
        printf("5. Change Password.\n");
        printf("6. Logout.\n");
        printf("7. Exit.\n");
        printf("Selected action(1-7): ");
        scanf("%d",&action);
        if(action < 1 || action > 7) {
                system("cls");
            printf("Invalid Action. Try again");
        }
    } while (action < 1 || action > 7);


    return action;


}


