#ifndef OBJECTMON_H
#define OBJECTMON_H

class ObjectMon
{
public:
    ObjectMon();

private:
    int x;
    int y;
};

class Car : public ObjectMon
{
public:
    Car();
};

class Truck : public ObjectMon
{
public:
    Truck();
};

class Person : public ObjectMon
{
public:
    Person();
};

#endif // OBJECTMON_H
