#include<bits/stdc++.h>
using namespace std;

void merge(int arr[ ],int first,int middle,int last){
    int i,j,k;
    int s1 = middle-first+1;
    int s2 = last-middle;

    int temp_arr1[s1];
    int temp_arr2[s2];

    for(i=0;i<s1;i++){
        temp_arr1[i] = arr[first+i];
    }
    for(j=0;j<s2;j++){
        temp_arr2[j] = arr[middle+1+j];
    }

    i=0;
    j=0;
    k=first;

    while(i<s1 && j<s2){
        if(temp_arr1[i] <= temp_arr2[j]){
            arr[k] = temp_arr1[i];
            i++;
        }
        else if(temp_arr1[i] >= temp_arr2[j]){
            arr[k] = temp_arr2[j];
            j++;
        }
        k++;
    }

    while(i<s1){
    arr[k] = temp_arr1[i];
    i++;
    k++;
    }

    while(j<s2){
    arr[k] = temp_arr2[j];
    j++;
    k++;
    }

    for(i=0;i<last;i++){
        cout<<arr[i]<<endl;
    }
}

void mergesort(int arr[ ],int last,int first){
    int middle = (first + last)/2;
    if(first<last){
        int middle = (first+last)/2;

        mergesort(arr,middle,first);
        mergesort(arr,last,middle+1);

        merge(arr,first,middle,last);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,n,0);
}