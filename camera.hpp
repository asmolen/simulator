#ifndef CAMERA_HPP
#define CAMERA_HPP

#include "string"
#include "time.h"
#include "otlv4.h"

class ObjectDB
{
public:
    ObjectDB();

private:
};

class ObjInf
{
public:
    ObjInf(std::string type, int x, int y, time_t time)
        : type_(type), x_(x), y_(y), time_(time) {}

private:
    std::string type_;
    int x_;
    int y_;
    time_t time_;
};

class Camera
{
public:
    Camera();

private:
    //ObjectDB objects;
    int id;
    int accuracy;
    int angle;
    int direction;
};


#endif // CAMERA_HPP
