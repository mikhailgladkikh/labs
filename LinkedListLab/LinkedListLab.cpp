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
    STUDENTS students_list
    students_list.last = -1;
    int pos, age, record_book;
    string name;
    setlocale(LC_ALL, "RUS");
    cout << "����� ���������� � ���� ������ ���������!\n"
        << "��������� ��������:\n"
        << "1) ���������� � ������\n"
        << "2) �������� �� ������\n"
        << "3) ����������� ����� ������\n"
        << "4) ����� �������� �� ��������\n"
        << "5) �������������� �������� ������\n"
        << "6) ����� ������ �� �����\n"
        << "7) ��������� �������� � ������������� ������\n\n"
        << "������� ����� ��������: ";
    int operation_number;
    cin >> operation_number;
    
    switch(operation_number)
    {
    case 1:
        cout << "������� ����� ������ � ���� ������: "; cin >> pos;
        cout << "������� ��� ��������: "; getline(cin >> ws, name);
        cout << "������� ������� ��������: "; cin >> age;
        cout << "������� ����� ������������ ������: "; cin >> record_book;

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

/**
@brief Func to find out the length of list
@param last The amount of elements in the list
@param L - structure from STUDENTS
 */
void Length(int last, STUDENTS L)
{
    cout << "Length of the list is: " << last;
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
