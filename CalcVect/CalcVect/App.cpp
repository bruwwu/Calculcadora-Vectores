#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

using namespace std;

int main() {
    // Vectores 2D
    Vector2 v1(1.0f, 2.0f);
    Vector2 v2(3.0f, 4.0f);

    Vector2 sum2D = v1 + v2;
    Vector2 difference2D = v1 - v2;
    Vector2 scaled2D = v1 * 2.0f;
    Vector2 normalizedV12D = v1.normalized();
    float dotProduct2D = v1.dot(v2);
    float magV12D = v1.magnitude();

    // Vectores 3D
    Vector3 v3(1.0f, 2.0f, 3.0f);
    Vector3 v4(4.0f, 5.0f, 6.0f);

    Vector3 sum3D = v3 + v4;
    Vector3 difference3D = v3 - v4;
    Vector3 scaled3D = v3 * 2.0f;
    Vector3 normalizedV13D = v3.normalized();
    float dotProduct3D = v3.dot(v4);
    Vector3 crossProduct3D = v3.cross(v4);
    float magV13D = v3.magnitude();

    // Vectores 4D
    Vector4 v5(1.0f, 2.0f, 3.0f, 4.0f);
    Vector4 v6(5.0f, 6.0f, 7.0f, 8.0f);

    Vector4 sum4D = v5 + v6;
    Vector4 difference4D = v5 - v6;
    Vector4 scaled4D = v5 * 2.0f;
    Vector4 normalizedV14D = v5.normalized();
    float dotProduct4D = v5.dot(v6);
    float magV14D = v5.magnitude();

    // Imprimir resultados
    cout << "Vector2 Operations:" << endl;
    cout << "Sum: (" << sum2D.x << ", " << sum2D.y << ")" << endl;
    cout << "Difference: (" << difference2D.x << ", " << difference2D.y << ")" << endl;
    cout << "Scaled: (" << scaled2D.x << ", " << scaled2D.y << ")" << endl;
    cout << "Normalized: (" << normalizedV12D.x << ", " << normalizedV12D.y << ")" << endl;
    cout << "Dot Product: " << dotProduct2D << endl;
    cout << "Magnitude: " << magV12D << endl;

    cout << "\nVector3 Operations:" << endl;
    cout << "Sum: (" << sum3D.x << ", " << sum3D.y << ", " << sum3D.z << ")" << endl;
    cout << "Difference: (" << difference3D.x << ", " << difference3D.y << ", " << difference3D.z << ")" << endl;
    cout << "Scaled: (" << scaled3D.x << ", " << scaled3D.y << ", " << scaled3D.z << ")" << endl;
    cout << "Normalized: (" << normalizedV13D.x << ", " << normalizedV13D.y << ", " << normalizedV13D.z << ")" << endl;
    cout << "Dot Product: " << dotProduct3D << endl;
    cout << "Cross Product: (" << crossProduct3D.x << ", " << crossProduct3D.y << ", " << crossProduct3D.z << ")" << endl;
    cout << "Magnitude: " << magV13D << endl;

    cout << "\nVector4 Operations:" << endl;
    cout << "Sum: (" << sum4D.x << ", " << sum4D.y << ", " << sum4D.z << ", " << sum4D.w << ")" << endl;
    cout << "Difference: (" << difference4D.x << ", " << difference4D.y << ", " << difference4D.z << ", " << difference4D.w << ")" << endl;
    cout << "Scaled: (" << scaled4D.x << ", " << scaled4D.y << ", " << scaled4D.z << ", " << scaled4D.w << ")" << endl;
    cout << "Normalized: (" << normalizedV14D.x << ", " << normalizedV14D.y << ", " << normalizedV14D.z << ", " << normalizedV14D.w << ")" << endl;
    cout << "Dot Product: " << dotProduct4D << endl;
    cout << "Magnitude: " << magV14D << endl;

    return 0;
}
