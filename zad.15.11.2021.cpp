#include <iostream>

using namespace std;

class Uczen{
    public: 
        string imie = "Jan";
    
        string nazwisko = "Kowalski";
    
        string klasa = "3Cg";
    
        int ocenaKoncPolski = 3;
    
        int ocenaKoncMatematyka = 2;
        
        int ocenaKoncFizyka = 2;
        
        void wyswietlOceny(int ocenaKoncPolski, int ocenaKoncMatematyka, int ocenaKoncFizyka){
            std::cout << "Polski: ";
            std::cout << ocenaKoncPolski << std::endl;
            std::cout << "Matematyka: ";
            std::cout << ocenaKoncMatematyka << std::endl;
            std::cout << "Fizyka: ";
            std::cout << ocenaKoncFizyka << std::endl;
        }
        
        void wyswietlDane(string imie, string nazwisko, string klasa){
            std::cout << imie << std::endl;
            std::cout << nazwisko << std::endl;
            std::cout << klasa << std::endl;
        }
        
        void sredniaOcen(int ocenaKoncPolski, int ocenaKoncMatematyka, int ocenaKoncFizyka){
            int srednia = (ocenaKoncPolski + ocenaKoncMatematyka + ocenaKoncFizyka) / 3;
            std::cout << "Srednia ocen: ";
            std::cout << srednia << std::endl;
        }
        
        void wprowadzlDane(){
            Uczen uczen1;
            
            std::cout << "Wprowadz imie: ";
            std::cin >> uczen1.imie;
            std::cout << uczen1.imie;
            std::cout << " " << std::endl;
            
            std::cout << "Wprowadz nazwisko: ";
            std::cin >> uczen1.nazwisko;
            std::cout << uczen1.nazwisko;
            std::cout << " " << std::endl;
            
            std::cout << "Wprowadz klasa: ";
            std::cin >> uczen1.klasa;
            std::cout << uczen1.klasa;
            std::cout << " " << std::endl;
            
            std::cout << "Wprowadz ocenaKoncPolski: ";
            std::cin >> uczen1.ocenaKoncPolski;
            std::cout << uczen1.ocenaKoncPolski;
            std::cout << " " << std::endl;
            
            std::cout << "Wprowadz ocenaKoncMatematyka: ";
            std::cin >> uczen1.ocenaKoncMatematyka;
            std::cout << uczen1.ocenaKoncMatematyka;
            std::cout << " " << std::endl;
            
            std::cout << "Wprowadz ocenaKoncFizyka: ";
            std::cin >> uczen1.ocenaKoncFizyka;
            std::cout << uczen1.ocenaKoncFizyka;
            std::cout << " " << std::endl;
        }
};

int main()
{
    Uczen uczen1;
    
    uczen1.wyswietlDane(uczen1.imie, uczen1.nazwisko, uczen1.klasa);
    
    uczen1.wyswietlOceny(uczen1.ocenaKoncPolski, uczen1.ocenaKoncMatematyka, uczen1.ocenaKoncFizyka);
    
    uczen1.sredniaOcen(uczen1.ocenaKoncPolski, uczen1.ocenaKoncMatematyka, uczen1.ocenaKoncFizyka);
    
    return 0;
}
