#include <iostream>
using namespace std;
int main(){
    long long int n;
    long long int count=0;
    cin>> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
    for (long long int i = 0; i<n-1 ; i++){
        long long int j = i +1;
        while(arr[i]> arr[j]){
            arr[j]=arr[j]+1;
            count++;
        }
    }
    cout<<count;

    return 0;
}