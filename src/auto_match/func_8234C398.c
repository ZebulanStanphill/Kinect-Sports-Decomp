typedef struct Str_8234C398 {
    union {
        char buf[16];
        char *ptr;
    } u;
    unsigned int size;
    unsigned int res;
} Str_8234C398;

typedef struct StrBuf_8234C398 {
    Str_8234C398 s;
    unsigned int pad[2];
} StrBuf_8234C398;

typedef struct Owner_8234C398 {
    char pad[0x114];
    int *obj;
} Owner_8234C398;

extern Str_8234C398 *fn_8234D690(Str_8234C398 *s, const char *text);
extern void fn_82230300(Str_8234C398 *s, int a, int b);
extern int fn_82560010(int a, const char *name);

int fn_8234C398(Owner_8234C398 *self, unsigned int hand)
{
    StrBuf_8234C398 right;
    StrBuf_8234C398 left;
    Str_8234C398 *s;
    int *obj;
    const char *name;
    int r;

    switch (hand) {
    case 0:
        s = fn_8234D690(&left.s, "lefthand_");
        obj = self->obj;
        name = s->res >= 0x10 ? s->u.ptr : s->u.buf;
        r = fn_82560010(*obj, name);
        fn_82230300(&left.s, 1, 0);
        return r;
    case 1:
        s = fn_8234D690(&right.s, "righthand_");
        obj = self->obj;
        name = s->res >= 0x10 ? s->u.ptr : s->u.buf;
        r = fn_82560010(*obj, name);
        fn_82230300(&right.s, 1, 0);
        return r;
    }
    return 0;
}
