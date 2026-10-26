typedef struct {
    char pad[0x1ec];
    int value;
} Target1;

typedef struct {
    char pad[0xd0];
    int value;
} Target2;

typedef struct {
    char pad[0x1c];
    Target1 *t1;
    char pad2[0x34 - 0x20];
    Target2 *t2;
} Obj;

typedef struct {
    char pad[0x5c];
    Obj *ptr;
    void *rep;
} Owner;

extern unsigned char fn_8223AAC0(void *rep);
extern void fn_822315A0(void *rep);

void fn_82498BC8(Owner *o)
{
    void *rep = o->rep;
    Obj *ptr = o->ptr;
    Obj *p = 0;
    void *r = 0;

    if (rep != 0 && fn_8223AAC0(rep)) {
        r = rep;
        p = ptr;
    }
    p->t1->value = 0;
    if (p->t2 != 0) {
        p->t2->value = 0;
    }
    if (r != 0) {
        fn_822315A0(r);
    }
}
