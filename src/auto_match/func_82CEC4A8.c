#include <math.h>

typedef struct Vector4_82CEC4A8 {
    float v[4];
} Vector4_82CEC4A8;

typedef struct Matrix3_82CEC4A8 {
    Vector4_82CEC4A8 col[3];
} Matrix3_82CEC4A8;

float fn_82CEC4A8(const Matrix3_82CEC4A8 *m)
{
    float sum = 0.0f;
    int i, j;

    i = 0;
    do {
        for (j = 0; j < 3; j++)
            sum += m->col[j].v[i] * m->col[j].v[i];
        i++;
    } while (i < 3);
    return sqrtf(sum);
}
