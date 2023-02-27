#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 9;  int i,j;
    // cin >> n;
    //figure 1: Right Triangle

    for(i = n-1; i >= 0; i--){
        for(j = 0; j < n; j++){
            if(j >= i) cout << "* "; else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    //figure 2: Left Triangle
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j <= i) cout << "* "; else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    //figure 3: Right reversed triangle
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j >= i) cout << "* "; else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    //figure 4: Empty Square
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
    //figure 5: Empty square with 2 diagonals (duong cheo)
        for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n - 1 || j == n - 1 || i == j || i == n - 1 - j){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
    // figure 6:  
        for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs((n / 2) - j ) + abs((n / 2) - i ) >= n / 2){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
    // figure 7: Empty rhombus (hinh thoi)
        for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs((n / 2) - j ) + abs((n / 2) - i ) == n / 2){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
        // figure 8: Solid rhombus (hinh thoi)
        for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs((n / 2) - j ) + abs((n / 2) - i ) <= n / 2){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
        // figure 9: Empty rhombus (hinh thoi) with 2 diagonals (duong cheo)
        for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs((n / 2) - j ) + abs((n / 2) - i ) == n / 2 || i == n / 2 || j == n / 2){
                cout << "* ";
            }else{ cout << "  ";}
        }
        cout << endl;
    }
    cout << endl;
    // figure 10: Hinh dong ho cat
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs(n / 2 - j) <= abs (n / 2 - i)) cout << "* "; else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    //Figure 11: Hinh dong ho cat nam ngang
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(abs(n / 2 - i) <= abs (n / 2 - j)) cout << "* "; else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;  
    //Figure 12: Hinh vuong 9 rong loi 3:
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(n / 3 <= i && 2 * n /3 > i && n / 3 <= j && 2 * n /3 > j) cout << "  "; else cout << "* ";
        }
        cout << endl;
    }
    cout << endl;  
    //Figure 13: Hinh  thoi rong loi~ cuong 3;
        //Figure 12: Hinh nuong 9 rong loi 3:
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if((abs((n / 2) - j ) + abs((n / 2) - i ) > n / 2) || (n / 3 <= i && 2 * n /3 > i && n / 3 <= j && 2 * n /3 > j)){
                cout << "  "; 
            }else {cout << "* ";}
        }
        cout << endl;
    }
    cout << endl; 
    getch();
    return 0;
}