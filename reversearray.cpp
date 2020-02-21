#include <iostream>
using namespace std;
void reverse(int *arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return;
}
int main() {
	int num;
	cin >> num;										
	int arr[1000];
	for(int i=0;i<num;i++){
	    cin>>arr[i];
	}
	reverse(arr,num);
	for(int i=0;i<num;i++){
	cout<<arr[i]<<endl;
	    
	}
}
