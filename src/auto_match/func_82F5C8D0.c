typedef struct Vec_82F5C8D0 {
    void **first;
    void **last;
    void **end;
} Vec_82F5C8D0;

typedef struct Obj_82F5C8D0 {
    unsigned char data[0x1560];
    struct Obj_82F5C8D0 *self;
    Vec_82F5C8D0 vec;
    char pad1570[0x10];
    char sub1580[0x197c - 0x1580];
    int ready;
} Obj_82F5C8D0;

extern void *memset(void *dst, int c, unsigned int n);
extern void **fn_82F5C868(void ***ret, Vec_82F5C8D0 *v, void **first, void **last);
extern void fn_82F5BAF8(void *p);

void fn_82F5C8D0(Obj_82F5C8D0 *o)
{
    void **it;
    memset(o, 0, 0x1560);
    o->self = o;
    fn_82F5C868(&it, &o->vec, o->vec.first, o->vec.last);
    fn_82F5BAF8(o->sub1580);
    o->ready = 1;
}
