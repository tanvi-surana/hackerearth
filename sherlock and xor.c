#include <stdio.h>
 
void calculate()
{
   long n;
   scanf("%ld",&n);
   long even=0,odd=0;
   long long arr[n];
   for(long int i=0;i<n;i++)
   {
   	  scanf("%lld",&arr[i]);
   	  if(arr[i]%2==0)
   	     even++;
   	  else   
   	     odd++;   
   }
   
   printf("%lld\n",even*odd);
   
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
      calculate();
      
    return 0;
}