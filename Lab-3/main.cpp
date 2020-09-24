#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <cstdlib>

/* Нужно создать структуру студента, чтобы записывать каждого студента в вузе в базу данных*/
class student{
    public:
        void init(std::string name_st, std::string surname_st, int id_st, int number_of_phone_st){
            name = name_st;
            surname = surname_st;
            id = id_st;
            number_of_phone = number_of_phone_st;
        }
        void read(){
            std::cout << "Введите Имя: ";
            std::cin >> name;
            std::cout << "Введите Фамилию: ";
            std::cin >> surname;
            std::cout << "Введите ID: ";
            std::cin >> id;
            std::cout << "Введите Номер телефона: ";
            std::cin >> number_of_phone;
        }
        void display(){
            std::cout << name << " " << surname << " " << id << " " << number_of_phone << std::endl;
        }
        void add(class student st2){
            std::cout << "(" << id << " + " << st2.id << ")" << std::endl;
        }
        void NameSurnamePrint(){
            std::cout << name << " " << surname << std::endl;
        }

        std::string NamePrint(){
            return name;
        }
        std::string SurnamePrint(){
            return surname;
        }
        int IdPrint(){
            return id;
        }
        int PhonePrint(){
            return number_of_phone;
        }

    private:
        std::string name;
        std::string surname;
        int id;
        int  number_of_phone;
};

int main(){
    setlocale(LC_ALL, "RUS");
    student stud_1;
    stud_1.init("Aleks", "Ban", 242678, 8913339);

    student stud_2;
    stud_2.read();

    stud_1.display();
    stud_2.display();

    stud_1.add(stud_2);

    stud_1.NameSurnamePrint();


    student *p = new student();
    p->init("Aleks2", "Ban2", 242678, 8913339);
    p->display();

    int COUNT_OBJ = 3;
    student mass1[3];
    student *mass2 = (student*)calloc(COUNT_OBJ, sizeof(student));
    memset(mass2, 0, COUNT_OBJ * sizeof(student));

    for (int i = 0; i < COUNT_OBJ; ++i){
        mass1[i].init("Aleks", "Ban", i, i+1);
        mass2[i].init("Aleks2", "Ban2", i, i+1);
    }

    for (int i = 0; i < COUNT_OBJ; i++){
        mass1[i].display();
        mass2[i].display();
    }

    return 0;
}
