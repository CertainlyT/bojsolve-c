//
//  boj2441.c
//  studying
//
//  Created by 정지현 on 2017. 7. 17..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=n-i;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
