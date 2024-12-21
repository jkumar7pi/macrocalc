//
//  beef.h
//  MacroCalculator
//
//  Created by Jatin Kumar on 10/20/24.
//


class GroundBeef : public macros
{
public:
    void getProtein(double p)
    {
        cout << "93/7 ground beef has 20.8 grams of protein per 100g" << endl;
        cout << "How many grams beef are you eating?" << endl;
        cin >> pAndf;
        p = pAndf * 0.208;
        cout << "You are eating " << p << " grams of protein" << endl ;
        
       
    }
    
    void getFats(double f)
    {

        cout << "Beef also has 7 grams of fat per 100g" << endl;
        f = pAndf * 0.07;
        cout << "You are eating " << f << "grams of fat" << endl;

    }
private:
    int pAndf;
};
