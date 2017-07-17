//
//  boj2443.c
//  studying
//
//  Created by 정지현 on 2017. 7. 17..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=2*n-1;i>0;i-=2){
        for(int j=0;j<((2*n - 1) - i)/2;j++){
            printf(" ");
        }
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
