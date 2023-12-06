#include <iostream>

int main() {
    const int n = 8; // количество дисков
    const int numPegs = 3; // количество стержней

    // Создаем массивы для хранения информации о дисках и их текущих позициях
    int disks[n];
    int positions[n];

    // Инициализируем массивы с начальными значениями
    for (int i = 0; i < n; i++) {
        disks[i] = i + 1;
        positions[i] = 0;
    }

    int pegs[numPegs]; // Массив для хранения стержней
    int numMoves = (1 << n) - 1; // Общее количество перемещений

    // Инициализируем массив стержней
    for (int i = 0; i < numPegs; i++) {
        pegs[i] = 0;
    }

    // Выводим стартовое состояние башни
    std::cout << "Start: ";
    for (int i = 0; i < n; i++) {
        std::cout << disks[i] << " ";
    }
    std::cout << std::endl;

    // Цикл перемещений
    for (int move = 1; move <= numMoves; move++) {
        int disk = (move & (move - 1)) % 3; // Выбираем диск для перемещения
        pegs[positions[disk]] ^= 1 << disk; // Инвертируем позицию данного диска на стержне

        // Выводим текущее состояние башни
        std::cout << "Move " << move << ": ";
        for (int i = 0; i < n; i++) {
            int peg = 0;

            // Определяем на каком стержне находится диск
            for (int j = 0; j < numPegs; j++) {
                if (pegs[j] & (1 << i)) {
                    peg = j;
                    break;
                }
            }

            // Выводим номер диска на текущем стержне
            if (pegs[peg] & (1 << i)) {
                std::cout << disks[i] << " ";
                positions[i] = peg;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}