#include <iostream>

struct Adress
{
    std::string country = "";
    std::string city = "";
    std::string street = "";
    int numHome = 0;
    int numFlat = 0; //room
    int numIndex = 0;
};

int printAdress(const Adress &p)
{
    std::cout << "Страна: " << p.country;
    std::cout << std::endl;
    std::cout << "Город: " << p.city;
    std::cout << std::endl;
    std::cout << "Улица: " << p.street;
    std::cout << std::endl;
    std::cout << "Номер дома: " << p.numHome;
    std::cout << std::endl;
    std::cout << "Номер квартиры: " << p.numFlat;
    std::cout << std::endl;
    std::cout << "Индекс:  " << p.numIndex;
    std::cout << std::endl;
    std::cout << std::endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Adress p;

    p = { "Россия" , "Москва" , "Арбат" , 52 , 12 , 142401 };

    printAdress(p);

    p = { "Беларусь" , "Брест" , "Пр-т космонавтов" , 53 , 11 , 42402 };

    printAdress(p);
}