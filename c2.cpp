#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        float k1,k2,k3,v;
        cin>>k1,k2,k3,v;
        float d;
        d = (k1*k2*k3*v);
        if(d >= 9.58){
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }
}