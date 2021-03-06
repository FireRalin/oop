#ifndef UNIT_H
#define UNIT_H
#include <iostream>
#include <utility>
#include "field.h"
#include "attacker_unit.h"
#include "base.h"

class Base;
class Field;

class Unit: public Attacker_Units{
    protected:
    Field *field;
    Base *base;
    std::string name;
    int hp;
    int attack;
    int armor;
    int move;
    int range;
    int cost;
    int x_position = 0;
    int y_position = 0;
    int debuff_range = 0;
    int debuff_attack = 0;
    int debuff_move = 0;





    public:

    std::string get_name();

    int get_hp();

    int get_attack();

    int get_armor();

    int get_move();

    int get_range();

    int get_cost();

    int get_x();

    int get_y();

    void set_hp(int value);

    void set_x(int value);

    void set_y(int value);

    void set_attack(int value);

    void set_armor(int value);

    void set_move(int value);

    void set_position();

    void set_d_range(int value);

    void set_d_attack(int value);

    void set_d_move(int value);

    void move_unit(int x, int y);

    void show_debuffs();

    void attack_unit(class Unit** defender)override;


    Unit() = default;


    ~Unit()override;

};
#endif // UNIT_H
