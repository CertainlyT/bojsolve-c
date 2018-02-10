//
//  boj4344.cpp
//  studying
//
//  Created by 정지현 on 07/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int first, i;
    cin >> first;
    for(i = 0;i < first;i++){
        int j, cnt = 0, a[1000] = { 0, }, n;
        double sum = 0, ave = 0, what;
        cin >> n;
        for(j = 0;j < n;j++){
            cin >> a[j];
            sum += a[j];
        }
        ave = (double)sum / n;
        for(j = 0;j < n;j++){
            if (a[j] > ave)
                cnt++;
        }
        what = (double)cnt / n * 100;
        printf("%.3lf%s\n", what, "%");
    }
}
