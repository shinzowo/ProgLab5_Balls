#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"
#include "Color.h"

class Ball {
public:
    Ball(const Point& center, const Velocity& velocity, const Color& color, double radius, bool isCollidable);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    void setColor(const Color& color);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool isCollidable() const;
private:
    Point center;
    Velocity velocity;
    Color color;
    double radius;
    bool isCollidable_;
};
