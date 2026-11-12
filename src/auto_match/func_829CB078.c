typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Players_829CB078 {
    char pad0[0x10];
    __vector4 position[6];      /* 0x10 */
    int state[6];               /* 0x70 */
    unsigned int id[6];                 /* 0x88 */
    char padA0[0x24];
    unsigned int tracked[2];            /* 0xc4 */
} Players_829CB078;

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, rsq, zero, mask, result;
    d = __vmsum3fp(v, v);
    rsq = __vrsqrtefp(d);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_829CB078(Players_829CB078 *self, int *out)
{
    int best[2];
    float bestDist[2];
    unsigned int i;
    unsigned int j;

    best[0] = -1;
    best[1] = -1;
    bestDist[0] = 3.402823466e+38F;
    bestDist[1] = 3.402823466e+38F;
    for (i = 0; i < 6; i++) {
        if (self->state[i] == 1) {
            __vector4 v;
            __vector4 len;
            float d;
            int k;

            k = i;
            v = self->position[i];
            v.vector4_f32[1] = 0.0f;
            len = Length3(v);
            d = len.vector4_f32[0];
            for (j = 0; j < 2; j++) {
                if (self->id[i] == self->tracked[j]) {
                    d -= 0.3f;
                    break;
                }
            }
            if (d < bestDist[0]) {
                float t = bestDist[0];
                int ti = best[0];
                bestDist[0] = d;
                best[0] = i;
                d = t;
                k = ti;
            }
            if (d < bestDist[1]) {
                best[1] = k;
                bestDist[1] = d;
            }
        }
    }
    for (j = 0; j < 2; j++) {
        if (best[j] != -1)
            out[j] = self->id[best[j]];
        else
            out[j] = 0;
    }
}
