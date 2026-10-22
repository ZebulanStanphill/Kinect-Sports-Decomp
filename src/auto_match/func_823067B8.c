typedef void (*vfn)(void *);
extern void fn_82230110(void *s, const char *name);
extern void fn_82230300(void *s, int a, int b);
extern void fn_822FB198(void *a, void *s);

typedef struct Obj {
    vfn *vtbl;
    int pad4[2];
    char *ctx;
} Obj;

void fn_823067B8(Obj *p)
{
    char buf[32];

    p->vtbl[7](p);
    *(int *)(p->ctx + 0x200) = 0;
    fn_82230110(buf, "idleset_disappointed");
    fn_822FB198(*(void **)(*(char **)(p->ctx + 0x114) + 0xc0), buf);
    fn_82230300(buf, 1, 0);
}
