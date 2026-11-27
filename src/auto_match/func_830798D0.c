#include "xdk/vectorintrinsics.h"

typedef struct Tracker_830798D0 {
    char pad0[0x60];
    __vector4 left;          /* 0x60 */
    __vector4 right;         /* 0x70 */
    float timer;             /* 0x80 */
    unsigned char leftFast;  /* 0x84 */
    unsigned char rightFast; /* 0x85 */
    char pad86[0x2a];
    void *skeleton; /* 0xB0 */
} Tracker_830798D0;

extern __vector4 *fn_8306D698(__vector4 *out, void *skeleton, int joint);
extern float fn_8306EEF8(__vector4 a, __vector4 b);

void fn_830798D0(Tracker_830798D0 *self, float dt)
{
    __vector4 left;
    __vector4 right;
    float leftDistance;
    float rightDistance;
    float elapsed;
    float scale;

    self->timer = self->timer - dt;
    if (self->timer <= 0.0f) {
        fn_8306D698(&left, self->skeleton, 6);
        fn_8306D698(&right, self->skeleton, 10);
        leftDistance = fn_8306EEF8(left, self->left);
        rightDistance = fn_8306EEF8(right, self->right);
        elapsed = 0.1f - self->timer;
        self->timer = 0.1f;
        self->left = left;
        self->right = right;
        if (elapsed > 0.00001f) {
            scale = 1.0f / elapsed;
            self->leftFast = scale * leftDistance > 1.3f;
            self->rightFast = scale * rightDistance > 1.3f;
        }
    }
}
