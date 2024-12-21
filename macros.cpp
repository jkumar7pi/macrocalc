//
//  main.cpp
//  MacroCalculator
//
//  Created by Jatin Kumar on 10/18/24.
//

#include <iostream>
#include "macros.h"
#include "chicken.h"
#include "beef.h"
#include "rice.h"
#include "eggs.h"


using namespace std;

//Can i make it so that proteins and fats are accessed in same scope?
//How can I display macro by macro?
//How can i ask the user to if they want to add more food?

int main()
{
    macros m;
    chickenBreasts CHICKENBREASTS;
    chickenThighs CHICKENTHIGHS;
    GroundBeef GROUNDBEEF;
    rice RICE;
    eggs EGGS;
    
    string carbs;
    string protein;
    
    cout << "What is your carb source?" << endl;
    cin >> carbs;
    
    if(carbs == "Rice")
        RICE.getCarbs(0);
    else
        cout << "Invalid" << endl;
    
    cin.ignore(); 
    
    cout << "What is your protein source? " << endl;
    getline(cin, protein);
    
    if(protein == "Chicken Breasts")
        CHICKENBREASTS.getProtein(0);
    else if(protein == "Chicken Thighs")
    {
        CHICKENTHIGHS.getProtein(0);
        CHICKENTHIGHS.getFats(0);
    }
    else if (protein == "Beef")
    {
        GROUNDBEEF.getProtein(0);
        GROUNDBEEF.getFats(0);
    }
    else if(protein == "Eggs")
    {
        EGGS.getProtein(0);
        EGGS.getFats(0); 
    }
    else
        cout << "Invalid";
        
    
    
    
    
}
