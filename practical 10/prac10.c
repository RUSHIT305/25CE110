#include<stdio.h>
void main()
{
    int choice , bill , quantity , ans ;
    printf("Menu:\n1-Burger\n2-Pizza\n3-Pasta\n4-Sandwich\n5-French-Fries\n");

    r:
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Quantity of Burger : ");
            scanf("%d",&quantity);
            bill += 150*quantity ;
            break;

        case 2:
            printf("Quantity of Pizza : ");
            scanf("%d",&quantity);
            bill += 200*quantity ;
            break;

        case 3:
            printf("Quantity of Pasta : ");
            scanf("%d",&quantity);
            bill += 120*quantity ;
            break;

        case 4:
            printf("Quantity of Sandwich : ");
            scanf("%d",&quantity);
            bill += 100*quantity ;
            break;

        case 5:
            printf("Quantity of French-Fries : ");
            scanf("%d",&quantity);
            bill += 80*quantity ;
            break;

        default:
            printf("Invalid Choice!");
            goto r;
            break;
    }

    m:
    printf("\n\n1-Add another Item\n2-Continue for Billing\nEnter your choice:");
    scanf("%d",&ans);
    switch(ans)
    {
        case 1:
            goto r;
            break;

        case 2:
            printf("\n\nBill = %d",bill);
            break;

        default:
            printf("Invalid Choice!");
            goto m;
            break;
    }



}
