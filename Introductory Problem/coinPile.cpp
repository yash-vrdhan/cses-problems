#include <iostream>
#include <string>
using namespace std;
int main(){
    long long int t,x,y;
    cin >> t;
    for (long long int i=0; i<t; i++){
        long long int x,y;

        cin>>y>>x;
        while(x!=0 || y!=0){
        if (y>x){
            y=y-2;
            x=x-1;
        }
        else if(x==y){
            break;
        }
        else{
            x=x-2;
            y=y-1;
        }
        }
        if (x==0 && y==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}