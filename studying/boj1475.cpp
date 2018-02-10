
//
//  boj1475.cpp
//  studying
//
//  Created by 정지현 on 07/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <iostream>

using namespace std;

int arr[9];

int main(){
    int n;
    cin >> n;
    if (n == 0)
        arr[0] += 1;
    while (n != 0){
        int temp = n % 10;
        if (temp == 9){
            arr[6] += 1;
        }else{
            arr[temp] += 1;
        }
        n = n / 10;
    }
    if (arr[6] % 2 == 0){
        arr[6] = arr[6] / 2;
    }else{
        arr[6] = arr[6] / 2 + 1;
    }
    int max = 0;
    for(int i = 0;i < 9;i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
}
