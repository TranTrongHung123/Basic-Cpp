#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(__gcd(a[i],a[j]) == 1){
				++cnt;
			}
		}
	}
	cout << cnt;
}
