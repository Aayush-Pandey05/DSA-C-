#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of the array:- ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element:- ";
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}