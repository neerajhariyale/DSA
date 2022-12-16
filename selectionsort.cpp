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
    
    
}
void selectionsort()
{
    cout<<"\nSELECTION  SORT : "<<endl;
    for (int i = 0; i < k; i++)
    {
        int small = i;
        for (int j = i+1; j < k; j++)
        {
            if (arr[i]>arr[j])
            {
                small = j;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < k; i++)
        {
            cout<<arr[i]<<" ";
        }
}
int main()
{   
    getarray();
    selectionsort();
        
    
    return 0;
}
