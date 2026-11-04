extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82232540(void *);
extern int *fn_8265C9E0(int);
extern char lbl_821AD588[];

typedef struct { int *ptr; int *rc; } SharedPtr_82252E68;

SharedPtr_82252E68 *fn_82252E68(SharedPtr_82252E68 *p)
{
    int *mem;
    int *r;
    int *o;
    mem = fn_8265C9E0(0x9a8);
    if (mem != 0) {
        mem[1] = 1;
        mem[0] = (int)lbl_821AD588;
        mem[2] = 1;
        if (mem + 3 != 0) {
            fn_82232540(mem + 3);
        }
        r = mem;
    } else {
        r = 0;
    }
    o = r + 3;
    p->ptr = 0;
    p->rc = 0;
    if (r != 0) {
        if (fn_8223AAC0(r) != 0) {
            if (p->rc != 0) {
                fn_822315A0(p->rc);
            }
            p->rc = r;
            p->ptr = o;
        }
        fn_822315A0(r);
    }
    return p;
}
