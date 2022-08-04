#include <iostream>

struct Adress
{
    std::string country = "Россия";
    std::string city = "Москва";
    std::string street = "Арбат";
    int numHome = 52;
    int numFlat = 12; //room
    int numIndex = 142401;
};

void printAdress(Adress* p)
{
    std::cout << "Страна: " << p->country;
    std::cout << std::endl;
    std::cout << "Город: " << p->city;
    std::cout << std::endl;
    std::cout << "Улица: " << p->street;
    std::cout << std::endl;
    std::cout << "Номер дома: " << p->numHome;
    std::cout << std::endl;
    std::cout << "Номер квартиры: " << p->numFlat;
    std::cout << std::endl;
    std::cout << "Индекс:  " << p->numIndex;
    std::cout << std::endl;
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Adress p;

    printAdress(&p);
    p.city = "Осма";
    printAdress(&p);
}