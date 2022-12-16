#include<iostream>
using namespace std; 

int k;
int arr[]={};
void getarray()
{
    cout<<"Enter the size of array :";
    cin>>k;
    arr[k]={};
    cout<<"Enter the element of an array :";
    for (int i = 0; i < k ; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array you enter :";
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}
void bubblesort()
{  
    
    for (int i = 0; i < k ; i++)
    {
        for (int j = 0; j <k-i-1; j++)
        {
            if (arr[j] >  arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }  
        }
    }
    cout<<"Bubble Sort :";
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
   
    getarray();
    bubblesort();
    return 0;
}
