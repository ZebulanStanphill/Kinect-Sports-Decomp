typedef struct Ref Ref;
typedef struct {
    int pad;
    unsigned int mask;
    int pad2[2];
    char entries[1];
} Table;
typedef struct { Table *t; } Map;

extern void fn_8267C4C8(Ref *r);
extern void fn_8267C4F0(Ref *r);
extern unsigned int fn_8278BA98(void *tmp, Ref *r);
extern int fn_8278C400(Map *m, Ref **key, unsigned int h);
extern void fn_8278BEE8(void *e, Ref **r);
extern void fn_8278DF08(Map *m, int v, Ref **key, unsigned int h);

void fn_8278E310(Map *m, int v, Ref **key)
{
    char tmp;
    Ref *r;
    unsigned int h;
    int idx;

    r = *key;
    if (r) {
        fn_8267C4C8(r);
    }
    h = fn_8278BA98(&tmp, r);
    if (r) {
        fn_8267C4F0(r);
    }
    if (m->t != 0 && (idx = fn_8278C400(m, key, m->t->mask & h)) >= 0) {
        Ref *r2 = *key;
        if (r2) {
            fn_8267C4C8(r2);
        }
        {
            Ref *tmp2 = r2;
            fn_8278BEE8(m->t->entries + idx * 0xc, &tmp2);
        }
        if (r2) {
            fn_8267C4F0(r2);
        }
    } else {
        fn_8278DF08(m, v, key, h);
    }
}
