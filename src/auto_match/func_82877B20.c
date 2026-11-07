typedef struct Elem_82877B20 {
    int head;
    unsigned char body[0x2C];
} Elem_82877B20;

typedef struct Container_82877B20 {
    int unk0;
    Elem_82877B20 *begin;
    Elem_82877B20 *end;
} Container_82877B20;

extern unsigned char fn_828647C0(void *a, void *key);
extern int fn_82877A00(Elem_82877B20 *e, float f);

int fn_82877B20(Container_82877B20 *c, void *key, float f)
{
    Elem_82877B20 *p;
    Elem_82877B20 *end = c->end;

    for (p = c->begin; p != end; p++) {
        if (fn_828647C0(p->body, key)) {
            break;
        }
    }
    if (p == c->end) {
        return (int)0xA0320000;
    }
    return fn_82877A00(p, f) < 0 ? (int)0xA0320000 : 0x20320000;
}
