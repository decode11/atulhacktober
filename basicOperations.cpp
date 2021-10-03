#include<iostream>
using namespace std;

void insert(int arr[],int x,int pos,int n,int cap)
{
    if(pos>=cap)
        cout<<"Insertion is Invalid";
    else
    {
        int idx = pos-1;
        for(int i=n-1;i>=idx;i--)
            arr[i+1]=arr[i];
        arr[idx]=x;
    }
    cout<<"Array after insertion is: ";
    for(int i=0;i<=n;i++)
        cout<<arr[i]<<" ";
}

void searching(int arr[],int n,int x)
{
    int c = 0;
    for(int i=0;i<n;i++)
        if(arr[i]==x)
        {
            cout<<"Element "<<x<<" at index: "<<i<<"\n";
            c=1;
        }
    if(c==0)
        cout<<"Element not found."<<"\n";
}

void deletion(int arr[],int n,int x)
{
    int c = 0;
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            c=i;
        
    if(c==0)
        cout<<"Element not found."<<"\n";
    else
    {
        for(int i=c;i<n;i++)
            arr[i]=arr[i+1];
        cout<<"Array after deletion is: ";
        for(int i=0;i<n-1;i++)
            cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[20] = {10,8,7,6,5,4,3,2,1};
    int cap = sizeof(arr)/sizeof(arr[0]);
    int x=9,pos=2,n=9;
    cout<<"\nAuthor: Abhishek Kumar\n\n";
    insert(arr,x,pos,n,cap);
    cout<<"\n";
    searching(arr,n+1,x);
    deletion(arr,n+1,x);
    cout<<"\n\n";
}