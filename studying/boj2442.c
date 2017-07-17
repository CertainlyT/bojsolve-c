//
//  boj2442.c
//  studying
//
//  Created by 정지현 on 2017. 7. 17..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=n-i;j>=1;j--){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
