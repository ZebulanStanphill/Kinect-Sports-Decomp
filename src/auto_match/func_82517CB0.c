extern void fn_82517FF0(void);
extern void fn_828E6748(void *fn);
extern char lbl_821C287C[];

typedef struct Function_82517CB0 {
    void *vt;
    void (*pf)(void);
    int pad[2];
    struct Function_82517CB0 *impl;
} Function_82517CB0;

static __forceinline Function_82517CB0 *Function_82517CB0_ConstructImpl(Function_82517CB0 *f, void (*pf)(void))
{
    f->pf = pf;
    f->vt = lbl_821C287C;
    return f;
}

void fn_82517CB0(void)
{
    Function_82517CB0 fn;
    void (*pf)(void) = fn_82517FF0;
    fn.impl = pf == 0 ? 0 : Function_82517CB0_ConstructImpl(&fn, pf);
    fn_828E6748(&fn);
}
