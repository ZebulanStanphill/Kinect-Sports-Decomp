extern void *memset(void *, int, unsigned int);
typedef struct Obj_82F58CD8 {
    int data[4];
    int count;
    char sub[8];
    unsigned int f1c;
    int f20;
    int f24;
} Obj_82F58CD8;
extern void fn_824B4288(void *sub, int n);

Obj_82F58CD8 *fn_82F58CD8(Obj_82F58CD8 *o, unsigned int a, int b, int c)
{
    o->count = 0;
    memset(o->data, 0, sizeof(o->data));
    if (a == 0) a = 4;
    o->f1c = a;
    o->f20 = b;
    o->f24 = c;
    fn_824B4288(o->sub, 8);
    return o;
}
