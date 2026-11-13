typedef struct Obj_829E4B60 {
    char pad0[0xc];
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
} Obj_829E4B60;

long fn_829E4B60(Obj_829E4B60 *o, unsigned int *a, unsigned int *b, unsigned int *c, unsigned int *d)
{
    if (a == 0) {
        return 0x80070057;
    }
    if (b == 0) {
        return 0x80070057;
    }
    if (c == 0) {
        return 0x80070057;
    }
    if (d == 0) {
        return 0x80070057;
    }
    *a = o->a;
    *b = o->b;
    *c = o->c;
    *d = o->d;
    return 0;
}
