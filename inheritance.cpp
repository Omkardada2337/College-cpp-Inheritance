#include <iostream>
using namespace std;
class Furniture // Base class
{
private:
    float price;
    char material[30];

public:
    void show_material()
    {
        cout << "\n\nEnter the material of the furniture : ";
        cin.getline(material, 30);
    }
    void set_price()
    {
        cout << "\nEnter the price of the funiture : ";
        cin >> price;
    }
    void show_d()
    {
        cout << "\n\nMaterial of Furniture : " << material << "\nPrice of Furniture : " << price<<" /-Rs";
    }
};

class Table : protected Furniture // Derived class in public mode
{
private:
    int h, sa;

public:
    void set_height()
    {
        show_material();
        set_price();
        cout << "\nEnter the height of Table : ";
        cin >> h;
    }

    void set_sa()
    {
        cout << "\nEnter the surface area of Table : ";
        cin >> sa;
    }
    void show_data()
    {
        show_d();
        cout << "\nHeight of Table : " << h << " meter\nSurface area of Table : " << sa<<"sq.meter\n\n";
    }
};

int main()
{
    Table t;
    t.set_height();
    t.set_sa();
    t.show_data();
}