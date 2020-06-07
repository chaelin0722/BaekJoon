#include <iostream>
#include<algorithm> 
using namespace std;
typedef long long ll;

ll dp[1000001];
const ll inf = 2000000;
/*
	초기에 주어진 수를 2나 3으로 나누어지는게 가장 좋다.. 
	만약 나누어지는 경우가 아니라면 1을빼는게 낫다. 
*/
int main(void){
	
	ll n;
	fill(dp, dp + 1000000, inf);
	cin >> n;
	dp[n] = 0;
	for(int i=n; i >0; i--){
		if(dp[i] == inf) continue;
		if(i%3 ==0)dp[i/3] = min(dp[i/3], dp[i]+1);
		if(i%2 ==0)dp[i/2] = min(dp[i/2], dp[i]+1);
		if(i >=2)dp[i-1] = min(dp[i-1], dp[i]+1);
	}
	cout <<dp[1];
	
	return 0;
}
