#include <stdio.h>
#include "product.h"
#include <string.h>


int createProduct(Product *p){//제품을 추가한다.
    getchar();
    printf("제품 이름: ");
    scanf("%[^\n]s",p->product_name);
    getchar();
    printf("제품 설명: ");
    scanf("%[^\n]s",p->product_exp);
    getchar();
    printf("제품 중량(g): ");
    scanf("%[^\n]s",p->weight);
    getchar();
    printf("제품 가격: (무조건 숫자만): ");
    scanf("%d",&p->price);
    do{
        printf("배송 방법(1: 새벽배송 혹은 2: 택배배송): ");
        scanf("%d",&p->shipping);
    } while(p->shipping!=1&&p->shipping!=2);
    getchar();
    printf("원산지: ");
    scanf("%[^\n]s",p->origin);
    p->user_money=p->price/100;
    return 1;

}
void readProduct(Product p){//한가지의 프로덕트 정보를 출력한다. 
    printf("제품 이름: %s\n",p.product_name);
    printf("제품 설명: %s\n",p.product_exp);
    printf("제품 중량: %s\n",p.weight);
    printf("제품 가격: %d\n",p.price);
    printf("배송 방법: ");
    if(p.shipping==1){
        printf("새벽배송\n");
    } 
    else if(p.shipping==2){
        printf("택배배송\n");
    }
    printf("원산지: %s\n",p.origin);
}


int updateProduct(Product *p){//제품 정보를 업데이트한다.
   getchar();
    printf("제품 이름: ");
    scanf("%[^\n]s",p->product_name);
    getchar();
    printf("제품 설명: ");
    scanf("%[^\n]s",p->product_exp);
    getchar();
    printf("제품 중량(g): ");
    scanf("%[^\n]s",p->weight);
    getchar();
    printf("제품 가격: (무조건 숫자만): ");
    scanf("%d",&p->price);
    do{
        printf("배송 방법(1: 새벽배송 혹은 2: 택배배송): ");
        scanf("%d",&p->shipping);
    } while(p->shipping!=1&&p->shipping!=2);
    getchar();
    printf("원산지: ");
    scanf("%[^\n]s",p->origin);
    p->user_money=p->price/100;
    return 1;
}
int deleteProduct(Product *p){//제품의 정보를 삭제한다.
    p->price=-1;
    return 1;
}


int selectMenu(){
    int menu;
   printf("\n\n메뉴 선택\n");
   printf("================\n");
   printf("1. 제품 추가\n");
   printf("2. 제품 정보 출력\n");
   printf("3. 제품 정보 업데이트\n");
   printf("4. 제품 정보 삭제\n");
   printf("5. 제품 검색\n");
   printf("6. 제품 정보 파일 저장\n");
   printf("7. 최종 가격 출력\n");
   printf("0. 종료\n");
   printf("========================\n\n");
   scanf("%d",&menu);
   printf("\n");
   return menu;
}
int selectSearchMenu(){
    int menu;
    printf("1. 이름 검색\n");
    printf("2. 설명 검색\n");
    printf("3. 원산지 검색\n");
    printf("4. 무게 검색(완전 동일하게 입력)\n");
    printf("0. 뒤로\n");
    printf("========================\n\n");
    scanf("%d",&menu);
     return menu;
    
}


