typedef struct Obj_827544C0 {
    int refcount;
    int f4;
    int f8;
    int fc;
    float f10;
    void *f14;
    int f18;
} Obj_827544C0;

typedef struct Owner_827544C0 {
    int pad[6];
    Obj_827544C0 *obj;
} Owner_827544C0;

extern void *fn_8267BED0(Owner_827544C0 *owner, int size, unsigned int *tag);
extern void *fn_8276DE20(void *mem);
extern void *fn_82768968(void *mem, void *a, int c);
extern void fn_8268C210(void *p);
extern void fn_8267C4C8(void *p);
extern void fn_826C6368(Obj_827544C0 *p);
extern void fn_8267BE38(void *p);
extern void fn_82687270(void *p);
extern void fn_8267C4F0(void *p);

void fn_827544C0(Owner_827544C0 *owner)
{
    unsigned int tag1;
    unsigned int tag2;
    unsigned int tag3;
    void *mem;
    void *a;
    void *b;
    Obj_827544C0 *p;
    Obj_827544C0 *result;
    Obj_827544C0 *old;

    tag1 = 0x105;
    mem = fn_8267BED0(owner, 0x40, &tag1);
    if (mem != 0) {
        a = fn_8276DE20(mem);
    } else {
        a = 0;
    }

    tag2 = 2;
    mem = fn_8267BED0(owner, 0x2c, &tag2);
    if (mem != 0) {
        b = fn_82768968(mem, a, 0);
    } else {
        b = 0;
    }

    tag3 = 0x146;
    p = (Obj_827544C0 *)fn_8267BED0(owner, 0x1c, &tag3);
    if (p != 0) {
        p->f4 = 0;
        p->f8 = 0;
        p->refcount = 1;
        fn_8268C210(&p->fc);
        p->f10 = 1.0f;
        if (b != 0) {
            fn_8267C4C8(b);
        }
        p->f14 = b;
        p->f18 = 0;
        result = p;
    } else {
        result = 0;
    }

    old = owner->obj;
    if (old != 0) {
        if (--old->refcount == 0) {
            fn_826C6368(old);
            fn_8267BE38(old);
        }
    }
    owner->obj = result;

    if (b != 0) {
        fn_82687270(b);
    }
    if (a != 0) {
        fn_8267C4F0(a);
    }
}
