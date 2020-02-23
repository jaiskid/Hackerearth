#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[1000000];
	cin>>s;
	int l=strlen(s);
	long long c1=0,c2=0,sp=0,lp=l-1;
	for(int i=0,j=l-1;i<l,j>=0;i++,j--)
	{
	if(s[i]=='o'){
	c1+=(i-sp);
	sp++;
	}
	if(s[j]=='o'){
	c2+=(lp-j);
	lp--;
	}
	}
	if(c1>=c2){
	cout<<c2<<endl;
	}
	else{
	cout<<c1<<endl;
	}
	return 0;
}