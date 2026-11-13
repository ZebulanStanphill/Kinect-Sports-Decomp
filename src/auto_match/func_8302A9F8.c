typedef struct Sub_8302A9F8 { int a, b, c; } Sub_8302A9F8;
typedef struct Obj_8302A9F8 {
    void *vt;          /* 0x00 */
    int f04[4];
    int f14;           /* 0x14 */
    int f18[2];
    float f20;         /* 0x20 */
    int f24;
    Sub_8302A9F8 s;    /* 0x28 */
    int f34;           /* 0x34 */
    unsigned char f38;
    unsigned char f39; /* 0x39 */
} Obj_8302A9F8;

extern char lbl_8217D040[];
static __forceinline void Sub_Init(Sub_8302A9F8 *s) { s->a = 0; s->b = 0; s->c = 0; }

void fn_8302A9F8(Obj_8302A9F8 *o)
{
    o->vt = lbl_8217D040; Sub_Init(&o->s); o->f39 = 0; o->f20 = 0.0f; o->f14 = 0; o->f34 = 0; o->f38 &= 0x3f;
}
