#include <iostream>
using namespace std;
void merge(int arr[]  , int low , int mid  , int high){


    int  i=low , j=mid+1 , arr2[100] , k=low;
    while (i<=mid && j<=high)

    {
        if (arr[i]<arr[j]){

            arr2[k]=arr[i];
            i++;
            k++;
        }

        else {

            arr2[k]=arr[j];
            j++;
            k++;

        }
    }

    while (i<=mid){
        arr2[k]=arr[i];
        i++;
        k++;
    }
    while (j<=high)
    {
        arr2[k]=arr[j];
        j++;
        k++;
    }
    for (int i = low; i <=high; i++)
    {
        arr[i]=arr2[i];
    }
    
    
}
void merge_sort(int arr[] , int low , int high){

    if (low < high){

        int mid=(low+high)/2;
        merge_sort(arr , low  , mid);
        merge_sort(arr , mid+1 , high);
        merge(arr , low , mid , high);

    }
}
int main()
{

    int arr[]={3,2,1,15,6};
    int n=5;
    merge_sort(arr , 0 , 4);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

return 0;
}