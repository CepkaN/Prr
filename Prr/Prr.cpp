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
    // ������ 1.
    std::string stroka, stroka2;
    std::cout << "������ 1.\n������� ������ 1 : ";
    getline(std::cin, stroka);
    std::cout << "������� ������ 2 : ";
    getline(std::cin, stroka2);
    std::string n= strk(stroka, stroka2);
    if (n.size() == stroka.size() && n.size() == stroka2.size())
        std::cout << "��� ����� �����!\n";
    else
        if (n == stroka)
            std::cout << "������ ������ 1\n";
        else
            std::cout << "������ ������ 2\n";

    // ������ 2.
    std::cout << "\n������ 2.\n������� ������ : ";
    std::string str;
    getline(std::cin, str);
    int cifr;
    std::cout << "������� ���������� ���������� :";
    std::cin >> cifr;
    std::cout << "�������� ������ : " << pr(str, cifr) << "\n\n";

    // ������ 3.
    std::cout << "������ 3.\n������� ������ : ";
    std::string gra;
    std::cin.ignore();
    getline(std::cin, gra);
    int b = spam(gra);
    std::cout << "������� ����� � ����� ������ : ";
    b > 0 ? (std::cout << "true") : (std::cout << "false");

    // ������ 4.
    std::cout << "\n\n������ 4.\n������� ������ : ";
    std::string bor;
    getline(std::cin, bor);
    std::cout << "� ����� ������ " << lettr(bor) << " ����.\n";

    return 0;
}