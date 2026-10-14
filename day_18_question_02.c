/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>


int main(){


    int n,m,hcf;

    scanf("%d %d",&n,&m);

    for( int i = 1; i<=m; i++){
        if(((n%i)==0)&&((m%i)==0))
        hcf=i;
    }
    printf("%d",hcf);
    
    return 0;
}