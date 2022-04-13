
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


