#include<iostream>
using namespace std;

int main(){
    int N,sum = 0;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        sum+= arr[i];
         cout<<sum;
    }
    cout<<sum;
    return 0;
}
