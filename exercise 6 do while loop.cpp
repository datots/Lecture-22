/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int y,m,g,p,k;
    
    cout<<"Please Enter No of rows: ";
    cin>>m;
    y=1;
    
    do{
        if(y%2==0){
            p=1;
            k=0;
        }else{
            p=0;
            k=1;
        }
        g=1;
        do{
            if(g%2==0){
                cout<<p;
            }else{
                cout<<k;
            }
            g++;
        }
        while(g<=y);
        y++;
        cout<<endl;
    }
    while(y<=m);

    return 0;
}
