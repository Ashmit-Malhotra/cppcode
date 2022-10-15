#include<iostream>
using namespace std;

int main(){
    int a , b ; 
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int c;
        for( c=2;c<num;c++){
            if (num%c==0){
                break;
            }
        
        } 
        if (c==num){
            cout<<num<<endl;
        }

    }
    return 0 ;
    }
    