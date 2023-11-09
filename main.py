#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cout << "How mutch kilobytes to byte&bits do you want to convert ? : \n";
    cin >> user_input;
    cout << "The Number Of byte&bits bytes you write is :  " << user_input << "\n";
    cout << "Convert From KiloBytes to byte = " << user_input * 1024 << " bytes \n";
    cout << "Convert From KiloBytes to bits = " << user_input * 1024 * 8 << " bits \n";

    return 0;
}

// Needed Output
//"Hello Elzero Web School I Love Programming Too Much Specially C++"
