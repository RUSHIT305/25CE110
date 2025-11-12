#include<stdio.h>
void main()
{
    float discount;
    int finalamount;
    int  totalamount;
    int amount;

    printf(" enter your amount ");
    scanf("%d",&totalamount);

    if(amount<=1000)
    {

     printf("total amount = &d\n", totalamount);
        printf("final amount =%d\n",finalamount);
        printf("discount amount : %.2f\n", discount );
    }
    else if (totalamount>1000 && totalamount<5000)

    {
        discount=0.01;
        finalamount=totalamount-discount;
         printf("total amount = &d\n", totalamount);
        printf("final amount =%d\n",finalamount);
        printf("discount amount =%f\n", discount );
    }

    else
        discount=0.05;
    finalamount=totalamount-discount;
     printf("total amount = &d\n", totalamount);
        printf("final amount =%d\n",finalamount);
        printf("discount amount =%d\n", discount );
    printf("rushit shah 25ce110\n");
}


