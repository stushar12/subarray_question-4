#include<stdio.h>
void kadane(int a[] , int n,int k)
  {
    int sum=0,sum1=0,start=0,end=0,result=0,last1=0,first1=0;
    for(int i=0;i<n;i++)
    {
      sum1=sum1+a[i];
    }
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
      result=i-start+1;
      if(sum<sum1&&result==k)
        {
          sum1=sum;
          last1=i;
          first1=start;
          i=start;
          start++;
          sum=0;
        }

    }
    printf("\nStarting index is %d and value at that index is %d and ending index is %d and value at that index is %d\n",first1,a[first1],last1,a[last1]);
  }

  int main()
{      
  int total=0,x=0,sum1=0;
  int k;
  printf("\n Enter the value of k \n");
  scanf(" %d",&k);
  int arr[]={10,4,2,5,6,3,8,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  kadane(arr,n,k);
}