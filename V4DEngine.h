//
// Created by Federico Bertossi on 10/07/21.
//

#ifndef INC_4DMATHENGINE_V4DENGINE_H
#define INC_4DMATHENGINE_V4DENGINE_H

namespace V4DEngine {
    class V4DMath {
    private:
    public:
        // X and Y dimensions
        float x;
        float y;
        float z;

        // Constructors
        V4DMath();

        V4DMath(float uX, float uY, float uZ);

        // Destructors
        ~V4DMath();

        // Copy Constructor
        V4DMath(const V4DMath &v);

        [[noreturn]] V4DMath &operator=(const V4DMath &v);

        // Operations Methods
        // Sum
        void operator+=(const V4DMath &v);

        V4DMath operator+(const V4DMath &v) const;

        // Subtraction
        void operator-=(const V4DMath &v);

        V4DMath operator-(const V4DMath &v) const;

        // Multiplication
        void operator*=(float s);

        V4DMath operator*(float s) const;

        // Division
        void operator/=(float s);

        V4DMath operator/(float s) const;

        // Print the vector component;
        static void show(const V4DMath &v);

    };
}


#endif //INC_4DMATHENGINE_V4DENGINE_H


/*
 * TODO: add the DOT product, the MATRIX product, the angle, the CROSS product,
 * the conjugate, the normalize and the magnitude functions
 * */