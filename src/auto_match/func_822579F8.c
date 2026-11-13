extern void *fn_82517C10(void *, int, int, int, void *, void *, void *, void *, void *);
extern void fn_82359C18(void *);
extern void *fn_82518120(void);
extern void fn_82518248(void *, int, void *);
extern void fn_82257B60(void);
extern void fn_8251C5A0(void);
extern void fn_82257BE0(void);
extern void fn_82257CA8(void);
extern void fn_82258220(void);
extern char lbl_82196E7C[];

typedef struct Function_822579F8 {
    void *vt;
    void (*pf)(void);
    int pad[2];
    struct Function_822579F8 *impl;
} Function_822579F8;

static __forceinline Function_822579F8 *Function_822579F8_ConstructImpl(Function_822579F8 *f, void (*pf)(void))
{
    f->pf = pf;
    f->vt = lbl_82196E7C;
    return f;
}

void *fn_822579F8(void *self, int a, int b)
{
    Function_822579F8 fn;
    void (*pf)(void) = fn_82258220;
    fn.impl = pf == 0 ? 0 : Function_822579F8_ConstructImpl(&fn, pf);
    fn_82517C10(self, a, 4, 1, fn_82257B60, fn_8251C5A0, fn_82257BE0, fn_82257CA8, &fn);
    fn_82359C18(&fn);
    *(int *)((char *)self + 0x50) = b;
    fn_82518248(fn_82518120(), b, self);
    return self;
}
