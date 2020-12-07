#include <stdio.h>
#include <stdlib.h>
 void binsearch( int *p, int l,int r,int n){
     int m;
     m = (l+r)/2;
     if (l>r){
        printf(-1);
     }else{
     if(p[m]==n){
        printf("%d",m);
     }
     if(p[m]>n){
        binsearch(p,l,m-1,n);
     }
     if(p[m]<n){
        binsearch(p,m+1,r,n);
     }
     }
}
int main()
{
    int i,n,a,m;
    int *pa;
    printf("vvedite  kol-vo elementov,elementi,zatem element,kotorii nado naiti");
    scanf("%d",&n);
    pa = (int*) malloc(n*sizeof(int));
    for(i = 0;i < n;i++){
     scanf("%d",&pa[i]);
    }
    scanf("%d",&a);
    binsearch(pa,0,n-1,a);
    return 0;
}
