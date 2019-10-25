#include <iostream>
#include<iomainp>
#include<vector>
#include<stdexcept>
using namespace std;


int main()
{
    int number, i;
    vector<int>num(20);//20-element vector<int>
    for(i = 0 ; i < 20; i++)
    {
        cin>>number;
        if((number <= 100)&&(number>=10))
            for(i =0; i < 20 ; i++)
        {
            if(number =! number[i])
            {
                num.push_back(number);
                cout<<num[i]<,endl;
            }
            else
            {
                num[i]=0;
            }
                
        }
    }
   
    return 0;
}
