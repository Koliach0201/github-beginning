/*//Программа Game Stats
//Демонстрирует объявление и инициализацию переменных
#include <iostream>

using namespace std;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;
    double engineTemp = 6572.89;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0;
}*/

/*//Программа Game Stats 2.0
//Демонстрирует арифметические операции с переменными
#include <iostream>

using namespace std;

int main()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    
    // изменение значения переменной
    score = score + 100;
    cout << "score: " << score << endl;
    
    // комбинированный оператор присваивания
    score += 100;
    cout << "score: " << score << endl;
    
    //операторы инкремента 
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;
    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;
    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;
    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus = " << lives << ", " << bonus << endl;

    // целочисленное переполнение
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;
    return 0;
}*/


/*//Утраченнный клад
//Персонализированная приключенческая игра
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;
        
    // получаю информацию
    cout << "Добро пожаловать в утраченный клад!\n\n";
    cout << "Please enter the following for your personalized adventure\n";
    cout << "Enter а number: ";
    cin >> adventurers;
    cout << "Enter а number. smaller than the first: ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "Enter your last name: ";
    cin >> leader;
    // сюжет
    cout << "\nA brave group of" << adventurers << " set out on а quest ";
    cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led Ьу that legendary rogue. " << leader << ". \n";
    cout << "\nAl ong the way. а band of maraudi ng ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ". and the ogres were defeated. but at а cost. ";
    cout << "Of the adventurers. " << killed << " were vanqui shed. ";
    cout << "leaving just " << survivors << " in the group.\n";
    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest. ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors);
    cout << " pieces to keep things fair of course.\n";
    return 0;
}*/

/*Упражнения1.Составьте список из шести допустимых имен переменных, причем три имени
должны быть качественными, а три - некачественными.Объясните, почему
каждое из имен относится к той или иной категории.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    
    int score =  0;
    double distance = 1200.76;
    char playAgain = 'y';
    bool shieldsUp = true;
    short lives = 3, aliensKilled = 10;
    double engineTemp = 6572.89;

    cout << "Счет: " << score << endl;
    cout << "Расстояние: " << distance << endl;
    cout << "Играть снова: " << playAgain << endl;
    cout << "Щиты подняты: " << shieldsUp << endl; 
    cout << "Жизни: " << lives << endl;
    cout << "Убито инопланетян: " << aliensKilled << endl;
    cout << "Температура двигателя: " << engineTemp << endl;
}*/

/*Упражнение3.Напишите программу, которая принимает у пользователя три суммы очков за
разные попытки в игре и выводит среднее значение на основе трех.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //Запрашиваем у пользователя количество попыток
    int num_attempts;
    cout << "Введите количество попыток: ";
    cin >> num_attempts;

    //Инициализируем переменную для хранения среднего значения
    int avg_score = 0;

    //Проходимся по всем попыткам
    for (int i = 0; i < num_attempts; i++)
    {
        //Запрашиваем у пользователя очки за текущую попытку
        int score;
        cout << "Введите очки за попытку №" << (i + 1) << ": ";
        cin >> score;

        //Добавляем очки к общему значению
        avg_score += score;
    }
    //Вычисляем среднее значение
    avg_score /= num_attempts;

    //Выводим среднее значение на экран
    cout << "Среднее значение: " << avg_score << endl;
    return 0;
}*/

// Программа Score rater
// Демонстрирует работу с инструкцией if

#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");

    if (true)
    {
        cout << "Это всегда отображается.\n\n";
    }
    if (false)
    {
        cout << "Это никогда не отображается.\n\n";
    }
    
    int score = 1000;
    if (score) 
    {
        cout << "Ваш результат ненулевой, уже хорошо.\n\n";
    }
    if (score >= 250) 
    {
        cout << "Вы набрали 250 или больше. Достойно.\n\n";
    }
    if (score >= 500) 
    {
        cout << "Вы набрали 500 или больше. Отлично.\n\n";
        if (score >= 1000) 
        {
            cout << "Вы набрали 1000 или больше. Впечатляет!\n";
        }
    }
    return 0;
}

// Программа Score Rater 2.0
// Демонстрирует работу с условием else

//#include <iostream>