typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Track_82606860 {
    char pad0[8];
    int count;
    int data;
} Track_82606860;

typedef struct Self_82606860 {
    char pad0[0x8c4];
    Track_82606860 *track;
} Self_82606860;

extern int fn_82577EE0(Track_82606860 *p, __vector4 *pos, float *dist, int *d);
extern __vector4 *fn_825CAC58(__vector4 *out, int data, __vector4 *pos, float dist);
extern const float lbl_821954B0[];
extern float lbl_831BF6F0[];
extern __vector4 lbl_8329EA00;

static __forceinline __vector4 Replicate(const float *p)
{
    return __vspltw(__lvlx(p, 0), 0);
}

void fn_82606860(Self_82606860 *self, int unused, __vector4 *pos, float *dist, float *out1,
                 __vector4 *normal, __vector4 *velocity)
{
    __vector4 n;
    if (dist == 0)
        return;
    n = __VMXGetReg(72);
    if (velocity != 0) {
        if (fn_82577EE0(self->track, pos, dist, 0) != 0) {
            Track_82606860 *t;
            n = __VMXGetReg(69);
            t = self->track;
            {
                float d = *dist;
                __vector4 v;
                if (t->count > 0) {
                    __vector4 tmp;
                    v = *fn_825CAC58(&tmp, t->data, pos, d);
                } else {
                    v = __VMXGetReg(77);
                }
                *velocity = v;
            }
            goto tail;
        }
        *velocity = __VMXGetReg(77);
    } else if (self->track != 0 && fn_82577EE0(self->track, pos, dist, 0) != 0) {
        goto tail;
    }
    *dist = lbl_821954B0[12];
tail:
    if (out1 != 0)
        *out1 = lbl_831BF6F0[14];
    if (normal != 0) {
        __vector4 d = __vmsum3fp(*normal, *pos);
        float f = -d.vector4_f32[0];
        *normal = __vsel(n, Replicate(&f), lbl_8329EA00);
    }
}
