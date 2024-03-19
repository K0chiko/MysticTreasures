#include "MiniGames.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;

void isContinued() {
    cout << "\nНажмите любую клавишу для продолжения...\n";
    _getch();
    system("cls");
}

void characterCreator() {
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "В этой игре ты будешь играть за охотника на монстров\n";
    cout << "\n\nПрежде чем начать, давай создадим твоего персонажа\n";
    cout << "Как зовут твоего персонажа?\n";

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
        "   человек ",
        "   эльф ",
        "   дварф ",
        "   орк ",
        "   полурослик ",
        "   драконорожденный ",
        "   тифлинг ",
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
    cout << "Плут показывает вам бумажку и вы видите там свое число.\n"
         << "'Ты победил', сказал он с досадой. Вот твой выигрыш";
    silver += 50;
    cout << "Теперь у тебя " << silver << " серебряных монет.";
}
else {
    cout << "Плут показывает вам бумажку и видите там число " << randNumber << ". \n"
        << "'Ты не угадал!', торжествует этот подлец. Это, пожалуй, я оставлю себе.";
    silver -= 10;
    cout << "Теперь у тебя " << silver << " серебряных монет.";
}
}

void randomGossips() {
    srand(static_cast<unsigned int>(time(nullptr)));
    vector<string> rumors = {
        "среди сокровищ есть огромный, размером с человеческий рост кусок хрусталя.",
        "дракон плюётся смесью льда и пламени!",
        "это не дракон, а сам колдун-перевёртыш.",
        "клад охраняет не дракон, а шестиглавая гидра.",
        "на самом деле страж – огромная толстая виверна.",
        "вершина коллекции колдуна – гигантский, размером с огра магический кристалл.",
        "колдуна вовсе не было, сокровище – это экскременты дракона.",
    };

    vector<string> peasantsTavern = {
        "   Хмурый дварф, сплюнув на пол, сказал, что ",
        "   Тощий эльф с длинными волосами утверждает будто ",
        "   Рябая крестьянка кричит что на самом деле ",
        "   Пьяный вдрызг мужик, оттерев рот грязным рукавом, заявил, что ",
        "   Огромный орк оттолкнув кого-то оперся о твой стол и заявил, мол, ",
        "   Старик с дико выпученными глазами кричит что ",
        "   Боевого вида гном внезапно начал махать руками и активно жестикулируя говорить будто ",
    };


    random_shuffle(rumors.begin(), rumors.end());
    random_shuffle(peasantsTavern.begin(), peasantsTavern.end());
    cout << peasantsTavern[0] << rumors[0] << endl;
    cout << peasantsTavern[1] << rumors[1] << endl;
}