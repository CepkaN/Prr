#include <iostream>
#include<string>
std::string strk(std::string a, std::string b) {
    std::string  max;
    if (a.size() > b.size())
        max = a;
    else max = b;
    return max;
}
std::string pr(std::string s, int ci) {
    std::string a = s;
    for (int i = 1; i < ci; i++)
        s += a;
    return s;
}
int spam(std::string stro) {
    int counter = 0;
    for (int i = 0; i < stro.length(); i++)
        stro[i] = std::tolower(stro[i]);
    int a = stro.find("100% free"), b = stro.find("sales increase"), c = stro.find("only today");
    counter = counter + a + b + c;
    return counter;
}
int lettr(std::string stroka) {
    int cot = 1;
    for (int i = 0; i < stroka.length(); i++)
        if (stroka[i] == ' ')
            cot++;
    return cot;

}
int main(){
    setlocale(LC_ALL, "Russian");
    // Задача 1.
    std::string stroka, stroka2;
    std::cout << "Задача 1.\nВведите строку 1 : ";
    getline(std::cin, stroka);
    std::cout << "Введите строку 2 : ";
    getline(std::cin, stroka2);
    std::string n= strk(stroka, stroka2);
    if (n.size() == stroka.size() && n.size() == stroka2.size())
        std::cout << "Они одной длины!\n";
    else
        if (n == stroka)
            std::cout << "Больше строка 1\n";
        else
            std::cout << "Больше строка 2\n";

    // Задача 2.
    std::cout << "\nЗадача 2.\nВведите строку : ";
    std::string str;
    getline(std::cin, str);
    int cifr;
    std::cout << "Введите количество повторений :";
    std::cin >> cifr;
    std::cout << "Итоговая строка : " << pr(str, cifr) << "\n\n";

    // Задача 3.
    std::cout << "Задача 3.\nВведите строку : ";
    std::string gra;
    std::cin.ignore();
    getline(std::cin, gra);
    int b = spam(gra);
    std::cout << "Наличие спама в Вашей строке : ";
    b > 0 ? (std::cout << "true") : (std::cout << "false");

    // Задача 4.
    std::cout << "\n\nЗадача 4.\nВведите строку : ";
    std::string bor;
    getline(std::cin, bor);
    std::cout << "В Вашей строке " << lettr(bor) << " слов.\n";

    return 0;
}