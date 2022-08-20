#include<bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	int coin[10];
	int answer = 0;
	cin >> n >> k;

	for(int i=0;i<n;i++){
		cin >> coin[i];
	}

	for(int i=n-1;i>=0;i--){
		if(k == 0) break;
		if(k >= coin[i]){
			answer += k / coin[i];
			k -= (k / coin[i]) * coin[i];
		}
	}
	cout << answer << endl;
}
