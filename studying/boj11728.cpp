//
//  boj11728.cpp
//  studying
//
//  Created by 정지현 on 2017. 10. 30..
//  Copyright © 2017년 정지현. All rights reserved.
//

#include <stdio.h>
int arr[2000001];
int temp1[1000001];
int temp2[1000001];
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0;i < n;i++){
        scanf("%d", &temp1[i]);
    }
    for(int i = 0;i < m;i++){
        scanf("%d", &temp2[i]);
    }
    int idx1 = 0;
    int idx2 = 0;
    while (idx1 < n && idx2 < m){
        if (temp1[idx1] <= temp2[idx2]){
            arr[idx1+idx2] = temp1[idx1];
            idx1++;
        }else{
            arr[idx1+idx2] = temp2[idx2];
            idx2++;
        }
    }if (idx1 == n){
        while (idx2 < m){
            arr[idx1+idx2] = temp2[idx2];
            idx2++;
        }
    }else{
        while (idx1 < n){
            arr[idx1+idx2] = temp1[idx1];
            idx1++;
        }
    }for(int i = 0;i < n + m;i++){
        printf("%d ", arr[i]);
    }
}
