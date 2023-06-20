#include <iostream>
#include <locale.h>

using namespace std;

int calculateCheesePieces(int m, int n) {
    if (m == 1 || n == 1) {
        // Якщо клумба має лише один рядок або одну колонку, Анфіса збирає всі квіти
        return max(m, n);
    }
    else {
        // Загальний випадок
        return ((n-1)*(m-1) + 1); 
    }
}

int main() {
	setlocale(LC_CTYPE, "ukr");
    int m, n;

    // Menu
    int choice;
    cout << "1. ПОЧАТОК ГРИ" << endl;
    cout << "2. IНСТРУКЦIЯ" << endl;
    cout << "3. ВИХIД" << endl;
    cout << "Введiть цифру вiд 1 до 3: ";
    cin >> choice;

    while (choice != 3) {
        switch (choice) {
        case 1:
            cout << "Введiть розмiр поля (m n): ";
            cin >> m >> n;
            cout << "Максимально сиркiв якi вона зiбрала: " << calculateCheesePieces(m, n) << endl;
            break;
    
            
         case 2:
            cout << "IНСТРУКЦIЯ: Анфiса та квiти" << endl;
            cout << "------------------------------------" << endl;
            cout << "Мурзик створив квiткову клумбу у формi шахiвниці з розмiрами m на n." << endl;
            cout << "Кожна клiтинка клумби мiстить одну квiтку." << endl;
            cout << "Iнодi Мурзик виносить Анфiсу на прогулянку по клумбi." << endl;
            cout << "Анфiса завжди розпочинає з верхнього лiвого кута клумби i рухається до правого нижнього кута, збираючи квiти на своєму шляху." << endl;
            cout << "Пiсля завершення прогулянки Мурзик вручає Анфiсi шматочок сиру." << endl;
            cout << "У клумбi можуть бути рiзнi розмiри та кiлькостi рядкiв i колонок." << endl;
            cout << "Анфiса завжди обирає найоптимальнiший шлях для збору квiтiв, щоб отримати якнайбiльше шматочкiв сиру." << endl;
			cout << "Пiд час введення розмiрiв клумби, введiть значення m та n (приклад: 2 3)" << endl;
			break;
        default:
            cout << "Ви ввели не те число( Повоторіть спробу." << endl;
            break;
        }

        cout << "1. ПОЧАТОК ГРИ" << endl;
    	cout << "2. IНСТРУКЦIЯ" << endl;
    	cout << "3. ВИХIД" << endl;
    	cout << "Введiть цифру вiд 1 до 3: ";
        cin >> choice;
    }

    return 0;
}
