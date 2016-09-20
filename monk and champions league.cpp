#include <iostream>
using namespace std;
 
int swap(int* a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
 
class heap
{
    //int n;
    int size;
    int* arr;
public: 
    int parent(int i)
    {
        return (i-1)/2;
    }
    
    int left(int i)
    {
        return 2*i+1;
    }
    
    int right(int i)
    {
        return 2*i+2;
    }
    
    void maxHeapify(int i)
    {
        int largest=i;
        
        int left_c=left(i);
        int right_c=right(i);
        
        if(left_c<size && arr[largest] < arr[left_c])
        {
            largest=left_c;
        }
        
        
        if(right_c<size && arr[largest] < arr[right_c])
        {
            largest=right_c;
        }
        
        
        if(largest!=i)
        {
            swap(&arr[i],&arr[largest]);
            maxHeapify(largest);
        }
    }
    
    int extractMax()
    {
       int max_val=arr[0];
       //cout<<max_val<<endl;
       arr[0]=max_val-1;
       maxHeapify(0);
       return max_val;
    }
    
    int getMax()
    {
        return arr[0];
    }
    
    
/*----------------- constructor building the heap -----------------------*/    
    
    heap(int* arr,int n)
    {
        
       this->size=n;
       this->arr=arr;
        
    }
    
    void buildHeap()
    {
        int i=size/2-1;
        while(i>=0)
        {
            maxHeapify(i);
            i--;
        }
        
    // for(int i=0;i<size;i++)
    // {
    //  cout<<arr[i]<<" ";
    // }
    }
    
    
};
 
 
void buildHeap()
{
        
}
 
int main()
{
    
    int n;
    int m;
    cin>>n>>m;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    heap h(arr,n);
    h.buildHeap();
    
   
    
     
    int cost=0;
    
    while(m--)
    {
        cost+=h.extractMax();
    }
    
    cout<<cost<<endl;
    
    return 0;
}