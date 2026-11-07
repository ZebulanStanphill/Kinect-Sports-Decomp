typedef struct Sub_8249CE00 {
    char pad0[0xa8];
    unsigned int flags;
} Sub_8249CE00;

typedef struct B_8249CE00 {
    char pad0[0x30];
    Sub_8249CE00 sub;
    char pad1[0x358 - 0x30 - sizeof(Sub_8249CE00)];
    struct C_8249CE00 *c;
} B_8249CE00;

typedef struct Handle_8249CE00 {
    int v;
} Handle_8249CE00;

typedef struct State_8249CE00 {
    unsigned int v;
} State_8249CE00;

typedef struct C_8249CE00 {
    char pad0[0x80];
    Handle_8249CE00 h;      /* 0x80 */
    int pad84;              /* 0x84 */
    float f88;              /* 0x88 */
    char pad1[0x94 - 0x8c];
    float f94;              /* 0x94 */
    char pad2[0x118 - 0x98];
    State_8249CE00 st;      /* 0x118 */
} C_8249CE00;

typedef struct T_8249CE00 {
    char pad0[0x844];
    B_8249CE00 *b;
} T_8249CE00;

typedef struct Obj_8249CE00 {
    char pad0[0x70];
    T_8249CE00 *t;
    char pad1[0x9c - 0x74];
    int f9c;
} Obj_8249CE00;

typedef struct Self_8249CE00 {
    int pad0;
    Obj_8249CE00 *obj;
} Self_8249CE00;

extern int fn_82284A40(int a, int b, int c);
extern int fn_82536590(Handle_8249CE00 *h, int a);

static __forceinline int HasValue_8249CE00(Handle_8249CE00 *h)
{
    return h ? h->v != 0 : 0;
}

static __forceinline void Reset_8249CE00(Sub_8249CE00 *s, C_8249CE00 *c)
{
    State_8249CE00 *st = &c->st;
    if (st->v & 0x40) {
        Handle_8249CE00 *h;
        if (s != 0) {
            s->flags &= ~0x80u;
        }
        h = &c->h;
        if (HasValue_8249CE00(h)) {
            fn_82536590(h, 0);
        }
        c->f88 = c->f94;
    }
}

void fn_8249CE00(Self_8249CE00 *self)
{
    Obj_8249CE00 *obj = self->obj;
    T_8249CE00 *t = obj->t;
    if (t != 0) {
        B_8249CE00 *b = t->b;
        C_8249CE00 *c = b->c;
        if (c != 0) {
            if (c->st.v & 0x40) {
                Reset_8249CE00(&b->sub, c);
                fn_82284A40(obj->f9c, 0, 0);
            }
        }
    }
}
