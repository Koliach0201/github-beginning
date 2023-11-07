/*//��������� Game Stats
//������������� ���������� � ������������� ����������
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

/*//��������� Game Stats 2.0
//������������� �������������� �������� � �����������
#include <iostream>

using namespace std;

int main()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    
    // ��������� �������� ����������
    score = score + 100;
    cout << "score: " << score << endl;
    
    // ��������������� �������� ������������
    score += 100;
    cout << "score: " << score << endl;
    
    //��������� ���������� 
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

    // ������������� ������������
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;
    return 0;
}*/


//����������� ����
//������������������� ��������������� ����
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
        
    // ������� ����������
    cout << "����� ���������� � ���������� ����!\n\n";
    cout << "����������, ��������� ��������� ��� ������ �������������������� �����������\n";
    cout << "������� ���������� ���������: ";
    cin >> adventurers;
    cout << "������� ���������� ������ (������ �������): ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "������� ��� ������������: ";
    cin >> leader;
    // �����
    cout << "\n�������� ������ �� " << adventurers << " ����������� �� ������ ";
    cout << "-- � ������� ����������� ��������� ������� ������. ";
    cout << "������ ���������� ��� ����� ����������� �������. " << leader << ". \n";
    cout << "\n�� ����, ����� ��������������� ����� �������� �� ������ ������. ";
    cout << "��� ������ ��������� ��� ������������� " << leader;
    cout << ". � ���� ���� ���������, �� ����� ����� ��������� ���������. ";
    cout << "�� ��������� " << killed << " ���� ���������. ";
    cout << "�������� ������ " << survivors << " � ������.\n";
    cout << "\n������ ��������� ���� ������ �������� ������ �������. ";
    cout << "�� ����� �������� �������. ";
    cout << "��� ���������� �� ���������� ���������. ";
    cout << "����, �������� ����������� �������� " << GOLD_PIECES << " ������� ������.";
    cout << leader << " ������� ������� " << (GOLD_PIECES % survivors);
    cout << " ����� ��� ���� ������.\n";
    return 0;
}

/*����������1.��������� ������ �� ����� ���������� ���� ����������, ������ ��� �����
������ ���� �������������, � ��� - ���������������.���������, ������
������ �� ���� ��������� � ��� ��� ���� ���������.*/

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

    cout << "����: " << score << endl;
    cout << "����������: " << distance << endl;
    cout << "������ �����: " << playAgain << endl;
    cout << "���� �������: " << shieldsUp << endl; 
    cout << "�����: " << lives << endl;
    cout << "����� �����������: " << aliensKilled << endl;
    cout << "����������� ���������: " << engineTemp << endl;
}*/

/*����������3.�������� ���������, ������� ��������� � ������������ ��� ����� ����� ��
������ ������� � ���� � ������� ������� �������� �� ������ ����.*/

/*#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    //����������� � ������������ ���������� �������
    int num_attempts;
    cout << "������� ���������� �������: ";
    cin >> num_attempts;

    //�������������� ���������� ��� �������� �������� ��������
    int avg_score = 0;

    //���������� �� ���� ��������
    for (int i = 0; i < num_attempts; i++)
    {
        //����������� � ������������ ���� �� ������� �������
        int score;
        cout << "������� ���� �� ������� �" << (i + 1) << ": ";
        cin >> score;

        //��������� ���� � ������ ��������
        avg_score += score;
    }
    //��������� ������� ��������
    avg_score /= num_attempts;

    //������� ������� �������� �� �����
    cout << "������� ��������: " << avg_score << endl;
    return 0;
}*/

// ��������� Score rater
// ������������� ������ � ����������� if

/*#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");

    if (true)
    {
        cout << "��� ������ ������������.\n\n";
    }
    if (false)
    {
        cout << "��� ������� �� ������������.\n\n";
    }
    
    int score = 1000;
    if (score) 
    {
        cout << "��� ��������� ���������, ��� ������.\n\n";
    }
    if (score >= 250) 
    {
        cout << "�� ������� 250 ��� ������. ��������.\n\n";
    }
    if (score >= 500) 
    {
        cout << "�� ������� 500 ��� ������. �������.\n\n";
        if (score >= 1000) 
        {
            cout << "�� ������� 1000 ��� ������. ����������!\n";
        }
    }
    return 0;
}*/

/*// ��������� Score Rater 2.0
// ������������� ������ � �������� else

#include <iostream>

using namespace std;

int main() 
{

}*/