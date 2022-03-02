#include <iostream>
#include <string>

using namespace std;
const int maxlen = 100;
struct STUDENTS
{
    int elem[maxlen];
    int last;
    string name[maxlen];
    int record_book[maxlen];
    int age[maxlen];
};
struct STUDENTS_ACADEM
{
    int elem[maxlen];
    int last;
    string name[maxlen];
    double academ_start[maxlen];
    double academ_end[maxlen];
};
bool Insert(int pos, string name, int age, int record_book, STUDENTS* L);



int main()
{
    STUDENTS students_list;
    students_list.last = -1;
    int pos, age, record_book;
    string name;
    setlocale(LC_ALL, "RUS");
    cout << "Добро пожаловать в Базу Данных Студентов!\n"
        << "Доступные операции:\n"
        << "1) Добавление в список\n"
        << "2) Удаление из списка\n"
        << "3) Определение длины списка\n"
        << "4) Поиск элемента по значению\n"
        << "5) Редактирование элемента списка\n"
        << "6) Вывод списка на экран\n"
        << "7) Отправить студента в академический отпуск\n\n"
        << "Введите номер операции: ";
    int operation_number;
    cin >> operation_number;
    
    switch(operation_number)
    {
    case 1:
        cout << "Введите номер записи в базе данных: "; cin >> pos;
        cout << "Введите имя студента: "; getline(cin >> ws, name);
        cout << "Введите возраст студента: "; cin >> age;
        cout << "Введите номер студенческой книжки: "; cin >> record_book;

        if(! Insert(pos, name, age, record_book, &students_list))
        break;
    }


    
}
bool Insert(int pos, string name, int age, int record_book, STUDENTS *L)
{
    if (pos > L->last + 2 || pos < 1)
        return false;
    else if (pos < L->last+2)
    {
        for (int i = L->last; i >= pos - 1; i--)
            L->elem[i + 1] = L->elem[i];
    }
    L->last++;
    L->elem[pos - 1] = pos;
    L->name[pos - 1] = name;
    L->age[pos - 1] = age;
    L->record_book[pos - 1] = record_book;
    return true;
}

bool Delete (int pos, STUDENTS *L)
{
    if (pos > L->last + 1 || pos < 1)
        return false;
    else if (pos < L->last+1)
    {
        for (int i = pos - 1; i < L->last; i++)
            L->elem[i] = L->elem[i + 1];
    }
    L->last--;
    return true;
}



void Find(int pos, STUDENTS L)
{
    cout << L.elem[pos] << L.name[pos] << L.age[pos] << L.record_book[pos];
}

void Change(int pos, STUDENTS L)
{
    cin >> L.name[pos] >> L.age[pos] >> L.record_book[pos];
}

void Upload(int pos, STUDENTS L)
{
	for (int i = 0; i<L.last; i++)
	{
        cout << L.elem[pos] << L.name[pos] << L.age[pos] << L.record_book[pos];
	}
}
