#include <iostream>

using namespace std;

ofstrem newFile;

int main()
{
    string numberArr[] = new string[3]

    for(int = 0; i > 0; i++){
        numberArr[i] = newFile.open("wynik.txt");
    }
    
    string str = "-9 8 2-æwiartka";
    
    newFile.close();
    
    newFile.open("wynik.txt");
    
    newFile << str;
    
    newFile.close();
    
    return 0;
}

