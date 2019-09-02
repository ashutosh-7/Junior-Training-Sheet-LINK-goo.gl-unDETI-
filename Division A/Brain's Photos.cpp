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
				ll n,m;
				cin>>n>>m;
				char s;
				ll black=0,color=0;
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<m;j++)
					{
						cin>>s;
						if(s=='B' || s=='W' || s=='G')
						black++;
						else
						color++;
					}
				}
				if(color ==0 && black>0)
				cout<<"#Black&White"<<endl;
				else
				cout<<"#Color"<<endl;
				
				
				
				
	return 0;
}
