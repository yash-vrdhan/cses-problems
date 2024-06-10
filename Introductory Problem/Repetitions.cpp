#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if (s.empty()) {
        cout << 0;
        return 0;
    }

    long long int count =1;
    long long int maxCount=1;
    char c = s.at(0);
    for(int i=1; i<s.length(); i++){
        if (c==s.at(i)){
            count ++;
        }
        else{
            c=s.at(i);
            if (count>maxCount){
                maxCount= count;
                
            }
            count =1;
        }
    }
    if (count> maxCount){
        maxCount= count;
    }
    cout<<maxCount;
}