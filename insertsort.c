#include<stdio.h>
void insert();
void printArr();
void insert(int a[],int n){
int i,j,temp;
for(i=1;i<n;i++){
temp=a[i];
j=i-1;
while(j>=0&&temp<=a[j])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
}
void printArr(int a[],int n){
int i;
for(i=0;i<n;i++){
printf("%d",a[i]);
}
}
void main()
{
int a[]={12,3,4,5,6,10,80,3,5};
int n=sizeof(a)/sizeof(a[0]);
printf("Before sorting array element are\n");
printArr(a,n);
insert(a,n);
prinf("After sorting array element are\n");
printArr(a,n);
return 0;
}
