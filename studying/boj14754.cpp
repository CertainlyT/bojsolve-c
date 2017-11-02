//
//  boj14754.cpp
//  studying
//
//  Created by 정지현 on 2017. 10. 21..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>

int main(){
    int n, m;
    unsigned long long sum = 0;
    unsigned long long result = 0;
    scanf("%d %d", &n,&m);
    int lst[n][m];
    int result_list[n][m];
    
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            result_list[i][j] = 0;
        }
    }
    
    for(int i = 0;i < n;i++){
        int max = 0;
        int max_idx = -1;
        for(int j = 0;j < m;j++){
            int temp;
            scanf("%d", &temp);
            lst[i][j] = temp;
            sum += temp;
            if (max < temp){
                max = temp;
                max_idx = j;
            }
        }
        result_list[i][max_idx] = max;
    }
    
    for(int i = 0;i < m;i++){
        int rowMax = 0;
        int tempMax = 0;
        int max_idx = -1;
        for(int j = 0;j < n;j++){
            if (lst[j][i] > tempMax){
                tempMax = lst[j][i];
                max_idx = j;
            }
            if (result_list[j][i] > rowMax){
                rowMax = result_list[j][i];
            }
        }
        if (rowMax != tempMax){
            result_list[max_idx][i] = tempMax;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            result += result_list[i][j];
        }
    }
    printf("%llu\n", sum - result);
    return 0;
}
