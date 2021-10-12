#include <iostream>

using namespace std;

ofstream firstFile;

ofstream secondFile;

int main()
{
    string str = newFile.open("haslo.txt");
    
    newFile.close();
    
    if(str.length >= 8){
        secondFile << str;
        
        secondFile.close();
    }
}

