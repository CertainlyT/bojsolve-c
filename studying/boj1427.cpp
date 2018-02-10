//
//  boj1427.cpp
//  studying
//
//  Created by 정지현 on 07/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <iostream>

using namespace std;

int arr[10];
int main(){
    int n;
    cin >> n;
    while (n != 0){
        int buf = n % 10;
        arr[buf]++;
        n = n / 10;
    }
    for(int i = 9; i >= 0;i--){
        for(int j = 0;j < arr[i];j++){
            cout << i;
        }
    }
    cout << endl;
}
