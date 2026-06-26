#include <stdio.h>

struct Product {
    char name[30];
    int  id;
    int  qty;
    float mrp;
    float discount;
    char size[6];
};

int main() {
    struct Product p[50] = {
        {"Shirt",   101, 10, 999,  0,  "M"},
        {"Trouser", 102, 20, 1499, 5,  "L"},
        {"Pant",    103, 30, 1299, 10, "XL"},
        {"Cargo",   104, 40, 1799, 0,  "M"},
        {"TShirt",  105, 50, 699,  15, "S"}
    };
    int pCount = 5;

    int role;
    do {
        printf("\n***********************************\n");
        printf("   WELCOME TO TRENDS CLOTHING STORE\n");
        printf("***********************************\n");
        printf("1. Owner Login\n");
        printf("2. Customer\n");
        printf("3. Exit\n");
        printf("Select Role: ");
        scanf("%d", &role);

        if (role == 1) {
            char pass[30];
            printf("Enter Owner Password: ");
            scanf("%s", pass);

            int match = 1;
            char correct[] = "admin123";
            for (int i = 0; i < 9; i++) {
                if (pass[i] != correct[i]) {
                    match = 0;
                    break;
                }
            }

            if (match == 1) {
                printf("Login Successful!\n");

                int oc;
                do {
                    printf("\n--- OWNER PANEL ---\n");
                    printf("1. View All Stock\n");
                    printf("2. Add Product\n");
                    printf("3. Delete Product\n");
                    printf("4. Modify Product\n");
                    printf("5. Logout\n");
                    printf("Choice: ");
                    scanf("%d", &oc);

                    if (oc == 1) {
                        printf("No. Name ID Qty MRP Disc Size\n");
                        printf("----------------------------------------------------\n");
                        for (int i = 0; i < pCount; i++) {
                            printf("%d %s %d %d %f %f %s\n",
                                   i + 1, p[i].name, p[i].id, p[i].qty,
                                   p[i].mrp, p[i].discount, p[i].size);
                        }

                    } else if (oc == 2) {
                        if (pCount >= 50) {
                            printf("Store full!\n");
                        } else {
                            int maxID = 0;
                            for (int i = 0; i < pCount; i++)
                                if (p[i].id > maxID) maxID = p[i].id;

                            printf("Product Name  : ");
                            scanf("%s", p[pCount].name);
                            printf("Quantity      : ");
                            scanf("%d", &p[pCount].qty);
                            printf("MRP           : ");
                            scanf("%f", &p[pCount].mrp);
                            printf("Discount      : ");
                            scanf("%f", &p[pCount].discount);
                            printf("Size          : ");
                            scanf("%s", p[pCount].size);
                            p[pCount].id = maxID + 1;
                            pCount++;
                            printf("Product added with ID %d\n", maxID + 1);
                        }

                    } else if (oc == 3) {
                        printf("Enter Product ID to delete: ");
                        int did; scanf("%d", &did);
                        int found = 0;
                        for (int i = 0; i < pCount; i++) {
                            if (p[i].id == did) {
                                found = 1;
                                char yn;
                                printf("Delete %s ? (y/n): ", p[i].name);
                                scanf(" %c", &yn);
                                if (yn == 'y' || yn == 'Y') {
                                    for (int j = i; j < pCount - 1; j++)
                                        p[j] = p[j + 1];
                                    pCount--;
                                    printf("Product deleted.\n");
                                }
                                break;
                            }
                        }
                        if (found == 0) printf("Product not found.\n");

                    } else if (oc == 4) {
                        printf("Enter Product ID to modify: ");
                        int mid; scanf("%d", &mid);
                        int found = 0;
                        for (int i = 0; i < pCount; i++) {
                            if (p[i].id == mid) {
                                found = 1;
                                printf("Modifying: %s\n", p[i].name);
                                printf("1.Name  2.Qty  3.MRP  4.Discount  5.Size  6.All\n");
                                printf("Choice: ");
                                int mc; scanf("%d", &mc);

                                if (mc == 1) {
                                    printf("New Name: "); scanf("%s", p[i].name);
                                } else if (mc == 2) {
                                    printf("New Qty: "); scanf("%d", &p[i].qty);
                                } else if (mc == 3) {
                                    printf("New MRP: "); scanf("%f", &p[i].mrp);
                                } else if (mc == 4) {
                                    printf("New Discount: "); scanf("%f", &p[i].discount);
                                } else if (mc == 5) {
                                    printf("New Size: "); scanf("%s", p[i].size);
                                } else if (mc == 6) {
                                    printf("New Name: ");     scanf("%s", p[i].name);
                                    printf("New Qty: ");      scanf("%d", &p[i].qty);
                                    printf("New MRP: ");      scanf("%f", &p[i].mrp);
                                    printf("New Discount: "); scanf("%f", &p[i].discount);
                                    printf("New Size: ");     scanf("%s", p[i].size);
                                } else {
                                    printf("Invalid choice.\n");
                                }
                                printf("Product updated.\n");
                                break;
                            }
                        }
                        if (found == 0) printf("Product not found.\n");

                    } else if (oc != 5) {
                        printf("Invalid choice!\n");
                    }

                } while (oc != 5);

            } else {
                printf("Wrong Password!\n");
            }

        } else if (role == 2) {
            int cc;
            do {
                printf("\n--- CUSTOMER PANEL ---\n");
                printf("1. Browse Products\n");
                printf("2. Purchase Item\n");
                printf("3. Logout\n");
                printf("Choice: ");
                scanf("%d", &cc);

                if (cc == 1) {
                    printf("Name ID Qty MRP Disc FinalPrice\n");
                    printf("----------------------------------------------------\n");
                    for (int i = 0; i < pCount; i++) {
                        if (p[i].qty > 0) {
                            float fp = p[i].mrp * (1 - p[i].discount / 100.0);
                            printf("%s %d %d %f %f %f\n",
                                   p[i].name, p[i].id, p[i].qty,
                                   p[i].mrp, p[i].discount, fp);
                        }
                    }

                } else if (cc == 2) {
                    printf("Enter Product ID: ");
                    int bid; scanf("%d", &bid);
                    printf("Enter Quantity : ");
                    int bqty; scanf("%d", &bqty);

                    int found = 0;
                    for (int i = 0; i < pCount; i++) {
                        if (p[i].id == bid) {
                            found = 1;
                            if (p[i].qty == 0) {
                                printf("Out of stock!\n");
                            } else if (bqty <= 0 || bqty > p[i].qty) {
                                printf("Invalid quantity! Available: %d\n", p[i].qty);
                            } else {
                                float fp  = p[i].mrp * (1 - p[i].discount / 100.0);
                                float sub = fp * bqty;
                                float savings = (p[i].mrp * bqty) - sub;
                                p[i].qty -= bqty;

                                printf("\n==========================================\n");
                                printf("        TRENDS - PURCHASE RECEIPT\n");
                                printf("==========================================\n");
                                printf("Product  : %s\n", p[i].name);
                                printf("ID       : %d\n", p[i].id);
                                printf("Size     : %s\n", p[i].size);
                                printf("MRP      : %f\n", p[i].mrp);
                                printf("Discount : %f\n", p[i].discount);
                                printf("Quantity : %d\n", bqty);
                                if (savings > 0) printf("You Saved: %f\n", savings);
                                printf("TOTAL    : %f\n", sub);
                                printf("==========================================\n");
                                printf("   Thank You for Shopping at TRENDS!\n");
                                printf("==========================================\n");
                            }
                            break;
                        }
                    }
                    if (found == 0) printf("Invalid Product ID!\n");

                } else if (cc != 3) {
                    printf("Invalid choice!\n");
                }

            } while (cc != 3);

        } else if (role != 3) {
            printf("Invalid choice!\n");
        }

    } while (role != 3);

    printf("\nGoodbye!\n");
    return 0;
}