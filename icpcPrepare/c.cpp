#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[]){
	int A, tmpSize;
	string s;
	while(cin >> A){
		cin >> s;
		for (int i = 0; i < s.size(); ++i){
			s[i] = s[i] - 'a' + 1;
		}
		tmpSize = s.size() - 1;
		for(int i = 0; i <= tmpSize; i++){
			for (int j = tmpSize; j >= 1; j--){
				while(s[j] > 0){
					if(s[j-1] + A <= 26){
						s[j] -= 1;
						s[j-1] += A;
					}
					else{
						break;
					}
				}
			}
		}
		for (int i = 0; i < s.size(); ++i){
			if(s[i] == 0)	break;
			cout << char(s[i] + 96);
		}
		cout << endl;
 	}
	return 0;
}
