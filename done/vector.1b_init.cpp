#include<bits/stdc++.h>

using namespace std;
vector<int> initializeVector(int n){
    vector<int> a;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int k; cin >> k;
        a.push_back(k);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return a;
}

int main(){
    int n;
    initializeVector(n);
    return 0;
}