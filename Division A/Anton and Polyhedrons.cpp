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
				
				ll n;
				cin>>n;
				ll count=0;
				string s;
				for(ll i=0;i<n;i++)
				{
					cin>>s;
					if(s=="Tetrahedron")
					count+=4;
					if(s=="Cube")
					count+=6;
					if(s=="Octahedron")
					count+=8;
					if(s=="Dodecahedron")
					count+=12;
					if(s=="Icosahedron")
					count+=20;
				}
				cout<<count;
	return 0;
}
