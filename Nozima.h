typedef struct{
  int id;
  char category[50];
  char name[50];
  int price;
  int quantity;
} Product;

Product products[100];
int productCount=0;

void addProduct(){

    products[productCount].id= productCount+1;

    printf("Mahsulot kategoriyasini kiriting:");
    scanf("%s",products[productCount].category);

    printf("Mahsulot Nomini kiriting:");
    scanf("%s",products[productCount].name);

    printf("Mahsulot narxini kiriting:");
    scanf("%d",&products[productCount].price);

    printf("Mahsulot miqdorini kiriting:");
    scanf("%d",&products[productCount].quantity);

    productCount++;
    printf("Mahsulot muvaffaqqiyatli qo'shildi.\n");

    }

void viewProduct(){
    int i,id;
    printf("Mahsulot id sini  kiriting:");
    scanf("%d",&id);

    for(i=0; i<productCount; i++){
        if(products[i].id ==id){
            printf("\nID: %d\n",products[i].id);
            printf("Kategoriya: %s\n",products[i].category);
            printf("Nomi: %s\n",products[i].name);
            printf("Narxi: %d\n",products[i].price);
            printf("Miqdori: %s\n",products[i].quantity);
            return;
            }
    }
    printf("Afsuski,mahsulot topilmadi!");
}

void viewAllProducts(){
    int i;
    for(i=0; i<productCount; i++){
        printf("\nID: %d\n",products[i].id);
        printf("Kategoriya: %s\n",products[i].category);
        printf("Nomi: %s\n",products[i].name);
        printf("Narxi: %d\n",products[i].price);
        printf("Miqdori: %d\n",products[i].quantity);

    }
}
