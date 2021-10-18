#include<iostream>
using namespace std;
int main(){
    
    int arr[3];
    int i=0;
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    for(int i=0;i<arr[3];i++){

    
      if(arr[i] == arr[i+1]){
          cout<<"yes";
      }
      else{
          cout<<"no";
      }
    }
    
}