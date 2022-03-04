#include <iostream>

using namespace std;

const int LNAME = 25;

class STUDENT {
private:
	char name[LNAME];
	int age;
	float grade;
public:
	char* GetName() {
		return name;
	}
	int GetAge() const {
		return age;
	}
	float GetGrade() const {
		return grade;
	}
	void SetName(char* valueName) {
		char* pointer = name;
		while (*valueName) {
			*pointer = *valueName;
			valueName++;
			pointer++;
		}
		*pointer = '\0';
	}
	void SetAge(int age) {
		this->age = age;
	}

	void SetGrade(float grade) {
		this->grade = grade;
	}

	void Set(char* name, int age, float grade) {
		SetName(name);
		SetAge(age);
		SetGrade(grade);
	}
	void Show() {
		cout << "Имя студента - " << name << endl;
		cout << "Возраст студента - " << age << endl;
		cout << "Рейтинг студента - " << grade << endl;
	};
};
int main()
{
	setlocale(LC_ALL, "Russian");
	STUDENT FirstStudent;
	char name[25];
	int age;
	float grade;
	cout << "Введите имя студента: ";
	cin >> name;
	cout << endl << "Введите возраст студента: ";
	cin >> age;
	cout << endl << "Введите рейтинг студента: ";
	cin >> grade;
	FirstStudent.SetName(name);
	FirstStudent.SetAge(age);
	FirstStudent.SetGrade(grade);
	cout << " " << endl << "Вывод через геттеры:" << endl;
	cout << "Имя студента: " << FirstStudent.GetName() << endl;
	cout << "Возраст студента: " << FirstStudent.GetAge() << endl;
	cout << "Рейтинг студента: " << FirstStudent.GetGrade() << endl;
	cout << " " << endl << "Работа метода Show:" << endl;
	FirstStudent.Set(name, age, grade);
	FirstStudent.Show();

}