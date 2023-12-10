#include<iostream>
using namespace std;

int main ()
{
    float num;
    float sum=0;
    float avg;

    for (int i=0; i<5; i++)
    {
        cout<<"Enter the Number:"<<i+1<<endl;
        cin>>num;
        sum+=num;
    }
    
    cout<<"Sum of the 5 Numbers is:"<<sum<<endl;
    avg=sum/5;
    cout<<"Average of the 5 Numbers is:"<<avg<<endl;
    
    return 0;
}
