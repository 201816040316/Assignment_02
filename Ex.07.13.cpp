#include <iostream>
#include<array>
using namespace std;


int main()
{
    int number, i;
    array< int, 20 > num = {0};//initialize elements of array num to 0

    for(i = 0 ;i < 20 ;i++)
    {
      cin>>number;//import
      if((number >= 10)&&(number <= 100))
      {
        for(i = 0; i < 20; i++)
        {
             if(num[i] == number)//whether it is equal or not
            {
                num[i] = 0;
            }
            else
            {
                num[i] = number;
                cout<<num[i]<<endl;//exportar
            }
        }

      }
    }
    return 0;
}
