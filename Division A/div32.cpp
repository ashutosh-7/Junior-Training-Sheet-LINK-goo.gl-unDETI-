#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll arr[10];
ll count2[10];
arr[0]=0;
arr[1]=45;
arr[2]=20;
arr[3]=45;
arr[4]=20;
arr[5]=5;
arr[6]=20;
arr[7]=45;
arr[8]=20;
arr[9]=45;
count2[0]=-1;
count2[1]=10;
count2[2]=5;
count2[3]=10;
count2[4]=5;
count2[5]=2;
count2[6]=5;
count2[7]=10;
count2[8]=5;
count2[9]=10;

				ll t;
				cin>>t;
				while(t--)
				{
				ll n,m;
				cin>>n>>m;
	ll temp,temp1,temp2;			
    temp2=n/m;
   ll p=count2[m%10];
   ll b=(temp2/p);
				temp=b*arr[m%10];
				ll temp3=temp2%p;
				ll x,sum2=0;
				for(ll i=1;i<=temp3;i++)
				{
					x=(m%10)*i;
					sum2+=x%10;
				}
		
	cout<<temp+sum2<<endl;
				}
	return 0;
}
