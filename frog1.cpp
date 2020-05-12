# include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[n];
	int dp[n];
	for (int i=0;i<n;i++){
		cin>>ar[i];
	}
	dp[0]=0;
	dp[1]=abs(ar[1]-ar[0]);
	dp[2]=min(abs(ar[2]-ar[0]),dp[1]+abs(ar[2]-ar[1]));
	for (int i=3;i<n;i++){
		int min1=dp[i-2]+abs(ar[i-2]-ar[i]);
		int min2=dp[i-1]+abs(ar[i-1]-ar[i]);
		dp[i]=min(min1,min2);
	}
	cout<<dp[n-1]<<endl;
}
