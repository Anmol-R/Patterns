#include<iostream>
#include<string.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    return 0;
}

/*
  *   *  
 * * * * 
*   *   *
    for(int i=1;i<=n/3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)||(i==2 && j%4==0))
            cout<<"*";
            else
            cout<<" ";
            }
        cout<<endl;
    }
*/
/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
first method -
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(;j<=n;j++){
            cout<<"*";
        }
        
        for(int k=2;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
     for(int i=n;i>=1;i--){
        int j;
        for(j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        
        for(int k=2;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
Second method-
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    */
/*
    1
   212
  32123
 4321234
543212345
for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
        cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    */
/*
1
01
101
0101
10101
010101
 for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
            
        }
        cout<<endl;
    }
    */
/*
    *****
   *****
  *****
 *****
*****
  for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";}
        for(int k=1;k<=n;k++){
            cout<<"*";}
            cout<<endl;
            
    }
    */
/*
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
 for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
  */
/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1
 for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)
            cout<<"1 ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
    
    */
  
