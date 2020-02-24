#include<iostream>
#include<cstring>
using namespace std;
bool iscapucia(string s,int ss,int ee){
	while(ss<ee){
        if(s[ss]!=s[ee]){
            return false;
        }
        ss++;
        ee--;
    }
	
	return true;
}

int main(){
    long long int t;
    cin>>t;
    
    while(t--){
    string s;    
	cin>>s;
	int ee=s.size();
	(iscapucia(s,0,ee-1))?cout<<"YES\n":cout<<"NO\n";
    }
	
}