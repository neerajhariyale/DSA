#include<iostream>
using namespace std;

int k;
int arr[]={};
void getarray()
{
    cout<<"Enter the size of array :";
    cin>>k;
    arr[k]={};
    cout<<"Enter the element of array :";
    for (int  i = 0; i < k; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}

void insertionsort()
{
   cout<<"InsertionSort :";
   for (int  i = 1; i < k-1; i++)
   {
    int current =  arr[i];
    int p = i-1;
    while (arr[p]>current && p>=0)
    {
        arr[p+1]=arr[p];
        p--;
    }
      arr[p+1]=current;
   }
   for (int i = 0; i < k; i++)
   {
    cout<<arr[i]<<" ";
   }
   
   
}



int main()
{
    getarray();
    insertionsort();
    return 0;
}
