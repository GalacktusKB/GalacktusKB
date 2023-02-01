#include<stdio.h>
#include<stdlib.h>

int main ()
{

int i,first,last,middle,n,search,*p;

printf("Enter number of elements\n");

scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));

printf("Enter %d integers\n",n);

for(i=0;i<n;i++)

scanf("%d",(p+i));

printf("Enter value to find\n");

scanf("%d",&search);

first=0;

last=n-1;

middle=(first+last)/2;

while(first<=last)

{

if(*(p+middle)<search)
first=middle+1;

else if(*(p+middle)==search)
{

printf("%d found at location %d\n",search,middle+1);

break;
}

else
last=middle-1;

middle=(first+last)/2;

}
return 0;}
