#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int a,b,c,r,t,dis,pos1,pos2;
     
     
    for(int i=0;i<9;i++){
        dis=0;
        cin>>a>>b>>c>>r;
        
        if(a>b){
            swap(a,b);
        }
        
         if(r>a && r>b && r>c){
            dis=0;
        }

        if(c>a && c<b){
            dis=(b-a)-r*2;
            if(dis<0){
                dis=dis*(-1);
            }
        }
        
        if(c>a && c>b && (c-b)<r){
            pos1=c-r;
            pos2=b-pos1;
            dis=(b-a)-pos2;
        }
        else{
            dis=(b-a);
            if(dis<0){
                dis=dis*(-1);
            }
        }
        
        if(c<a && c<b && (a-c)<r){
            pos1=c+r;
            pos2=pos1-a;
            dis=(b-a)-pos2;
        }
        else{
            dis=(b-a);
            if(dis<0){
                dis=dis*(-1);
            }
        }

        cout<<dis<<endl;
    }
    return 0;
}
