#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int lookfor;
    printf("enter the lookfor\n");
    cin>>lookfor;
    bool ispresent=false;
    for(int i=0; i<n&&ispresent==false; i++)
    {
        if(arr[i]==lookfor)
            ispresent=lookfor;
    }
    if(ispresent)
    {
        printf("%d is found",lookfor);
    }
    else
        printf("%d not found\n",lookfor);

        return 0;
}

