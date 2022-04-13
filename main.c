#include "manager.h"
#include <stdio.h>


int main(){
#ifdef DEBUG
	printf("==> DEBUGMODE\n\n");
#endif
    Product p[100];
    int count,menu,index,result;
    int menu_no;
    count=loadData(p);
    index=count;
    if(count==-1){
        printf("파일 없음!\n");
        count=0;
        index=0;
    }
    else{
        printf("저장됨");
    }
    while(1){
        menu=selectMenu();
        if(menu==0) break;
        if(menu==1){//추가하는 기능
            result=createProduct(&p[count]);
            if(result==1){
                printf("저장됨!");
                count++;
            }
        }
        else if(menu==2){//출력하는 기능 
            if(count==0){
                printf("데이터 없음!");
                continue;
            }
            listProduct(p,count);
            
        }
        else if(menu==3){//업데이트
            if(count==0){
                printf("데이터 없음!");
                continue;
            }
            index=selectDataNo(p,count);
            result=updateProduct(&p[index]);
            if(result==1){
                printf("저장됨!");
            }
        }
        else if(menu==4){//삭제하는 기능 
            int del;
            menu_no=selectDataNo(p,count);
            printf("정말로 삭제하시겠습니까? 취소(0)");
            scanf("%d",&del);
            if(del==0) continue;
            result=deleteProduct(&p[menu_no]);
            if(result==1){
                printf("삭제됨!");
            }
        }
        else if(menu==5){//여러가지  검색기능
            if(count==0){
                printf("데이터 없음!");
            }
            result=selectSearchMenu();
            if(result==0){//종료 기능
                continue;
            }
            if(result==1){//이름 검색 
                searchProductName_poly(p,count);
            }
            else if(result==2){//설명검색
                searchproductExp_poly(p,count);
            }
            else if(result==3){//원산지 검색
                searchProductOrigin_poly(p,count);
            }
            else if(result==4){//무게 무조건 같도록 검색
                searchProductWeight_poly(p,count);
            }
        }
        else if(menu==6){//제품 정보 파일 저장
            if(count==0){
                printf("데이터 없음!");
                continue;
            }
            saveData(p,count);
        }
        else if(menu==7){//
            if(count==0){
                printf("데이터 없음!");
                continue;
            }
            printf("%d원\n",printFinalPrice(p,count));
        }
            
    }
    
}
