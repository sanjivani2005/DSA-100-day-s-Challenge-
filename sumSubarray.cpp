#include <iostream>
using namespace std;

void maxSubarraySum3(int *arr , int n){ //kadan's algorithm

    int maxSum= INT_MIN;//negative infinite
    int currSum =0;
    for(int i=0;i<n;i++){
       currSum += arr[i];
       maxSum= max(currSum,maxSum);
       if(currSum<0){
        currSum =0;
       }
    }
    cout<<"Maximum Subarray Sum "<<maxSum;
}

void maxSubarraySum2(int *arr , int n){

    int maxSum= INT_MIN;//negative infinite
    for(int start =0; start<n;start++){
        for(int end=start;end<n; end++){
            int currSum += arr[end];  //TC n^2
            maxSum = max(maxSum , currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum "<<maxSum;
}

//optimize 
void maxSubarraySum1(int *arr , int n){

    int maxSum= INT_MIN;//negative infinite
    for(int start =0; start<n;start++){
        for(int end=start;end<n; end++){
            int currSum =0;
            for(int i= start; i<= end;i++)
            {
                currSum += arr[i]; // TC n^3
            }
            cout<< currSum<<",";
            maxSum = max(maxSum , currSum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum "<<maxSum;
}

int main(){

    int arr[6]={2,-3,6,-5,4,2};

    int n = sizeof(arr)/sizeof(int);

    maxSubarraySum1(arr,n);
    return 0;
}