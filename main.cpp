#include <iostream>
#include <string>

using namespace std;

int main()
{

 int x, y;
 string coord;
 bool SpecialSign = false;
  x=0; y=0;

  cout <<"Enter coordinates ('>', '<', '^', 'v'): " ;
  cin >> coord;

  for(int i=0;i<coord.length();i++){
      if((coord.at(i) == '~')&&(!SpecialSign)){
          SpecialSign = true;
         } else if((coord.at(i) == '~')&&(SpecialSign)){
          SpecialSign = false;
         }
    if(!SpecialSign){
      if(coord.at(i) == '>'){
        x = x + 1;
       }
      if(coord.at(i) == '<'){
        x = x - 1;
       }
      if(coord.at(i) == '^' ){
        y = y - 1;
       }
      if(coord.at(i) == 'v'){
        y = y + 1;
       }
    } else {
      if(coord.at(i) == '>'){
        x = x - 1;
       }
      if(coord.at(i) == '<'){
        x = x + 1;
       }
      if(coord.at(i) == '^' ){
        y = y + 1;
       }
      if(coord.at(i) == 'v'){
        y = y - 1;
       }
    }
  }

  cout << "x=" << x << "  y=" << y ;

  return 0;

}
