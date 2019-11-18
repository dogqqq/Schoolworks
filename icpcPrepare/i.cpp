#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[]){
	int cases, n, ans;
	long long int twoarr[35], R, G, B, tmp;
	for (int i = 0; i < 30; ++i){
		twoarr[i] = pow(2, i);
	}
	cin >> cases;
	while(cases--){
		cin >> n;
		tmp = 0;
		B = 0;
		R = n;
		G = n/2;
		for (int i = 0; i < n; ++i){
			tmp += twoarr[i];
		}
		tmp = tmp - R - G;
		R += tmp/3;
		G += tmp/3;
		B += tmp/3;
		printf("%d %d %d\n", R, G, B);
	}

	
	return 0;
}