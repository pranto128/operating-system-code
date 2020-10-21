#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,sum=0,x,y,h;
    cout<<" max range of disk: ";
    cin>>m;
    cout<<" size of queue: ";
    cin>>n;
    cout<<"disk positions:\n";
    vector <int> a(n),l;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"initial head position: ";
    cin>>h;
    a.push_back(h);
    sort(a.begin(),a.end());
    for(i=0; i<a.size(); i++)
    {
        if(h==a[i])
            break;
    }
    k=i;
    if(k<n/2)
    {
        for(i=k; i<a.size(); i++)
        {
            l.push_back(a[i]);
        }
        for(i=0; i<k; i++)
        {
            l.push_back(a[i]);
        }
    }
    else
    {
        for(i=k; i>=0; i--)
        {
            l.push_back(a[i]);
        }
        for(i=a.size()-1; i>k; i--)
        {
            l.push_back(a[i]);
        }
    }
    cout<<"Path: ";
    int temp=l[0];
    cout<<temp;
    for(i=1; i<l.size(); i++)
    {
        cout<<" "<<l[i]<<' ';
        sum+=abs(l[i]-temp);
        temp=a[i];
    }
    cout<<'\n';
    cout<<"Total head movements = "<< sum<<" cylinders";
    return 0;
}
