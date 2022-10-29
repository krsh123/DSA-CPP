//Binary Search
#include<iostream>

using namespace std;

void bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main()
{
    int lb,ub,mid,i,n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble(arr,n);
    cout<<"Sorted Array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    int key,l=0;
    cout<<"Enter the element you want to search: ";
    scanf("%d",&key);
    lb=0;
    ub=n-1;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(key==arr[mid])
        {
            cout<<"Element found!!\n";
            l++;
            break;
        }
        else if(key<arr[mid])
        {
            ub=mid-1;
        }
        else
        {
            lb=mid+1;
        }
    }
    if(l==0)
    {
        cout<<"Not found!!\n";
    }
    else
    {
        cout<<"Location: "<<mid+1;
    }
    return 0;
}