#include <math.h>

typedef struct Rotation_82CEC3F0 {
    float cosine; /* 0x0 */
    float sine;   /* 0x4 */
    int p;        /* 0x8 */
    int q;        /* 0xc */
} Rotation_82CEC3F0;

/* One Jacobi rotation: the cosine and sine that zero the symmetric matrix's element (p, q). */
void fn_82CEC3F0(const float *matrix, int p, int q, Rotation_82CEC3F0 *rotation)
{
    rotation->p = p;
    rotation->q = q;
    if (matrix[q * 4 + p] != 0.0f) {
        float tau = (matrix[q * 4 + q] - matrix[p * 4 + p]) / (matrix[q * 4 + p] * 2.0f);
        float root = sqrtf(tau * tau + 1.0f);
        float t;
        float c;

        if (tau >= 0.0f) {
            t = 1.0f / (root + tau);
        } else {
            t = 1.0f / (tau - root);
        }
        c = 1.0f / sqrtf(t * t + 1.0f);
        rotation->cosine = c;
        rotation->sine = c * t;
        return;
    }
    rotation->sine = 0.0f;
    rotation->cosine = 1.0f;
}
