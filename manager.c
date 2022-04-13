
#include "manager.h"
#include <string.h>
#include <stdlib.h>


void listProduct(Product *p,int count){
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        printf("%d번 \n",i);
        readProduct(p[i]);
        printf("\n");
        printf("===================\n");
    }
}

int printFinalPrice(Product *p,int count){
    int final=0;
    int money=0;
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        money=p[i].price+money;
        final=p[i].user_money+final;
        #ifdef DEBUG
            printf("%d %d ",money,final);
        #endif
    }
    
    return (money-final);
}
void searchProductName_poly(Product *p,int count){
    char search[MAX];
    int scount=0;
    getchar();
    printf("제품 이름:");
    scanf("%[^\n]s",search);
    printf("\n***************\n");
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        #ifdef DEBUG
            printf("\nDEBUG\n");
            readProduct(p[i]);
             printf("===================\n");
        #endif
        if(strstr(p[i].product_name,search)){
        printf("\n");
        readProduct(p[i]);
        scount++;
        }
    }
    if(scount==0)
    printf("데이터 없음!\n");
}
void searchproductExp_poly(Product *p,int count){//제품의 설명 검색을 이용해 물품 정보를 출력한다.
 char search[MAX];
    int scount=0;
    getchar();
    printf("제품 설명:");
    scanf("%[^\n]s",search);
    printf("\n***************\n");
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        #ifdef DEBUG
            printf("\nDEBUG\n");
            readProduct(p[i]);
             printf("===================\n");
        #endif
        if(strstr(p[i].product_exp,search)){
        printf("\n");
        readProduct(p[i]);
        scount++;
        }
    }
    if(scount==0)
    printf("데이터 없음!\n");
}
void searchProductOrigin_poly(Product *p,int count){
    char search[MAX];
    int scount=0;
    getchar();
    printf("제품 원산지:");
    scanf("%[^\n]s",search);
    printf("\n***************\n");
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        #ifdef DEBUG
             printf("\nDEBUG\n");
            readProduct(p[i]);
             printf("===================\n");
        #endif
        if(strstr(p[i].origin,search)){
            printf("\n");
        readProduct(p[i]);
        scount++;
        }
    }
    if(scount==0)
    printf("데이터 없음!\n");
}

void searchProductWeight_poly(Product *p,int count){
    char search[MAX];
    int scount=0;
    getchar();
    printf("제품 무게(정확히 입력):");
    scanf("%[^\n]s",search);
    printf("\n***************\n");
    for(int i=0;i<count;i++){
        if(p[i].price==-1) continue;
        #ifdef DEBUG
            printf("\nDEBUG\n");
            readProduct(p[i]);
             printf("===================\n");
        #endif
        if(strcmp(p[i].weight,search)==0){
            printf("\n");
        readProduct(p[i]);
        scount++;
        }
    }
    if(scount==0)
    printf("데이터 없음!\n");
}
int loadData(Product *p){//파일 형태의 제품 정보를 입력한다.
    FILE *fp=NULL;
    char *dummy=NULL;
    char sentence[100];
    int i=0;
    fp=fopen("product.txt","rt");
    if(fp==NULL) return -1;
    while(fgets(sentence,MAX,fp)){
        #ifdef DEBUG
            printf("%d\n",i);
            printf("%s\n\n",sentence);
        #endif
        dummy=strtok(sentence,";");
        strcpy(p[i].product_name,dummy);
        dummy=strtok(NULL,";");
        strcpy(p[i].product_exp,dummy);
        dummy=strtok(NULL,";");
        strcpy(p[i].weight,dummy);
        dummy=strtok(NULL,";");
        p[i].price=atoi(dummy);
        dummy=strtok(NULL,";");
        p[i].shipping=atoi(dummy);
        dummy=strtok(NULL,";");
        strcpy(p[i].origin,dummy);
        dummy=strtok(NULL,";");
        p[i].user_money=atoi(dummy);
        i++;
    }
    fclose(fp);
    return i;
}




