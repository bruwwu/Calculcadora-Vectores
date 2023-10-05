#pragma once
#include <iostream>

class Vector3
{
public:
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	Vector3 Sum(const Vector3& v);
	Vector3 Res(const Vector3& v);
	Vector3 Mul(const Vector3& v);
	Vector3 Div(const Vector3& v);
	double ProdEsc(const Vector3& v);
	Vector3 ProdVect(const Vector3& v);
	double Magnitud() const;
	Vector3 Normalizar() const;
	void Mostrar() const;

private:
	double x_;
	double y_;
	double z_;
};

// Definiciones de funciones
Vector3 Vector3::Sum(const Vector3& v)
{
	return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
}

Vector3 Vector3::Res(const Vector3& v)
{
	return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
}
	Vector3 Vector3::Mul(const Vector3& v)
	{
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}

	Vector3 Vector3::Div(const Vector3& v)
	{
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}

	double Vector3::ProdEsc(const Vector3& v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}

	Vector3 Vector3::ProdVect(const Vector3& v)
	{
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}

	void Vector3::Mostrar() const
	{
		std::cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ")" << std::endl;
	}
