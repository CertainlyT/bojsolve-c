//
//  boj2577.cpp
//  studying
//
//  Created by 정지현 on 07/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <iostream>

using namespace std;

int arr[10];

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int buf = A * B * C;
    while (buf != 0){
        int temp = buf % 10;
        arr[temp]++;
        buf = buf / 10;
    }
    for(int i = 0;i < 10;i++){
        cout << arr[i] << endl;
    }
}
