#include<iostream>
using namespace std;
void transpose(int arr[100][100],int r,int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<i;j++){

			swap(arr[i][j],arr[j][i]);
		}
	}
	return;

}
int main(){
	int r,c;
	cin>>r>>c;
	int arr[100][100];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	transpose(arr,r,c);
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}