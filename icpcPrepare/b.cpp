#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N, S, T;
    int check;
    while( cin >> N >> S >> T ){
        check = 0;
        for( int i = 0; i < N; i++ ){
            if( T == S * pow(2, i) ){
                cout << i << endl;
                check = 1;
                break;
            }
        }
        if( check == 0 ){
            cout << "-1" << endl;
        }
    }

    return 0;
}