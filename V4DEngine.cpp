//
// Created by Federico Bertossi on 10/07/21.
//

#include <iostream>
#include "V4DEngine.h"

namespace V4DEngine {


    V4DEngine::V4DMath::V4DMath() : x(0.0), y(0.0), z(0.0) {}

    V4DEngine::V4DMath::V4DMath(float uX, float uY, float uZ) : x(uX), y(uY), z(uZ) {}

    V4DEngine::V4DMath::~V4DMath() = default;

    V4DEngine::V4DMath::V4DMath(const V4DEngine::V4DMath &v) : x(v.x), y(v.y), z(v.z) {}

    [[noreturn]] V4DMath &V4DMath::operator=(const V4DMath &v) {
        x = v.x;
        y = v.y;
        z = v.z;

        return *this;
    }

    void V4DEngine::V4DMath::operator+=(const V4DEngine::V4DMath &v) {
        x += v.x;
        y += v.y;
        z += v.z;
    }

    V4DMath V4DMath::operator+(const V4DMath &v) const {
        return V4DMath(x + v.x, y + v.y, z + v.z);
    }

    void V4DMath::operator-=(const V4DMath &v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }

    V4DMath V4DMath::operator-(const V4DMath &v) const {
        return V4DMath(x - v.x, y - v.y, z - v.z);
    }

    void V4DMath::operator*=(const float s) {
        x *= s;
        y *= s;
        z *= s;
    }

    V4DMath V4DMath::operator*(float s) const {
        return V4DMath(s * x, s * y, s * z);
    }

    void V4DMath::operator/=(float s) {
        x = x / s;
        y = y / s;
        z = z / s;
    }

    V4DMath V4DMath::operator/(float s) const {
        return V4DMath(x / s, y / s, z / s);
    }


    void V4DMath::show(const V4DMath &v) {
        std::cout << "(" << v.x << "," << v.y << "," << v.z << ")" << std::endl;
    }

}