//
//  boj10828.cpp
//  studying
//
//  Created by 정지현 on 05/02/2018.
//  Copyright © 2018 정지현. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> st;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        if (s == "push"){
            int buf;
            cin >> buf;
            st.push(buf);
        }else if(s == "pop"){
            if (st.empty()){
                cout << -1 << endl;
            }else{
                cout << st.top() << endl;
                st.pop();
            }
        }else if(s == "size"){
            cout << st.size() << endl;
        }else if(s == "empty"){
            if (st.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }else if(s == "top"){
            if (st.empty())
                cout << -1 << endl;
            else
                cout << st.top() << endl;
        }
    }
}
