#include<iostream>
using namespace std; 
int main()
{
    int i,j,loc,temp,min,a[5];

    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
 
    for(i=0;i<4;i++)
    {   min=a[i]; // sets the first element as minimum 
        loc=i; //0
        for(j=i+1;j<5;j++) //cycle for other 4 elements
        {
            if(min>a[j]) // if the element is greater than the next, the next element will be the minimum 
            {
                min=a[j];
                loc=j; //position of minimum
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp; // swap the positions of elements. that is the minimum goes before 
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}

