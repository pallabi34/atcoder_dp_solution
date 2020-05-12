# include <bits/stdc++.h>
# define int long long
using namespace std;

signed main (){
	int n,wmax;
	
	cin>>n>>wmax;
	int dp[n+1][wmax+1]={0};
	int weight[n+1];
	int value[n+1];
	for (int i=0;i<n;i++)
	cin>>weight[i]>>value[i];
	for (int i=0;i<=n;i++){
		for (int j=0;j<=wmax;j++){
			if (i==0||j==0) dp[i][j]=0;
			else if (weight[i-1]<=j){
				int a=dp[i-1][j-weight[i-1]]+value[i-1];
				int b=dp[i-1][j];
				//cout<<a<<"    "<<b;
				dp[i][j]=max(a,b);
			}
			else
			dp[i][j]=dp[i-1][j];
		}
		//cout<<endl;
	}
	cout<<dp[n][wmax]<<endl;
				
}
