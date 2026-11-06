typedef struct String_82459D88 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_82459D88;

typedef struct Obj_82459D88 {
    char pad0[0x10];
    double start;
    double timeout;
    char pad20[0x84 - 0x20];
    int state;
    char pad88[8];
    int count;
    int extra;
    char pad98[0xb0 - 0x98];
    String_82459D88 name;
} Obj_82459D88;

extern void fn_8245A358(Obj_82459D88 *o, const char *name, int *count, int *extra);
extern double fn_82522FF0(void);

static char *Myptr_82459D88(String_82459D88 *s)
{
    return s->res >= 16 ? s->bx.ptr : s->bx.buf;
}

void fn_82459D88(Obj_82459D88 *o)
{
    String_82459D88 *name;

    name = &o->name;
    fn_8245A358(o, Myptr_82459D88(name), &o->count, &o->extra);
    if (o->count <= 0) {
        name->size = 0;
        Myptr_82459D88(name)[0] = 0;
        o->state = 4;
    } else if (fn_82522FF0() - o->start > o->timeout) {
        o->state = 0xe;
    }
}
