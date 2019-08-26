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
				ll t;
				cin>>t;
				while(t--)
				{
					ll a,b,c;
					cin>>a>>b>>c;
					ll one=1,zero=1;
					if(c%3==0)
					{
						one=0;
					}
					if(c%3==1)
					{
						zero=0;
					}
					if(c==0)
					cout<<a<<endl;
					else if(c==1)
					cout<<b<<endl;
					else
					{
						if(one==0)
						{
							cout<<a<<endl;
						}
						else if(zero==0)
						{
							cout<<b<<endl;
						}
						else
						{
							ll v=a^b;
							cout<<v<<endl;
						}
					}
					
				
				
				
				
				}
	return 0;
}
