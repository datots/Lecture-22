/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int bin_num,hex = 0,mul=1,chk=1,rem,i=0;
    char hex_num[20];
    cout << "Enter binary num: ";
    cin >> bin_num;
    while(bin_num != 0){
        rem = bin_num%10;
        hex = hex + (rem * mul);
        if(chk%4==0){
            if(hex<10){
                hex_num[i] = hex+48;
            }else{
                hex_num[i] = hex+55;
            }
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }else{
            mul = mul * 2;
            chk++;
        }
        bin_num = bin_num/10;
    }
    if(chk!=1){
        hex_num[i] = hex+48;
    }else if(chk==1){
        i--;
    }
    cout<<"\nEquivalent Value in Hexadecimal: ";
    for(i=i;i>=0;i--){
        cout<<hex_num[i];
    cout<<endl;    
    }

    return 0;
}