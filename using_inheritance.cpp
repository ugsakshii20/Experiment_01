#include<iostream>
using namespace std;

class NumberList
{
    public:
    int number[5];

    void inputnum()
    {
        for (int i=0; i<5; i++)
        {
            cout<<"Enter the Numbers:"<<i+1<<endl;
            cin>>number[i];
        }
    }
    void display()
    {
        cout<<"Entered Numbers are:";
        for (int i=0;i<5;i++)
        {
          cout<<number[i];
        }
        cout<<endl;
    }
};

class AverageCalculator : public NumberList
{
    public:
    void Average()
    {
        double sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=number[i];
        }
        cout<<"Average of the Numbers is:"<<endl;
        double avg=sum/5;
        cout<<avg<<endl;
    }

};
int main()
{
    AverageCalculator c1;
    c1.inputnum();
    c1.display();
    c1.Average();

    return 0;
}
