#include <iostream>
#include "V4DEngine.h"

int main() {
    V4DEngine::V4DMath vector1(2, 3, 4);
    V4DEngine::V4DMath vector2(1, 2, 6);

    // Sum test
    V4DEngine::V4DMath vector3 = vector2 + vector1;

    V4DEngine::V4DMath::show(vector3);

    return 0;
}
