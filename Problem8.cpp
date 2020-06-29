//Three numbers will be given. They need to be arranged accordingly

#include<iostream>
using namespace std;
int main()
{
    int numbers[3], temp;
    cout<<"Enter your numbers: \n";
    for(int i=0; i<=2; i++)
        cin>>numbers[i];

    for(int j=0; j<=2; j++)
    {
        for(int i=0; i<=2; i++)
        {
            if(numbers[j]< numbers[i])
            {
                temp= numbers[i];
                numbers[i]= numbers[j];
                numbers[j]= temp;
            }
        }
    }
    cout<<"Now we get:\n";
    for(int i=0; i<=2; i++)
        cout<<numbers[i]<<endl;
    return 0;
}
