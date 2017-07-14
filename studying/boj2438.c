//
//  boj2438.c
//  studying
//
//  Created by 정지현 on 2017. 7. 14..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
