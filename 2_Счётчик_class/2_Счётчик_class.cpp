// 2_Счётчик_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>

//описание класса
class Counter {
    //закрытые члены класса
private:
    //поля
    int pole;


    //методы
public:
    void pluse_1();
    void minus_1();
    int present_value();


    //////////////////////////////////////////////////////////////////////////////////////
    //возможность создания экземпляра класса с начальным значением по умолчанию (1)
    //конструктор без аргументов
    Counter() {
        pole = 1;
    }
    //возможность создания экземпляра класса с инициализирующим начальным значением
    //конструктор с аргументами
    Counter(int pole) {
        
    }
};
//////////////////////////////////////////////////////////////////////////////////
//описываем методы вне class:
//возможность увеличить своё значение на 1
void Counter::pluse_1() {
    pole++;   
}
//возможность уменьшить своё значение на 1
void Counter::minus_1() {
    pole--;   
}
//возможность посмотреть своё текущее значение
int Counter::present_value() {
    
    return pole;
}


int main() {
    setlocale(LC_ALL, "RU");
    Counter number;
    //присваивание значений полям
    std::cout << "Вы хотите указать начальное значение счётчика?" << "\n" << "Введите yes или no:" << std::endl;
    std::string yes_no;
    std::cin >> yes_no;
    if (yes_no == "yes") {
        std::cout << "Введите начальное значение счётчика:" << std::endl;
        int m;
        std::cin >> m;
        class Counter Counter(m); //создание объекта
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::string command_2;
        std::cin >> command_2;
        while (command_2 != "x")
        {
            std::cout << "Введите команду ('+', '-', '=' или 'x'):";
            std::string command_2;
            std::cin >> command_2;
            if (command_2 == "+")
            {
                std::cout << number.pluse_1() << std::endl;
            }
            else if (command_2 == "-")
            {
                std::cout << number.minus_1() << std::endl;;
            }
            else if (command_2 == "=")
            {
                std::cout << number.present_value() << std::endl;;
            }

            else if (command_2 == "x") {
                std::cout << "До свидания!" << std::endl;
                break;
            }

        }
    }

    //////////////////////////////////////////////////////////////////////////////    


    if (yes_no == "no") {
        class Counter Counter();
        std::cout << "Введите команду ('+', '-', '=' или 'x'):";
        std::string command_5;
        std::cin >> command_5;
        while (command_5 != "x") {
            std::cout << "Введите команду ('+', '-', '=' или 'x'):";
            std::string command_5;
            std::cin >> command_5;
            if (command_5 == "+")
            {
                std::cout << number.pluse_1() << std::endl;
            }
            else if (command_5 == "-")
            {
                std::cout << number.minus_1() << std::endl;;
            }
            else if (command_5 == "=")
            {
                std::cout << number.present_value() << std::endl;;
            }
            else if (command_5 == "x") {
                std::cout << "До свидания!" << std::endl;
                break;
            }

        }
    }



    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
