#include <math.h>

float fn_829E9C08(float distance, const float *weights)
{
    int index;
    float angle;
    float sine;

    if (distance == 0.0f) {
        return 1.0f;
    }
    index = (int)fabs(distance);
    if (index <= 5 && weights[index] != 0.0f) {
        angle = distance * 3.141592741f;
        sine = (float)sin(angle);
        return weights[index] / angle * sine;
    }
    return 0.0f;
}
