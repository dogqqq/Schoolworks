#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, K, re, sum, check;

    vector<int> point;
    while( cin >> N >> K ){
        point.clear();
        sum = 0;
        check = 0;

        for( int i = 0; i < N; i++ ){
            cin >> re;
            point.push_back(re);
        }

        sort( point.begin(), point.end(), greater<int>() );
        for( int i = 0; i < point.size(); i++ ){
            sum += point.at(i);
            if( sum >= K ){
                cout << i + 1 << endl;
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