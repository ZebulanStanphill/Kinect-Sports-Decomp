typedef struct Elem_83037C10 {
    unsigned int value;
    unsigned int extra;
} Elem_83037C10;

typedef struct Vec_83037C10 {
    Elem_83037C10 *begin;
    Elem_83037C10 *end;
    unsigned int capacity;
    unsigned int reserve;
} Vec_83037C10;

extern unsigned int fn_82FA5060(unsigned int a, unsigned int b);
extern void fn_82FA5190(unsigned int a, unsigned int v);
extern unsigned char fn_83037EB8(Vec_83037C10 *p, unsigned int elemSize);
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC8DC;

int fn_83037C10(Vec_83037C10 *p, unsigned int n)
{
    unsigned int v;
    unsigned int count;
    unsigned int i;
    Elem_83037C10 *e;

    if (n < 2) {
        n = 2;
    }
    p->reserve = n;
    i = 0;
    do {
        v = fn_82FA5060(lbl_831BC768, lbl_831BC8DC);
        if (v == 0) {
            return 0x34;
        }
        count = p->end - p->begin;
        if (count >= p->capacity && fn_83037EB8(p, 8) == 0) {
            goto fail;
        }
        if (count >= p->capacity) {
            goto fail;
        }
        e = p->end;
        p->end = e + 1;
        if (e == 0) {
            goto fail;
        }
        i++;
        e->value = v;
        e->extra = 0;
    } while (i < 2);
    return 1;

fail:
    fn_82FA5190(lbl_831BC768, v);
    return 0x34;
}
