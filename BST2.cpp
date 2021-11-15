
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    printf("Enter the range of array\n");
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    int lookfor;
    printf("Enter the lookfor\n");
    cin>>lookfor;
    int ispresent=false;
    int low=0,high=n;
    int count=0;
    while(low<=high)
    {
        count++;
        int mid=(high-low)/2+low;
        if(arr[mid]==lookfor)
        {
            ispresent=true;
            break;
        }
        if(arr[mid]>lookfor)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    if(ispresent)
    {
        printf("%d is founded\n",lookfor);
    }
    else
    {
        printf("%d not founded\n",lookfor);
    }
    printf("count of operation %d\n",count);
    return 0;
}
