//
//  boj2439.c
//  studying
//
//  Created by 정지현 on 2017. 7. 17..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        int space = a - i;
        int star = i;
        for(int j=0;j<space;j++){
            printf(" ");
        }
        for(int k=0;k<star;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
