#ifndef BASE_H
#define BASE_H
#include <iostream>
#include <map>

class Unit;

enum Warrior_ID { Infantryman_ID=0, Archer_ID=1, Horseman_ID=2};
// Иерархия классов игровых персонажей



class Base
{

protected:
    int HP;
    int unitMax;
    int unit_now;
    int num_id = 1;

public:
    Base()
    {
        HP = 300;
        unitMax = 10;
        unit_now = 0;
    }

    void plus_unit();
    void delete_unit(int id);
    void minus_unit();

    int get_unit_now();

    Unit* get_Unit(int id);

    int createCrusaderUnit( Warrior_ID id, int new_name, class Field *new_field, Base* new_base);

    int createArabUnit( Warrior_ID id, int new_name, class Field *new_field, Base* new_base);
};

#endif // BASE_H
