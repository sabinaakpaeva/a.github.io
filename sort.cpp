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
    {   min=a[i]; //устанавливает самый первый элемент минимальным
        loc=i; //0
        for(j=i+1;j<5;j++) //цикл дл€ остальных 4 элементов
        {
            if(min>a[j]) //если элемент больше чем следующий, тогда минимальным устанавливаетс€ следующий элемент
            {
                min=a[j];
                loc=j; //позици€ минимума
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp; // мен€ет местами элементы. “о есть минимум прежде 
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}

