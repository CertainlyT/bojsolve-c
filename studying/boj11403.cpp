//
//  boj11403.cpp
//  studying
//
//  Created by 정지현 on 2017. 10. 22..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int k = 0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if (matrix[i][k] && matrix[k][j]){
                    matrix[i][j] = 1;
                }
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
