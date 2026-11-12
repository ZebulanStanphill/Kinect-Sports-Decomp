typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Segment_823353B8 {
    __vector4 start;        /* 0x00 */
    __vector4 end;          /* 0x10 */
    int active;             /* 0x20 */
    int id;                 /* 0x24 */
    int pad28;
    int visible;            /* 0x2c */
    int pad30[4];
} Segment_823353B8;

typedef struct Target_823353B8 {
    char pad0[0x2b0];
    Segment_823353B8 first;     /* 0x2b0 */
    Segment_823353B8 second;    /* 0x2f0 */
} Target_823353B8;

typedef struct Source_823353B8 {
    char pad0[0x1d0];
    __vector4 a;            /* 0x1d0 */
    char pad1e0[0x20];
    __vector4 b;            /* 0x200 */
} Source_823353B8;

typedef struct Self_823353B8 {
    char pad0[0xa8];
    float base[3];          /* 0xa8 */
    float tip[3];           /* 0xb4 */
    float end[3];           /* 0xc0 */
    char padcc[0xbc];
    int id;                 /* 0x188 */
    char pad18c[0x84];
    int dirty;              /* 0x210 */
    char pad214[0x1c];
    Target_823353B8 *target;    /* 0x230 */
} Self_823353B8;

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

static __forceinline __vector4 LoadPoint(const float *p)
{
    __vector4 l, r, zero, mask;

    l = __lvlx(p, 0);
    r = __lvrx(p, 12);
    r = __vsldoi(r, r, 4);
    l = __vor(l, r);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(l, zero, mask);
}

static __forceinline float GetX(__vector4 v)
{
    return v.vector4_f32[0];
}

static __forceinline float GetZ(__vector4 v)
{
    return v.vector4_f32[2];
}

void fn_823353B8(Self_823353B8 *self, const Source_823353B8 *src)
{
    Segment_823353B8 *s = &self->target->first;
    Segment_823353B8 *t;

    s->start = VectorSet(GetX(src->a), 0.0f, GetZ(src->b), 0.0f);
    s->start = __vaddfp(s->start, LoadPoint(self->base));
    s->end = LoadPoint(self->tip);
    s->id = self->id;
    s->active = 1;
    s->visible = 1;
    t = &self->target->second;
    t->end = LoadPoint(self->end);
    t->start = s->end;
    self->dirty = 0;
}
