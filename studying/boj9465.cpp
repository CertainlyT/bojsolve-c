//
//  boj9465.cpp
//  studying
//
//  Created by 정지현 on 02/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int sticker[2][100010];
int dp[2][100010];

int main(){
    
    int testcase;
    scanf("%d", &testcase);
    while (testcase--){
        int n;
        scanf("%d", &n);
        for (int i = 0; i < 2; i++)
            for (int j = 2; j <= n+1; j++)
                scanf("%d", &sticker[i][j]);
        
        for (int i = 2; i <= n+1; i++){
            dp[0][i] = max(max(dp[0][i - 1], dp[1][i - 1] + sticker[0][i]), dp[1][i - 2] + sticker[0][i]);
            dp[1][i] = max(max(dp[1][i - 1], dp[0][i - 1] + sticker[1][i]), dp[0][i - 2] + sticker[1][i]);
        }
        
        if (dp[0][n+1] > dp[1][n+1])
            printf("%d\n", dp[0][n+1]);
        else
            printf("%d\n", dp[1][n+1]);
    }
}
