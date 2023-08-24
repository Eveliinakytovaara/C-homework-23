#include <stdio.h>

int main ()
{
    int choose;
    float bus = 0;
    float cab = 0;
    float amount = 0;

    printf("Bus price: ");
    scanf("%f", &bus);
    printf("Cab price: ");
    scanf("%f", &cab);
    printf("How much money do you have? Enter the amount:");
    scanf("%f", &amount);

    printf("You have: %.2f euros left to use.\n", amount);

    if (amount < bus && amount < cab) {
        printf("I'm sorry, you don't have enough money. You need to walk.\n");
    } else {
        printf("Choose bus - 1 or a cab - 2: ");
        scanf("%d", &choose);

        if (choose == 1) {
            if (amount >= bus) {
                amount -= bus;
                printf("You are taking the bus. Money left: %.2f euros\n", amount);
            } else {
                printf("I'm sorry, you don't have enough money. You need to walk.\n");
            }
        } else if (choose == 2) {
            if (amount>= cab) {
                amount -= cab;
                printf("You are taking the cab. Money left: %.2f euros\n", amount);
            } else {
                printf("I'm sorry, you don't have enough money. You need to walk.\n");
            }
        } else {
            printf("!!!WRONG NUMBER!!! .\n");
            printf("Please choose 1 for the bus and 2 for the cab.");
        }

        if (amount < bus && amount < cab) {
            printf("I'm sorry, you don't have enough money. You need to walk.\n");
        }
    }
    return 0;
}



