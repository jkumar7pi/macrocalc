//
//  macros.h
//  MacroCalculator
//
//  Created by Jatin Kumar on 10/18/24.
//

class macros
{
public:
    
    macros();
    void getProtein(double p);
    void getFats(double f);
    void getCarbs(double c);


private:
    double fats;
    double protein;
    double carbs;
};

macros::macros() {}; 

void macros::getProtein(double p)
{
    protein = p;
}

void macros::getFats(double f)
{
    fats = f;
}

void macros::getCarbs(double c)
{
    carbs = c;
}
