#include "product.h"


void listProduct(Product *p,int count);//모든 프로덕트의 정보를 출력한다. 
void searchproductExp_poly(Product *p,int count);//제품의 설명 검색을 이용해 물품 정보를 출력한다.
void searchProductName_poly(Product *p,int count);//제품의 이름 검색을 이용해 물품 정보를 출력한다. 
void searchProductOrigin_poly(Product *p, int count);//제품의 원산지 검색을 이용해 물품 정보를 출력한다.
void searchProductWeight_poly(Product *p,int count);//제품의 무게 검색을 통해 물품 정보를 출력한다.
int printFinalPrice(Product *p,int count);//최종 가격을 출력한다. 최종가격과 적립금을 빼서 출력한다. 

