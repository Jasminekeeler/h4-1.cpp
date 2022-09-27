#include <iostream>

using namespace std;

int coffeeCount=0,teaCount=0,cokeCount=0,orangeCount=0;

void incrementCount(int choice)
{
    if(choice==1)
        coffeeCount++;
    else if(choice==2)
        teaCount++;
    else if(choice==3)
        cokeCount++;
    else if(choice==4)
        orangeCount++;
}

int main()
{
    int count=1;
    int choice;
    
    bool continueLoop = true;
    
    while(continueLoop)
    {
    
        cout<<"1.Coffee 2.Tea 3.Coke 4.Orange Juice" << endl;
        cout << "Please input the favorite beverage of person #" << count << ":" << endl;
        cout << "Choose 1,2,3,or 4 from the above menu or -1 to exit the program" << endl;
        cin >> choice;
        if(choice==-1)
        {
            continueLoop=false;
            break;
        }
        incrementCount(choice);
        count++;
        
    }
   
        cout << "The total number of people surveyed is " << count-1 << ".";
        cout << "The results are as follows:" << endl;
        cout << "Beverage | Number of Votes" << endl;
        cout << "***********************************\n" << endl;
        cout << "Coffee | " << coffeeCount << endl;
        cout << "Tea | " << teaCount << endl;
        cout << "Coke | " << cokeCount << endl;
        cout << "Orange Juice | " << orangeCount << endl;
        

    return 0;
}
