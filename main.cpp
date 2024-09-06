#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, bit;
    cout<<"수를 입력하시오. : ";
    cin>>n;
    cout<<"묶어서 처리할 비트 수를 입력하시오. : ";
    cin>>bit;
    vector<int>arr;
    int result = 0;
    while(n){
        //2비트씩 쪼개기
        arr.push_back(n&((1 << bit)-1));
        n>>=bit;
    }

    for(int i = 0; i < arr.size(); i){
        result += (arr[i] << (bit * (arr.size() - i - 1)));
    }
    cout << result;
}