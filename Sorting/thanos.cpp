#include<bits/stdc++.h>
using namespace std;

void array_ka_khoon(int arr[],int arr2[],int n){
    int temp;
    int flag=0;
    // cout<<"Now we print the first array :- "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"Now we print the second array :- "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr2[i]<<endl;
    // }
    // cout<<"The value of n is :- "<<n<<endl;
    for(int i=0;i<n;i++){
        if(arr[i] != arr2[i]){
            flag=1;
        }
    }
    if(flag==0){
        temp = n;
        cout<<"Array is sorted"<<endl;
        cout<<temp<<endl;
    }
    else if(flag==1){
        while(flag != 0 && n>0){
        n = n-(n/2);
        for(int i=0;i<n;i++){
        if(arr[i] != arr2[i]){
            flag=1;
        }
        else{
            flag = 0;
        }
        }
        }
        cout<<"Array is not sorted"<<endl;
        cout<<n<<endl;
}
}

void checkarray(int n){
    int arr[n];
    // cout<<"Now we are taking the input of 1st array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // cout<<"Now we print the first array :- "<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<"Now we will copy the first array in the second array:- "<<endl;
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i] = arr[i];
    }
    // cout<<"Now we print the second array :- ";
    // for(int i=0;i<n;i++){
    //     cout<<arr2[i]<<endl;
    // }

    // cout<<"Now we will sort array2 :- ";
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr2[j]>arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    // cout<<"Now we print the second array :- ";
    // for(int i=0;i<n;i++){
    //     cout<<arr2[i]<<endl;
    // }

    array_ka_khoon(arr,arr2,n);
}

void isPower(int n){
    if(ceil(log2(n)) == floor(log2(n))){
        checkarray(n);
    }
    else{
        cout<<"Ab aapko baas sallu bhai hee bacha sakta hai..";
    }
}

int main(){
    int n;
    cin>>n;
    isPower(n);
}