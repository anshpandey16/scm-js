#include<iostream>
using namespace std;

int main(){
	int n,p=0;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
		}
	int max;
	
	for(int i=0;i<n;i++){
		max = arr[i];
		p=0;
		for(int j=0;j<n;j++){
			if(max == arr[j])
			{
				p++;
			}
        }
        cout<<p<<endl;
    }
    return 0;
}
