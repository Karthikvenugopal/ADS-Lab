#include<iostream>
#include<list>

using namespace std;

list<int> linput(list<int> l)
{
    cout<<"enter the number of nodes"<<"\n";
    int n;
    cin>> n;
    cout<<"enter the elements"<<"\n";
    int temp;
    for(int i=0 ;i<n;i++)
    {
        cin>>temp;
        l.push_back(temp);
    }
    return l;
}

list<int> rev(list<int> l)
{
    list<int>::iterator it;
    n = l.size();
    cout<<"enter the value of k"<<"\n";
    int k;
    cin>>k;
    list<int> tmp;
    list<int> fin;
    for(it = l.begin(); it<l.end();i+=k)
    {
        tmp = l.splice(l.begin(), l.begin()+1);
        tmp.reverse();
        fin.push_back(tmp);
    }
    if(it == l.end())
        return fin;
    else
    {
        tmp = l.splice(it, l.end());
        tmp.reverse();
        fin.push_back(tmp);
    }
    return fin;
}

void main()
{
    list<int> l, fin;
    l = linput(l);
    fin = rev(l);
    list<int>::iterator it;
    for(it = l.begin(); it<l.end();i++)
    {
        print()
    }
}