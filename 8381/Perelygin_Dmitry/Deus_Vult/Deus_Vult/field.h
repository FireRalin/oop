#ifndef FIELD_H
#define FIELD_H
#include <iostream>
#include "forest.h"
#include "plain.h"
#include "mountain.h"
#include "unit.h"
#include <random>
#include <ctime>
class NeturalObjects;
class Base;
class Unit;
class Landscapes;

class Field{

    private:

    protected:
    int unit_count;
    int max_count;
    int size;
    NeturalObjects*** obj_field;
    Base*** base_field;
    Unit*** field;
    int** landscape_view;
    Landscapes*** landscape;
    public:

    Field(int size, unsigned int maximum_count);


    Field(const class Field &input_field);


    unsigned int get_max_count();

    int get_size();

    void  show_net_obj();

    Unit* get_unit(int x, int y);
    Landscapes* get_landscape(int x, int y);


    void set_unit_count(int value);

    void add_netural_obj(class NeturalObjects* net_obj, int x, int y);
    void add_base(class Base* base, int x, int y);


    void show_base();
    void show_field();
    void show_landscape();
    void delete_unit( int x, int y);


    int add_unit(class Unit *unit,int x, int y,int change_pos = 1);

    ~Field();


};

#endif // FIELD_H
