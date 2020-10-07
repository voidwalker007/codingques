
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
  
int main()
 
{
    int x;
    cout<<"enter the size of array=";
cin>>x;
    int ar[x];
    cout<<"enter the elements in array=";
for(int i=0;i<x;i++)
{
cin>>ar[i];
}
 
int n = sizeof(ar)/sizeof(ar[0]);
 
  
sort(ar, ar+n);

cout<<"sorted array\n";
for (int i = 0; i < n; i++)
{
        cout<< ar[i]<<endl;
 
 }
  return 0;
 
} 

