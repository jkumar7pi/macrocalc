//
//  eggs.h
//  MacroCalculator
//
//  Created by Jatin Kumar on 10/20/24.
//

class eggs : public macros
{
public:
  void getProtein(double p)
    {
      
      cout << "How many eggs are you eating? "  << endl;
      cin >> pAndf;
      p = pAndf * 6 ;
      cout << "You are eating " << p << " grams of protein" << endl;
  }
    
void getFats(double f)
    {
    cout << "Eggs also have fat content in them" << endl;
   
    f = pAndf * 5 ;
    cout << "You are eating " << f << " grams of fat" << endl;
}
    
private:
    int pAndf;
    
};
