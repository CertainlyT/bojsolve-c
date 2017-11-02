//
//  boj10159.cpp
//  studying
//
//  Created by 정지현 on 2017. 10. 22..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>
int n, m;
int matrix[100][100];
void floyd(){
    for(int k = 0;k<n;k++){
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if (matrix[i][k] == 1 && matrix[k][j] == 1)
                    matrix[i][j] = 1;
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0;i < 100;i++){
        for(int j = 0; j < 100;j++){
            matrix[i][j] = 0;
        }
    }
    for(int i = 0;i < m;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        matrix[a - 1][b - 1] = 1;
    }
    floyd();
    int cnt;
    for (int i = 0; i < n; i++){
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0 && matrix[j][i] == 0)
                cnt++;
        }
        printf("%d\n", cnt-1);
    }
}
