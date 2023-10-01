#include "Vector4.h"
#include <cmath>

Vector4::Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}

Vector4 Vector4::operator+(const Vector4& other) const {
    return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const {
    return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Vector4 Vector4::operator*(float scalar) const {
    return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
}

Vector4 Vector4::operator/(float scalar) const {
    return Vector4(x / scalar, y / scalar, z / scalar, w / scalar);
}

float Vector4::dot(const Vector4& other) const {
    return x * other.x + y * other.y + z * other.z + w * other.w;
}

float Vector4::magnitude() const {
    return sqrt(x * x + y * y + z * z + w * w);
}

Vector4 Vector4::normalized() const {
    float mag = magnitude();
    return Vector4(x / mag, y / mag, z / mag, w / mag);
}
