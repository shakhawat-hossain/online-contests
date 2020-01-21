#include <bits/stdc++.h> 
using namespace std;


int main()
{
	int n,t,count=0;
    
    string s;
    cin>>t;
    for(int i=0;i<t;t++){
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
        if(s.find('p',i)!=0){
            count++;
        }
        }
        for(int i=0;i<n;i++)
            {
            if(s.at(i)=='P' && s.at(i-1)=='A'){
                s.at(i)='A';
            }
            
        }
        
        cout<<count<<endl;
    }
}

