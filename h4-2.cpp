#include <iostream>

using namespace std;

int main()
{
    
    int population[4];
    
    for(int i=0;i<4;i++)
    {
        cout<<"Enter the population of city "<<(i+1)<<":"<<endl;
        
        cin>>population[i];
        
        while(population[i]<0)
        {
            cout<<"Population cannot be negative. Please re-enter."<<endl;
            cin>>population[i];
        }
    }
    
   
    cout<<"POPULATION"<<endl;
    cout<<"(each * = 1000 people)"<<endl;
    
    for(int i=0;i<4;i++)
    {
        int p = population[i]/1000;
        cout<<"City "<<(i+1)<<": ";
        
        for(int j=0;j<p;j++)
        {
            cout<<"*";
        }
       
        cout<<endl;
    }
    return 0;
}
