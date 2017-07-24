//
//  boj2839.c
//  studying
//
//  Created by 정지현 on 2017. 7. 24..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>
int main(){
    int n, cnt5, cnt3, less, result;
    scanf("%d", &n);
    cnt5 = n / 5;
    cnt3 = 0;
    less = n - cnt5 * 5;
    result = 0;
    for(int i=cnt5;i>=0;i--){
        if (less % 3 == 0){
            cnt3 = less / 3;
            result = cnt5 + cnt3;
            break;
        }else{
            less += 5;
            cnt5 -= 1;
        }
    }
    if (result == 0){
        printf("%d", -1);
    }else{
        printf("%d", result);
    }
    return 0;
}
