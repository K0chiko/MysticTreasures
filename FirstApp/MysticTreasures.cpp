﻿// FirstApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Это простая игра про дварфов которые пытаются добыть золото в древней горной крепости.

#include <iostream>
#include <string>
#include <Windows.h>
#include "MiniGames.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleOutputCP(CP_UTF8);
    int  silver = 900;
    int  adventures, killed, survivors;
    string mainName;

    srand(static_cast<unsigned int>(std::time(nullptr)));     //это взято из чата бинг. Как я понял, берет время на компе и от этого идет расчет случайного числа
 
    characterCreator();

    int dwarves = std::rand() % 5 + 5;
    cout << "   Поздний вечер, город \x1b[32m Старквиндер \x1b[0m, таверна «Кровавая жаба» . \n"
        << "    Вы только что получили вознаграждение за зачистку занятой вурдалаками пещеры неподалёку от города и сейчас активно его тратите.\n"
        << "Уже изрядно набравшись, вы под весёлые звуки панфлейты занимаетесь своим делом . Кто чем занимается ?\n"

        << "    В какой-то момент, коротко стриженный полурослик с бакенбардами и небольшим шрамом на подбородке слева подсаживается рядом.\n\n"
        //<< "   \x1b[38;5;11m- Привет! Ты ведь " << mainName << ", верно? Я слышал о тебе. Я Рид Чистосвист. \n"
        << "Знаю, ты только что сорвал куш, но я хочу предложить тебе дело, которое обеспечит тебе сытую старость.\n"
        << "В двух днях от \x1b[32m Старквиндера \x1b[38;5;11m в ущелье лежит схрон какого-то древнего волшебника.\n"
        << "Схрон охранятеся драконом и те, кто зарился на него, живыми не возвращались.\n"
        << "За золотом уже отправились \x1b[31mбратки Броген \x1b[38;5;11m - здоровенные орки тройняшки. \n"
        << "Однако они не решились идти кратчайшим путем через \x1b[32m Топи \x1b[38;5;11m и дойдут до ущелья, самое раннее, через неделю.\x1b[0m\n\n"
        << "Услышав рассказ Рида, посетители таверны столпились вокруг вас и начали добавлять в рассказ самые разные факты о драконах.\n";
        randomGossips();
        
        isContinued();

        cout << "\n"
            << "    Начался жаркий спор и некоторые начали особо рьяно доказывать свою правоту.\n"
            << "В какой-то момент владелец таверны - безбородый Хьюп Добробочка со стрижкой под горшок вышел из-за стойки.\n"
            << "Неожиданно быстро для своего размера он прошел через всю таверну и начал говорить изрядно напившемуся орку, что пора покинуть зал.\n"
            << "Завязалась драка и спустя несколько секунд Хьюп мощным ударом в печень уложил смутьяна на пол.\n"
            << "    \x1b[38;5;11m- Унесите его в свою комнату!\x1b[0m, гаркнул хозяин таверны дварфам-вышибалам.\n"
            << "Пока его несли наверх, он заплетающимся языком пытался еще раз поделиться со всеми своей мудростью.\n"
            << "    \x1b[38;5;11m- С-сокр, Ик!, ровищща охраняет красный дракон!\n"
            << "    Я лично его видел! Ик!\n"
            << "    Тогда я не подошел к нему и правильно сделал. Так я считаю!\x1b[0m\n";

        isContinued();
        
        cout << "    Когда стало немного тише, Рид сказал, что знает одного парня, который может провести тебя через Топи.\n"
        << "   \x1b[38;5;11m - Завтра утром я тебе его представлю.\x1b[0m\n"
        << "На вопрос о том, зачем все это нужно Риду, полурослик сказал, что очень мечтает насолить братьям Броген.\n"
        << "    \x1b[38;5;11m- Эти животные терроризируют всю округу! Если ты заодно избавишь мир еще и от них, то все будут благодарны тебе.\x1b[0m\n";

        cout << "   Встав рано утром ты спустился вниз и начал ждать Рида и его таинственного друга."
            << "\n"
            << "\n"
            << "\n"
            << "\n";

    int gamer_choice = 0;
    cin >> gamer_choice;

   
    switch (gamer_choice)
    {
    case 1:
        cout << "   Вы видите хитрого плута, который записывает что-то на бумажке.\n"
             << "    Он смотрит на вас и спрашивает какое число от 1 до 4 он загадал.\n"
             << "\x1b[31m    Введите число от 1 до 4, затем нажмите Enter \x1b[0m";
            playGuessingGame(silver);
            break;

    case 2:
        cout << "Допив пиво, вы отправились к повозке.\n"
             << "Запрягнув лошадей и проверив все ли на месте, вы сели в повозку и поехали на юг" << endl;
    default:
        cout << "sadasd";
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

        /*int randNumber = std::rand() % 4 + 1;
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
        }*/
