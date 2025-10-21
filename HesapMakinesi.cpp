#include <iostream>
using namespace std;
 
int main() { 

char op;
double num1;
double num2;
double result;

cout<<"**********Hesap Makinesi**********\n";


cout<<"isleminiz(+,-,*,/):";
cin>>op;

cout<<"birinci sayiyi giriniz:";
cin>>num1;

cout<<"ikinci sayiyi giriniz:";
cin>>num2;

switch(op){
  case  '+':
  result= num1+num2;
  cout<<"Cevap:"<< result << '\n';
  break;

  case  '-':
  result= num1-num2;
  cout<<"Cevap:"<< result << '\n';
  break;

  case  '*':
  result= num1*num2;
  cout<<"Cevap:"<< result << '\n';
  break;

 case '/': 
 if (num2 != 0) {
  result= num1/num2;
  cout<<"Cevap:"<< result << '\n';
 } else {
   cout<< "Hata: Bir sayiyi sifira bolemezsiniz!\n"; }
  break;
  default:
  cout<< "Bu geçerli bir sebep değil\n";
  break;
}

cout<<"**************************************";


return 0;

}
