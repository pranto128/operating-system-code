#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int head, low, up;

    cout<<"Number of input in your queue: ";
    cin>>n;
    cout<<"Lower Bound: ";
    cin>>low;
    cout<<"Upper Bound: ";
    cin>>up;
    cout<<"Head Starts: ";
    cin>>head;

    cout<<"Input "<<n<<" numbers to your queue"<<endl;
    set<int> s;
    int var;
    for(int i=0; i<n; i++)
    {
        cin>>var;
        s.insert(var);
    }
    s.insert(head);
    s.insert(low);
    //s.insert(up);

    //auto pos=s.find(head);
    int last[100];
    int last_i;
    int i=0;

    set<int>::iterator it;

    int first[100];
    int p=0;
    it=s.begin();

    while(*it!=head)
    {
        first[p]= *it;
        it++;
        p++;
    }
    first[p]=head;
    int time[100];
    int j=0;
    for(int i=p; i>=0; i--, j++)
    {
        cout<<first[i]<<" ";
        time[j]=first[i];
    }

    it++;
    for(; it!=s.end(); it++, j++)
    {
        cout<< *it<<" ";
        time[j]= *it;
    }
    cout<<endl;
    for(int i=0; i<j; i++)
        cout<<time[i]<<" ";
    int sum=0;
    for(int i=0, q=1; i < n+2-1 ; i++, q++)
        sum+=abs(time[i]-time[q]);
    cout<<"Total Distance: "<<sum<<endl;
    cout<<endl;
}
