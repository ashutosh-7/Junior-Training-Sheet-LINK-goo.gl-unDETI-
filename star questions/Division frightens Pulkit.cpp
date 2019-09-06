#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define llu unsigned long long int
#define mod 1e9+7
#define pb push_back
#define vi vector<int>
#define translow transform(s.begin(),s.end(),s.begin(),::tolower);
#define transup transform(s.begin(),s.end(),s.begin(),::toupper);
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

int main() {
				fast
				ll t;
				cin>>t;
				while(t--)
				{
					string a;
					ll b;
					cin>>a>>b;
					ll len=a.size();
					ll sum=0;
					ll temp=1,temp1,temp2;
					if(a[len-1]=='1')
					{
						sum=1%b;
					}
					else
					{
						sum=0;
					}
					for(ll i=len-2;i>=0;i--)
					{
						temp=((temp%b)*(2%b))%b;
						if(a[i]=='1')
						{
							sum=((sum%b)+(temp%b))%b;
						}
					}
				if(sum==0)
				cout<<"Yes"<<endl;
				else
				cout<<"No"<<endl;
				
				}
	return 0;
}
