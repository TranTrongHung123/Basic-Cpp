#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, a[100], ok;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i){
		--i;
	}
	if(i == 0){
		ok = false;
	}
	else{
		++a[i];
		for(int j = i+1; j <= k; j++){
			a[j] = a[j-1] + 1;
		}
	}
}

int main(){
	cin >> n >> k;
	ktao();
	ok = true;
	while(ok == true){
		for(int i = 1; i <= k; i++){
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
}
