#include "MiniGames.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;

void isContinued() {
    cout << "\n������� ����� ������� ��� �����������...\n";
    _getch();
    system("cls");
}

void characterCreator() {
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "� ���� ���� �� ������ ������ �� �������� �� ��������\n";
    cout << "\n\n������ ��� ������, ����� �������� ������ ���������\n";
    cout << "��� ����� ������ ���������?\n";

    vector<string> Name = {
        "asd",
        "asds",
        "qwe",
        "www",
        "eee",
        "xxx",
        "zzz",
    };

    vector<string> Species = {
        "   ������� ",
        "   ���� ",
        "   ����� ",
        "   ��� ",
        "   ���������� ",
        "   ���������������� ",
        "   ������� ",
    };


    random_shuffle(Name.begin(), Name.end());
    random_shuffle(Species.begin(), Species.end());
    cout << Species[0] << Name[0] << endl;
    cout << Species[1] << Name[1] << endl;
}

void playGuessingGame(int& silver) {
    int randNumber = std::rand() % 4 + 1;
    int playerNumber = 0;
    cin >> playerNumber;
    if (playerNumber == randNumber)
{
    cout << "���� ���������� ��� ������� � �� ������ ��� ���� �����.\n"
         << "'�� �������', ������ �� � �������. ��� ���� �������";
    silver += 50;
    cout << "������ � ���� " << silver << " ���������� �����.";
}
else {
    cout << "���� ���������� ��� ������� � ������ ��� ����� " << randNumber << ". \n"
        << "'�� �� ������!', ����������� ���� ������. ���, �������, � ������� ����.";
    silver -= 10;
    cout << "������ � ���� " << silver << " ���������� �����.";
}
}

void randomGossips() {
    srand(static_cast<unsigned int>(time(nullptr)));
    vector<string> rumors = {
        "����� �������� ���� ��������, �������� � ������������ ���� ����� ��������.",
        "������ ������� ������ ���� � �������!",
        "��� �� ������, � ��� ������-���������.",
        "���� �������� �� ������, � ����������� �����.",
        "�� ����� ���� ����� � �������� ������� �������.",
        "������� ��������� ������� � ����������, �������� � ���� ���������� ��������.",
        "������� ����� �� ����, ��������� � ��� ����������� �������.",
    };

    vector<string> peasantsTavern = {
        "   ������ �����, ������� �� ���, ������, ��� ",
        "   ����� ���� � �������� �������� ���������� ����� ",
        "   ����� ���������� ������ ��� �� ����� ���� ",
        "   ������ ������ �����, ������� ��� ������� �������, ������, ��� ",
        "   �������� ��� ��������� ����-�� ������ � ���� ���� � ������, ���, ",
        "   ������ � ���� ����������� ������� ������ ��� ",
        "   ������� ���� ���� �������� ����� ������ ������ � ������� ������������ �������� ����� ",
    };


    random_shuffle(rumors.begin(), rumors.end());
    random_shuffle(peasantsTavern.begin(), peasantsTavern.end());
    cout << peasantsTavern[0] << rumors[0] << endl;
    cout << peasantsTavern[1] << rumors[1] << endl;
}