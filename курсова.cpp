#include <iostream>
#include <locale.h>

using namespace std;

int calculateCheesePieces(int m, int n) {
    if (m == 1 || n == 1) {
        // ���� ������ �� ���� ���� ����� ��� ���� �������, ������ ����� �� ����
        return max(m, n);
    }
    else {
        // ��������� �������
        return ((n-1)*(m-1) + 1); 
    }
}

int main() {
	setlocale(LC_CTYPE, "ukr");
    int m, n;

    // Menu
    int choice;
    cout << "1. ������� ���" << endl;
    cout << "2. I�������I�" << endl;
    cout << "3. ���I�" << endl;
    cout << "����i�� ����� �i� 1 �� 3: ";
    cin >> choice;

    while (choice != 3) {
        switch (choice) {
        case 1:
            cout << "����i�� ����i� ���� (m n): ";
            cin >> m >> n;
            cout << "����������� ����i� ��i ���� �i�����: " << calculateCheesePieces(m, n) << endl;
            break;
    
            
         case 2:
            cout << "I�������I�: ���i�� �� ��i��" << endl;
            cout << "------------------------------------" << endl;
            cout << "������ ������� ��i����� ������ � ����i ���i����� � ����i���� m �� n." << endl;
            cout << "����� ��i����� ������ �i����� ���� ��i���." << endl;
            cout << "I���i ������ �������� ���i�� �� ���������� �� �����i." << endl;
            cout << "���i�� ������ ��������� � ��������� �i���� ���� ������ i �������� �� ������� �������� ����, �������� ��i�� �� ����� �����." << endl;
            cout << "�i��� ���������� ���������� ������ ����� ���i�i �������� ����." << endl;
            cout << "� �����i ������ ���� �i��i ����i�� �� �i������i ����i� i �������." << endl;
            cout << "���i�� ������ ����� ������������i��� ���� ��� ����� ��i�i�, ��� �������� ������i���� �������i� ����." << endl;
			cout << "�i� ��� �������� ����i�i� ������, ����i�� �������� m �� n (�������: 2 3)" << endl;
			break;
        default:
            cout << "�� ����� �� �� �����( ��������� ������." << endl;
            break;
        }

        cout << "1. ������� ���" << endl;
    	cout << "2. I�������I�" << endl;
    	cout << "3. ���I�" << endl;
    	cout << "����i�� ����� �i� 1 �� 3: ";
        cin >> choice;
    }

    return 0;
}
