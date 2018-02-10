//
//  boj11286.cpp
//  studying
//
//  Created by 정지현 on 10/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

priority_queue<int, vector<int>, greater<int> > P;
priority_queue<int, vector<int>, less<int> > M;

int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0;i < N;i++){
        int buf;
        scanf("%d", &buf);
        if (buf < 0)
            M.push(buf);
        else if (buf > 0)
            P.push(buf);
        else{
            if (P.size() == 0 && M.size() == 0){
                printf("%d\n", 0);
            }else{
                if (P.size() == 0){
                    int temp = M.top();
                    M.pop();
                    printf("%d\n", temp);
                }else if (M.size() == 0){
                    int temp = P.top();
                    P.pop();
                    printf("%d\n", temp);
                }else{
                    if (abs(P.top()) > abs(M.top())){
                        int temp = M.top();
                        M.pop();
                        printf("%d\n", temp);
                    }else if (abs(P.top()) == abs(M.top())){
                        if (P.top() > M.top()){
                            int temp = M.top();
                            M.pop();
                            printf("%d\n", temp);
                        }else{
                            int temp = P.top();
                            P.pop();
                            printf("%d\n", temp);
                        }
                    }else{
                        int temp = P.top();
                        P.pop();
                        printf("%d\n", temp);
                    }
                }
            }
        }
    }
}
