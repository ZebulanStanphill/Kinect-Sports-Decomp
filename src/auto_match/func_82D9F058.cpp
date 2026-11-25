#include "havok/hkVector4.h"

struct Samples_82D9F058 {
    char pad0[0x20];
    hkVector4 *data;     // hkArray<hkVector4>
    int size;
};

extern "C" int fn_82CECDD8(float);

extern "C" void fn_82D9F058(const Samples_82D9F058 *self, float t, hkVector4 &out)
{
    int i;
    int next;
    float frac;

    if (t < 0.0f) {
        i = 0;
    } else {
        i = fn_82CECDD8(t);
    }
    frac = t - (float)i;
    next = i + 1;
    if (next < self->size) {
        out.setInterpolate4(self->data[i], self->data[next], frac);
    } else {
        out = self->data[i];
    }
}
