// WAP to input id, salary of 3 employes & display them
#include <stdio.h>
int main(){
    struct employee
    {
        int id;
        double salary;
    };
    struct employee e1,e2,e3;
    printf("Enter id of first employee: ");
    scanf("%d",&e1.id);
    printf("Enter salary of first employee: ");
    scanf("%d",&e1.salary);
    printf("Enter id of second employee: ");
    scanf("%d",&e2.id);
    printf("Enter salary of second employee: ");
    scanf("%d",&e2.salary);
    printf("Enter id of third employee: ");
    scanf("%d",&e3.id);
    printf("Enter salary of third employee: ");
    scanf("%d",&e3.salary);

    printf("\n\n");

    printf("First employee id: %d, salary: %d rupees\n",e1.id,e1.salary);
    printf("Second employee id: %d, salary: %d rupees\n",e2.id,e2.salary);
    printf("Third employee id: %d, salary: %d rupees",e3.id,e3.salary);
}