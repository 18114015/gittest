/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
/**
*All operations are done in main function only.
*/
int main(int argc,char* argv)
{
    int n,a,b,x,k,count=-1,f=-1;
int o=0;
    char cin[50],store[500],store_swap[500];
    char z,temp;
    scanf("%d %d %d %s",&n,&a,&b,cin);
    FILE *fp=fopen(cin,"r");
    FILE *fp_out=fopen("file_out.txt","w");
    while(EOF!=fscanf(fp,"%c",&z)){ 
        count++; store[count]=z;  printf("%c",store[count]);
    } 
    x=count;
    count=-1;
    for(k=x;k<x+n-x%n;k++){
            store[k]='\0';
   }
    
    int i[x],j[x]; 
    for(k=0;k<x+n-x%n;k++){
        if(k==0){
       i[k]=0;
       j[k]=b%n;
    }
    else{
        i[k]=k%n;
        j[k]=(a*i[k]+b)%n;
     
    }printf("%d,%d\n",i[k],j[k]);
   
}
for(k=0;k<x+n-x%n;k++){

    if(k%n==0) f++; 
    store_swap[o]=store[j[k]+f*n];
   o++;
}
for(k=0;k<x+n-x%n;k++){
printf("%c",store_swap[k]);
} printf("\n");
for(k=0;k<x+n-x%n;k++){
fputc(store_swap[k],fp_out);
}
}


