#include<bits/stdc++.h>
using namespace std;

int dp[5001];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	cin >> N;

	memset(dp, -1, sizeof(dp));

	for(int i=1;i<=N;i++){
		if(i == 3) dp[i] = 1;
		else if(i == 5) dp[i] = 1;

		if( i-5 > 0 && i-3 > 0 && dp[i-3] > 0 && dp[i-5] > 0){
			dp[i] = min(dp[i-3] + 1, dp[i-5] + 1);
		}
		else if( i-3 > 0 && dp[i-3] > 0){
			dp[i] = dp[i-3] + 1;
		}
		else if( i-5 > 0 && dp[i-5] > 0){
			dp[i] = dp[i-5] + 1;
		}
	}
	cout << dp[N] << endl;
}
