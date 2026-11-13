typedef struct Obj_828C8948 {
    char pad0[0x18];
    void *f18;
    char pad1c[0x50];
    void *f6c;
    char pad70[0x10];
    int f80;
    char f84[8];
} Obj_828C8948;

typedef struct Key_828C8948 {
    int data[4];
} Key_828C8948;

extern void *fn_8265C9E0(int size);
extern void fn_82886518(void *n, int a, int b);
extern void *fn_8288F1E8(void *map, void *key);
extern void fn_828940C0(void *n, void *a, unsigned char flag);
extern Key_828C8948 *fn_828B5580(Key_828C8948 *out, void *key);
extern void *fn_828CBE98(void *mem, Key_828C8948 *key, int flag);
extern void fn_828BE158(void *map, void *n, void *a, int b);

int fn_828C8948(Obj_828C8948 *o)
{
    void *k;
    void *mem;
    void *n;
    Key_828C8948 tmp;

    k = fn_8288F1E8(o->f6c, o->f84);
    if (k != 0) {
        fn_828940C0(k, o->f18, (unsigned char)o->f80);
        return 1;
    }
    mem = fn_8265C9E0(0xa8);
    n = mem != 0 ? fn_828CBE98(mem, fn_828B5580(&tmp, o->f84), o->f80) : 0;
    fn_82886518(n, -1, -1);
    fn_828BE158(o->f6c, n, o->f18, 0);
    return 1;
}
