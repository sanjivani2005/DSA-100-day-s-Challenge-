#include <iostream>
using namespace std;

int trap(int *heights, int n){

    int leftMax[20000],rightMax[20000];

    leftMax[0]= heights[0];
    rightMax[n-1]= heights[n-1];

     cout<<rightMax[n-1]<<",";

    for(int i=1;i<n;i++)
    {
        leftMax[i]=max(leftMax[i-1],heights[i-1]);
       
    }
    for(int i=n-2;i>=0;i--)
    {
        rightMax[i]=max(rightMax[i+1],heights[i+1]);
        cout<<rightMax[i]<<",";
    }


    int waterTrapped =0;
    for(int i=0; i<n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]-heights[i]);
        if(currWater>0){
            waterTrapped+=currWater;
        }
    }
    cout<<"Water trapped ="<<waterTrapped<<endl;

    return waterTrapped;
}

//-infinite,4,4,4,6,6,6 = left max
//-infinite,5,5,5,6,6,6 = Right max backword

int main() {

    int heights[7]={4,2,0,6,3,2,5};
    int n= sizeof(heights)/sizeof(int);

    trap(heights,n);
    return 0;
}