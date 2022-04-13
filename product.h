#include <stdio.h>
#define MAX 100

typedef struct 
{
    char product_name[MAX];//물품 이름
    char product_exp[1000];//물품 설명
    char weight[MAX];//물품의 무게
    int price;//물품 가격
    int shipping;//발송 방식
    char origin[MAX];//물품 원산지
    int user_money;//적립금

}Product;//프로덕트를 스트럭트 형태로 생성한다. 



int createProduct(Product *p);//제품을 추가한다. 
void readProduct(Product p);//한가지의 프로덕트 정보를 출력한다. 
int updateProduct(Product *p);//제품 정보를 업데이트한다.
int deleteProduct(Product *p);//제품의 정보를 삭제한다. 
int selectSearchMenu();
int selectMenu();//추가, 출력, 업데이트 등 어떠한 기능을 사용할지 출력한다. 
