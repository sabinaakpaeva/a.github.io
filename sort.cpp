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
    {   min=a[i]; //������������� ����� ������ ������� �����������
        loc=i; //0
        for(j=i+1;j<5;j++) //���� ��� ��������� 4 ���������
        {
            if(min>a[j]) //���� ������� ������ ��� ���������, ����� ����������� ��������������� ��������� �������
            {
                min=a[j];
                loc=j; //������� ��������
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp; // ������ ������� ��������. �� ���� ������� ������ 
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}

