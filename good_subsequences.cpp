#include<iostream>
using namespace std;
const int MOd=1e9+7;
int frequency[26];
string s;
int main(){
	int t;
	cin>>t;
	while(t--){
	int  ans=1;
	
	cin>>s;
	
    for(auto &ch : s)
	frequency[ch-'a']++;
	for(int i=0;i<26;i++){
	if(!frequency[i])
		cout<<frequency[i]<<" ";
		continue;
		ans*=frequency[i];
		ans%=MOd;
	}
	cout<<ans<<endl;
 }
}