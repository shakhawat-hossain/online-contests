#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    int kar[k];
    for(int i=0;i<k;i++){
        cin>>kar[i];
    }
    sort(kar,kar+k);
   if(find(kar,kar+k,s)==0){
       cout<<"found"<<endl;
   }
   else{
       cout<<" not found"<<endl;
   }
}