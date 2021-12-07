#include<bits/stdc++.h>
using namespace std;
int dp[10000002][4];
int mod=1e9+7;
int main(){
	int n;
	scanf("%d",&n);
	dp[1][1]=dp[1][2]=dp[1][0]=1;
	for(int i=2;i<=n;++i){
		for(int j=0;j<4;++j){
			for(int k=0;k<4;++k){
				if(k==j) continue;
				dp[i][j]+=dp[i-1][k];
				dp[i][j]%=mod;
			}
		}
	}
	printf("%d",dp[n][3]);
}
