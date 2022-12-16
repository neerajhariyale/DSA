#include<iostream>
using namespace std;
int n;
int arr[]={};
void getarray()
{
    cout<<"Enter the size of array  :";
    cin>>n;

    arr[n]={};
    cout<<"Enter the element of array  :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is :";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    cout<<endl;
}

void bubblesort()
{   
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j <n-i-1; j++)
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
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void binarysearch()
{  
    int num;
    cout<<"Enter the number you want to search :";
    cin>>num;

    int first = 0;
    int last = (n-1);
    int middle = (first + last)/2;
    while (first <= last)
    {
        if(arr[middle] < num )
        {
            first = middle + 1;
        }
        else if (arr[middle]==num)
        {
            cout<<"Position at"<<num;
            break;
        }
        else
        {
            last=middle-1;
            middle=(first+last)/2;
        }
        if (first>last)
        {
            cout<<"THE NUMBER NOT FOUND!!!!!!!";
        }
        cout<<endl;
    }
}

int main()
{
    getarray();
    bubblesort();
    binarysearch();
    return 0;
}
