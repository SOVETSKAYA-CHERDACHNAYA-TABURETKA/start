#include <iostream>
 
int main()
{
    unsigned count {};    // количество введенных чисел
    int sum {};       // для хранения суммы чисел
   
    while (true)
    {
        std::cout << "Enter a number: ";
        int n;          // для ввода каждого числа
        std::cin >> n;
        sum += n;       // увеличиваем сумму на введенное число
        ++count;        // увеличиваем счетчик введенных чисел
 
        char yesno {};
        std::cout << "Finish (y/n)? ";   // спрашиваем, надо ли завершить
        std::cin >> yesno;
 
        if (yesno == 'y' || yesno == 'Y') break;    // если ввели y или Y, выходим из цикла
    }
    // выводим сумму чисел
    std::cout << "sum: " << sum << std::endl;
    // преобразуем в double, чтобы не потерять дробную часть
    std::cout << "average: " << (static_cast<double>(sum) / count) << std::endl;
}