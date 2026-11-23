typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vmrghw(__vector4 a, __vector4 b);
__vector4 __vmrglw(__vector4 a, __vector4 b);

typedef struct Matrix_82265DE0 {
    __vector4 r[4];
} Matrix_82265DE0;

typedef struct Sub_82265DE0 {
    char pad[0x1bc];
    int active; /* 0x1bc */
} Sub_82265DE0;

typedef struct Thing_82265DE0 {
    char pad[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0x860];
    Sub_82265DE0 *sub; /* 0x8c0 */
} Thing_82265DE0;

typedef struct Self_82265DE0 {
    char pad0[0xa0];
    unsigned int flags; /* 0xa0 */
    char padA4[0x38];
    Thing_82265DE0 *thing; /* 0xdc */
    char padE0[0x42c];
    int state; /* 0x50c */
    char pad510[8];
    int enabled; /* 0x518 */
    char pad51C[0x10];
    int mode; /* 0x52c */
} Self_82265DE0;

typedef struct Manager_82265DE0 {
    char pad[0xf0];
    int fadeIn; /* 0xf0 */
    int fade;   /* 0xf4 */
} Manager_82265DE0;

extern Matrix_82265DE0 lbl_83296890[];
extern Manager_82265DE0 *lbl_8327F844;

extern void fn_82266628(Self_82265DE0 *self, int mode, int next);
extern void fn_82530258(Matrix_82265DE0 m, __vector4 position);

static __forceinline Matrix_82265DE0 Multiply(const Matrix_82265DE0 *a, const Matrix_82265DE0 *b)
{
    Matrix_82265DE0 m;
    __vector4 t0, t1, t2, t3, c0, c1, c2, c3;
    __vector4 x, y, z, w;

    t0 = __vmrghw(b->r[0], b->r[2]);
    t1 = __vmrghw(b->r[1], b->r[3]);
    t2 = __vmrglw(b->r[0], b->r[2]);
    t3 = __vmrglw(b->r[1], b->r[3]);
    c0 = __vmrghw(t0, t1);
    c1 = __vmrglw(t0, t1);
    c2 = __vmrghw(t2, t3);
    c3 = __vmrglw(t2, t3);
    x = __vmsum4fp(a->r[0], c0);
    y = __vmsum4fp(a->r[0], c1);
    z = __vmsum4fp(a->r[0], c2);
    w = __vmsum4fp(a->r[0], c3);
    m.r[0] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[1], c0);
    y = __vmsum4fp(a->r[1], c1);
    z = __vmsum4fp(a->r[1], c2);
    w = __vmsum4fp(a->r[1], c3);
    m.r[1] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[2], c0);
    y = __vmsum4fp(a->r[2], c1);
    z = __vmsum4fp(a->r[2], c2);
    w = __vmsum4fp(a->r[2], c3);
    m.r[2] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[3], c0);
    y = __vmsum4fp(a->r[3], c1);
    z = __vmsum4fp(a->r[3], c2);
    w = __vmsum4fp(a->r[3], c3);
    m.r[3] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    return m;
}

void fn_82265DE0(Self_82265DE0 *self, unsigned char on)
{
    int enabled;
    int changed;
    Manager_82265DE0 *manager;
    Matrix_82265DE0 m;

    enabled = on != 0;
    changed = self->enabled != enabled;
    self->enabled = enabled;
    if (self->state != 3) {
        return;
    }
    if (enabled) {
        if ((self->flags & 4) && self->mode != 9) {
            fn_82266628(self, 9, 8);
        }
        manager = lbl_8327F844;
        self->thing->sub->active = 1;
        if (changed && manager != 0) {
            manager->fadeIn = 0;
            manager->fade = 0;
        }
        m = Multiply(&lbl_83296890[0], &lbl_83296890[1]);
        if (manager != 0) {
            fn_82530258(m, self->thing->position);
        }
    } else {
        if ((self->flags & 4) && self->mode != 10) {
            fn_82266628(self, 10, 9);
        }
        self->thing->sub->active = 0;
    }
}
