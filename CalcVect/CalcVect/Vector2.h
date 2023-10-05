#pragma once
#include <iostream>

class Vector2 {
public:
    Vector2(double x, double y) : x_(x), y_(y) {}
    ~Vector2() = default;

    Vector2 Sum(const Vector2& v) const;
    Vector2 Res(const Vector2& v) const;
    Vector2 Mul(const Vector2& v) const;
    Vector2 Div(const Vector2& v) const;
    double ProdEsc(const Vector2& v) const;
    Vector2 ProdVect(const Vector2& v) const;
    double Magnitud() const;
    Vector2 Normalizar() const;

    void Mostrar() const;

private:
    double x_;
    double y_;
};

Vector2 Vector2::Sum(const Vector2& v) const {
    return Vector2(x_ + v.x_, y_ + v.y_);
}

Vector2 Vector2::Res(const Vector2& v) const {
    return Vector2(x_ - v.x_, y_ - v.y_);
}

Vector2 Vector2::Mul(const Vector2& v) const {
    return Vector2(x_ * v.x_, y_ * v.y_);
}

Vector2 Vector2::Div(const Vector2& v) const {
    return Vector2(x_ / v.x_, y_ / v.y_);
}

double Vector2::ProdEsc(const Vector2& v) const {
    return (x_ * v.x_) + (y_ * v.y_);
}

Vector2 Vector2::ProdVect(const Vector2& v) const {
    return Vector2((x_ * v.y_) - (y_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
}

double Vector2::Magnitud() const {
    return sqrt(x_ * x_ + y_ * y_);
}

Vector2 Vector2::Normalizar() const {
    double mag = Magnitud();
    return Vector2(x_ / mag, y_ / mag);
}

void Vector2::Mostrar() const {
    std::cout << "(" << x_ << ", " << y_ << ")" << std::endl;
}
