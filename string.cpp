#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    
    cout<<b[0];
    for(int i=0;i<a.size()-1;i++){
        cout<<a[i+1];
        }
    cout<<" ";
    cout<<a[0];
    for(int i=0;i<b.size()-1;i++){
        cout<<b[i+1];
        }
    

  
    return 0;
}