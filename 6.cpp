#include <iostream>
using namespace std;

int main()
{
    int array1[5]= {19,10,8,17,9};
    int array2[] = {19,1,8,17,9};
    int array3[5] = {19,10,8};

    cout << "\nTraditional method: ";
    for(int i=0; i<5; ++i)
    {
        cout << array1[i]<< " ";
    }
    cout<<endl;

    cout<<"\nModern Method:";
    for(int j : array1) 
    {
        cout <<j<<" ";
    }

    //user defined input
    cout<<"enter the size of the array"<<endl;
    int array[100],n;
    cout<<"enter the array elements"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
    }

    return 0;
    //reversing an array
    cout<<"Reversing an array"<<endl;
    for(int j = n-1;j>=0;j--)
    {
        cout<<array[j]<<endl;
    }
    cout<<endl;

    //finding marks
    int mark,marks[100],flag = 0,count = 0;

    for(int i = 0;i<5;i++)
    {
        cin>>marks[i];
    }
    for (int i =0;i<5;i++)
    {
        if(mark==marks[i])
        {
            cout<<"position of the element is at: "<<i<<endl;
            count++;
            flag = 1;
        }
    }
    if(count ==0)
    {
        cout<<"no elements found"<<endl;
    }
    else if(flag == 1)
    {
        cout<<"element is present at: "<< count << "times" <<endl;
    }
    return 0;
}