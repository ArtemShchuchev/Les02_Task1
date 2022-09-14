#include <iostream> // консоль - cout

enum class Month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OKT, NOV, DEC};
short userInput();
void printMonth(const short);

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");   // задаём русский текст
    std::system("cls");

    std::cout << "Задача 1. Месяцы\n";
    std::cout << "----------------\n" << std::endl;

    short user = 0;
    do
    {
        user = userInput();
        printMonth(user);
    } while (user);

    std::cout << "До свидания" << std::endl;

    return 0;
}

short userInput()
{
    using namespace std;
    
    short userNum = 0;
    cout << "Введите номер месяца или 0 для выхода: "; cin >> userNum;
    
    if (std::cin.fail())
    {
        std::cin.clear(); // ошибка ввода
        userNum = -1;
    }
    int ch; // поиск и очистка лишних введенных символов
    while ((ch = std::cin.get()) != '\n' && ch != EOF) ;

    return userNum;
}
void printMonth(const short user)
{
    using namespace std;

    if (!user) return; // нечего показывать

    string monStr;
    Month mon = static_cast<Month>(user);
    switch (mon)
    {
    case Month::JAN:
        monStr = "Январь";
        break;
    case Month::FEB:
        monStr = "Февраль";
        break;
    case Month::MAR:
        monStr = "Март";
        break;
    case Month::APR:
        monStr = "Апрель";
        break;
    case Month::MAY:
        monStr = "Май";
        break;
    case Month::JUN:
        monStr = "Июнь";
        break;
    case Month::JUL:
        monStr = "Июль";
        break;
    case Month::AUG:
        monStr = "Август";
        break;
    case Month::SEP:
        monStr = "Сентябрь";
        break;
    case Month::OKT:
        monStr = "Октябрь";
        break;
    case Month::NOV:
        monStr = "Ноябрь";
        break;
    case Month::DEC:
        monStr = "Декабрь";
        break;
    default:
        monStr = "Неправильный номер! Попробуй еще...";
        break;
    }
    cout << monStr << endl;
}
