
//c++
# include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ar[n];
	int dp[n];
	int k;
	cin>>k;
	for (int i=0;i<n;i++)
	cin>>ar[i];
	dp[0]=0;
	for (int i=1;i<n;i++){
		int mini=1000000007;
		if (i-k<0){
			for (int j=0;j<i;j++)
				mini=min(mini,(dp[j]+abs(ar[j]-ar[i])));
			dp[i]=mini;
		}
		else{
			for (int j=i-k;j<i;j++)
			mini=min(mini,(dp[j]+abs(ar[j]-ar[i])));
			dp[i]=mini;
		}
	}
			
		
		


			
			
	
	cout<<dp[n-1]<<endl;
}
