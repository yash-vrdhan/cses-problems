#include <iostream>
using namespace std;
int main(){
    long long int t,x,y;
    cin >> t;
    for (long long int i=0; i<t; i++){
        long long int x,y, result;

        cin>>y>>x;

        if (x>=y){
            if (x%2==0){
               result=(x-1)*(x-1)+y;
            }
            else{
                result=(x-1)*(x-1)+x+(x-y);
            }
        }
        else{
            if (y%2==0){
                result=(y-1)*(y-1)+y+(y-x);

            }
            else{
                result=(y-1)*(y-1)+x;
            }
        }
        cout<<result<<endl;
    }
}