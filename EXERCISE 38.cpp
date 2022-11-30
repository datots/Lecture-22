/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int ndigits(unsigned long long x){
    int ndg = 0;
    while(x){
        
        ndg++;
        x/=10;
    }
    return ndg;
    
}

void triangle(int rows)
{
    int count = 1;
    int ndg = ndigits(rows * (rows + 1) /2);

    for(int row = 1; row <= rows; row++)
    {
        for(int column = 1; column <= row; column++)
        {
            printf("%0*d ", ndg, count++);
        }
        printf("\n");
    }
}
int main(void){
    triangle(10);

   
      return 0;
}