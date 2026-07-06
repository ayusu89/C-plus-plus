 #include <iostream>
#include <string>
using namespace std;

// Base Class
class Animal
{
public:
    string name;
    int age;
    string species;

public:
    Animal(string n, int a, string s)
    {
        name = n;
        age = a;
        species = s;
    }

    void showData()
    {
        cout << "Animal Name : " << name << endl;
        cout << "Age         : " << age << endl;
        cout << "Species     : " << species << endl;
    }
};

// Derived Class
class WildAnimal : public Animal
{
private:
    string region;
    string diet;
    string conservation_status;

public:
    WildAnimal(string n, int a, string s, string r, string d, string c) : Animal(n, a, s)
    {
        region = r;
        diet = d;
        conservation_status = c;
    }

    void showData()
    {
        Animal::showData();
        cout << "Region              : " << region << endl;
        cout << "Diet                : " << diet << endl;
        cout << "Conservation Status : " << conservation_status << endl;
    }
};

// Another Derived Class
class PetAnimal : public Animal
{
private:
    string owner_name;
    string favorite_food;

public:
    PetAnimal(string n, int a, string s, string o, string f): Animal(n, a, s)
    {
        owner_name = o;
        favorite_food = f;
    }

    void showData()
    {
        Animal::showData();
        cout << "Owner Name   : " << owner_name << endl;
        cout << "Favorite Food: " << favorite_food << endl;
    }
};

int main()
{
    WildAnimal w("Tiger", 8, "Mammal",
                 "Asia", "Carnivore", "Endangered");

    PetAnimal p("Dog", 4, "Mammal",
                "Ram", "Chicken");

    cout << "Wild Animal Details\n";
    w.showData();

    cout << "\nPet Animal Details\n";
    p.showData();

    return 0;
}
