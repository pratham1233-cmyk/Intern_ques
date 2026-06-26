#include <stdio.h>

int main()
{
    char ProductName[5][20] = {"Shirt","Trouser","Pant","Cargo","TShirt"};
    int ProductID[5] = {101,102,103,104,105};
    int Product_Qty[5] = {10,20,30,40,50};
    float Product_MRP[5] = {999,1499,1299,1799,699};
    char Product_Size[5][5] = {"M","L","XL","M","S"};

    int choice;

    do
    {
        printf("\n----------- TRENDS INVOICE -----------\n");
        printf("1. Stock Availability\n");
        printf("2. Purchase Items\n");
        printf("3. Checkout & Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nName\tID\tQty\tMRP\tSize\n");

            for(int i=0;i<5;i++)
            {
                printf("%s\t%d\t%d\t%.2f\t%s\n",
                       ProductName[i],
                       ProductID[i],
                       Product_Qty[i],
                       Product_MRP[i],
                       Product_Size[i]);
            }
        }

        else if(choice==2)
        {
            int product_id, quantity;
            int found=0;

            printf("Enter Product ID: ");
            scanf("%d",&product_id);

            printf("Enter Quantity: ");
            scanf("%d",&quantity);

            for(int i=0;i<5;i++)
            {
                if(ProductID[i]==product_id)
                {
                    found=1;

                    if(Product_Qty[i]>=quantity)
                    {
                        float total;

                        Product_Qty[i]-=quantity;
                        total=quantity*Product_MRP[i];

                        printf("\nPurchase Successful!\n");
                        printf("--------------------------------------\n");
                        printf("        RECEIPT OF PURCHASE\n");
                        printf("--------------------------------------\n");
                        printf("Product Name : %s\n",ProductName[i]);
                        printf("Product ID   : %d\n",ProductID[i]);
                        printf("Size         : %s\n",Product_Size[i]);
                        printf("MRP          : %.2f\n",Product_MRP[i]);
                        printf("Quantity     : %d\n",quantity);
                        printf("Total Amount : %.2f\n",total);
                    }
                    else
                    {
                        printf("Insufficient Stock!\n");
                    }

                    break;
                }
            }

            if(found==0)
            {
                printf("Invalid Product ID!\n");
            }
        }

        else if(choice==3)
        {
            printf("\nThank You For Shopping With Us!\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }

    }while(choice!=3);

    return 0;
}