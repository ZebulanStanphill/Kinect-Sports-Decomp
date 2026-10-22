extern void fn_82230218(void *s, const char *str, int pos, int n);
extern void fn_828CCCC0(void *p, int a, int b, int c);
extern int fn_828EA268(unsigned int n);

typedef struct {
    char str[0x1c];
    short f1c;
    unsigned short f1e;
    short f20;
    short pad22;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    unsigned char f38;
} Obj;

Obj *fn_82890428(Obj *o, const char *name, short a, unsigned short b, int c, int d, int e, int *f, unsigned char g)
{
    *(int *)(o->str + 0x10) = 0;
    *(int *)(o->str + 0x14) = 0xf;
    o->str[0] = 0;
    fn_82230218(o, name, 0, -1);
    o->f1c = a;
    o->f1e = b;
    o->f20 = fn_828EA268(b < 2 ? b : b - 1);
    o->f24 = c;
    o->f28 = d;
    o->f2c = e;
    o->f30 = 0;
    o->f34 = 0;
    fn_828CCCC0(&o->f30, f[0], f[1], 0);
    o->f38 = g;
    return o;
}
