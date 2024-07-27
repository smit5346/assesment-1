#include <stdio.h>

int main() 
{
    int choice, quantity, totalAmount = 0;
    char moreOrders;

    do 
	{
        printf("---------- Menu ---------\n");
        printf("1. Pizza    price = 180rs/pcs\n");
        printf("2. Burger   price = 100rs/pcs\n");
        printf("3. Dosa     price = 120rs/pcs\n");
        printf("4. Idli     price = 50rs/pcs\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You have selected Pizza.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 180 * quantity;
                break;
            case 2:
                printf("You have selected Burger.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 100 * quantity;
                break;
            case 3:
                printf("You have selected Dosa.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 120 * quantity;
                break;
            case 4:
                printf("You have selected Idli.\n");
                printf("Enter the quantity: ");
                scanf("%d", &quantity);
                totalAmount += 50 * quantity;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                continue;
        }

        printf("Total amount is = %d\n", totalAmount);
        printf("Do you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrders);
    }
	 while (moreOrders == 'y' || moreOrders == 'Y');

    printf("Final Total Amount = %d\n", totalAmount);

    return 0;
}


