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
			string s;
			cin>>s;
			string r="WUB";
			while(s.find(r)!=-1)
			{
				ll x=s.find(r);
				//cout<<x<<endl;
				if(x==0)
				s.erase(0,3);
				else
				{
						s.replace(x,1," ");
					s.erase(x+1,2);
				
					
					
					
				}
				//
				//cout<<s<<endl;
			}
			cout<<s;
				
				
				
				
	return 0;
}
