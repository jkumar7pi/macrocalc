//
//  chicken.h
//  MacroCalculator
//
//  Created by Jatin Kumar on 10/18/24.
//

using namespace std;

class chickenBreasts : public macros
{
public:
    
    void getProtein(double p)
    {
        cout << "Chicken Breats have 31 grams of protein per 100g" << endl;
        double setProtein;
        cout << "How many grams of chicken breasts are you eating?" << endl;
        cin >> setProtein;
        p = setProtein * 0.31;
        cout << "You are eating " << p << " grams of protein" << endl ;
        
        cout << "The carbs and fats in chicken breasts are near zero" << endl;
    }
};

class chickenThighs : public macros
{
public:
    void getProtein(double p)
    {
        cout << "Chicken Thighs have 24 grams of protein per 100g" << endl;
        cout << "How many grams of chicken thighs are you eating?" << endl;
        cin >> pAndf;
        p = pAndf * 0.24;
        
        cout << "You are eating " << p << " grams of protein" << endl;
        
    }
    
    void getFats(double f)
    {

        cout << "They also have 9 grams of fat per 100g" << endl;
        f = pAndf * 0.09;
        cout << "You are eating " << f << "grams of fat" << endl; 

    }
    
private:
    int pAndf;
};

