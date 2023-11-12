#include <iostream>
using namespace std;

int user_age;
int user_choose;

void showcase()
{
  cout << "-------/--------------/----\n";
  cout << "-kilobytes to byte&bits Applection-\n";
  cout << "---------------/-----------\n";
  cout << "1-/=/=/=/Convert : \n";
  cout << "2-/=/=/=/Exit : \n";
  cin >> user_choose;
}

void cal()
{

  do
  {
    showcase();
    switch (user_choose)
    {
    case 1:
      int user_input;
      cout << "How mutch kilobytes to byte&bits do you want to convert ? : \n";
      cin >> user_input;
      cout << "The Number Of byte&bits bytes you write is :  " << user_input << "\n";
      cout << "Convert From KiloBytes to byte = " << user_input * 1024 << " bytes \n";
      cout << "Convert From KiloBytes to bits = " << user_input * 1024 * 8 << " bits \n";
      cal();
      break;
    }
  } while (user_choose < 1);
}

int main()
{
  cal();
}
