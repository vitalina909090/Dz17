#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

// // 1 завдання
//typedef struct {
//    string tel;
//    string prith;
//} People;
//
//void New(People mas[], int& index) {
//    int yes;
//
//    do {
//        cout << "Введіть прізвище та номер " << index + 1 << " абонента: ";
//        cin >> mas[index].prith >> mas[index].tel;
//        index++;
//
//        cout << "Хочете ще додати? (1-так 2-ні): ";
//        cin >> yes;
//    } while (yes == 1 && index < 10);
//
//    cout << "Всі абоненти збережені!" << endl;
//}
//
//void Print(People mas[], int index) {
//    cout << "Список прізвищ абонентів та їх телефонів:" << endl;
//    for (int i = 0; i < index; i++) {
//        cout << mas[i].prith << ": " << mas[i].tel << endl;
//    }
//}
//
//void Search(People mas[], int index, const string& searchName) {
//    int myindex = -1;
//
//    for (int i = 0; i < index; i++) {
//        if (mas[i].prith == searchName) {
//            myindex = i;
//            break;
//        }
//    }
//
//    if (myindex != -1) {
//        cout << "Прізвище: " << mas[myindex].prith << ", Телефон: " << mas[myindex].tel << endl;
//    }
//    else {
//        cout << "Абонент з прізвищем '" << searchName << "' не знайдений." << endl;
//    }
//}
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    ifstream file("abonent.txt");
//    if (!file) {
//        cout << "Файл не знайдено!" << endl;
//        return 1;
//    }
//
//    People mas[10];  
//    int index = 0;
//    int choice;
//    string searchName;
//    file.close();
//
//    do {
//        cout << "Оберіть опцію:" << endl;
//        cout << "1. Додати нового абонента" << endl;
//        cout << "2. Вивести список абонентів" << endl;
//        cout << "3. Пошук абонента за прізвищем" << endl;
//        cout << "0. Вихід" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            New(mas, index);
//            break;
//        case 2:
//            Print(mas, index);
//            break;
//        case 3:
//            cout << "Введіть прізвище абонента для пошуку: ";
//            cin >> searchName;
//            Search(mas, index, searchName);
//            break;
//        case 0:
//            cout << "Завершення програми." << endl;
//            break;
//        default:
//            cout << "Невірний вибір опції. Спробуйте ще раз." << endl;
//            break;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}

// // 2 завдання
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    ifstream input("input.txt");
//    if (!input) {
//        cout << "Не вдалося відкрити файл" << endl;
//        return 1;
//    }
//    ofstream output("output.txt");
//    if (!output) {
//        cout << "Не вдалося відкрити файл" << endl;
//        return 1;
//    }
//
//    string line;
//    while (getline(input, line)) {
//        output << line << endl;
//    }
//
//    input.close();
//    output.close();
//
//    cout << "Рядки були успішно скопійовані" << endl;
//
//    return 0;
//}

// // 3 завдання
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    ifstream input("input.txt");
//    if (!input) {
//        cout << "Не вдалося відкрити файл" << endl;
//        return 1;
//    }
//    vector<string> lines;
//    string line;
//    while (getline(input, line)) {
//        lines.push_back(line);
//    }
//    input.close();
//
//    ofstream output("output.txt");
//    if (!output) {
//        cout << "Не вдалося відкрити файл" << endl;
//        return 1;
//    }
//    for (int i = lines.size() - 1; i >= 0; i--) {
//        output << lines[i] << endl;
//    }
//    output.close();
//
//    cout << "Рядки були скопійовані у зворотньому порядку" << endl;
//
//    return 0;
//}

//// 4 завдання
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    ifstream inFile("file.txt");
//
//    if (!inFile.is_open()) {
//        cerr << "Не вдалося відкрити файл" << endl;
//        return 1;
//    }
//
//    vector<string> lines;
//    string line;
//
//    while (getline(inFile, line)) {
//        lines.push_back(line);
//    }
//
//    inFile.close();
//
//    if (lines.size() > 0) {
//        string lastLine = lines.back();
//        string separator = "------------";
//
//        lines.push_back(separator);
//
//        ofstream outFile("file.txt");
//
//        if (!outFile.is_open()) {
//            cerr << "Не вдалося відкрити файл" << endl;
//            return 1;
//        }
//
//        for (int i = 0; i < lines.size(); i++) {
//            outFile << lines[i] << endl;
//        }
//
//        outFile.close();
//
//        cout << "(------------) додано" << endl;
//    }
//    else {
//        cout << "Файл пустий" << endl;
//    }
//
//    return 0;
//}