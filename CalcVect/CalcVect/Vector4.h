#pragma once
#include <iostream>

class Vector4
{
public:
    Vector4(double x, double y, double z, double w) : x_(x), y_(y), z_(z), w_(w) {}
    ~Vector4() = default;

    Vector4 Sum(const Vector4& v) const;
    Vector4 Res(const Vector4& v) const;
    Vector4 Mul(const Vector4& v) const;
    Vector4 Div(const Vector4& v) const;
    double ProdEsc(const Vector4& v) const;
    double Magnitud() const;
    Vector4 Normalizar() const;
    void Mostrar() const;

private:
    double w_;
    double x_;
    double y_;
    double z_;
};

Vector4 Vector4::Sum(const Vector4& v) const
{
    return Vector4(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
}

Vector4 Vector4::Res(const Vector4& v) const
{
    return Vector4(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
}

Vector4 Vector4::Mul(const Vector4& v) const
{
    return Vector4(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
}

Vector4 Vector4::Div(const Vector4& v) const
{
    return Vector4(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
}

double Vector4::ProdEsc(const Vector4& v) const
{
    return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_) + (w_ * v.w_);
}

double Vector4::Magnitud() const
{
    return sqrt(x_ * x_ + y_ * y_ + z_ * z_ + w_ * w_);
}

Vector4 Vector4::Normalizar() const
{
    double magnitud = Magnitud();
    return Vector4(x_ / magnitud, y_ / magnitud, z_ / magnitud, w_ / magnitud);
}

void Vector4::Mostrar() const
{
    std::cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ", " << w_ << ")" << std::endl;
}
