  

#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      string a,b;
      bool f=1;
      int n=s.size();
      for(int i=0;i<s.size()-1;i++){
        a+=s[i];
        b=s.substr(i+1,n-i-1);
        if(b[0]=='0') continue;
        if(stoi(a)<stoi(b)){
           cout<<a<<" "<<b<<endl;
           f=0;
            break;
        }
      }
      if(f)
      cout<<-1<<endl;
    }
    return 0;
}
