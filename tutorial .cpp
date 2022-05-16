#include<iostream>
using namespace std;

int main(){
	int n,p=3;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
		}
	int max =arr[0];
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
            if(max > arr[j]){
            arr[j] = max;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}
