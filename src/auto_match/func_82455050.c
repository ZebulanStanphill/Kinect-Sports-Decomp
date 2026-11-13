extern void fn_82455100(void);
extern void fn_824C8258(void *target, void *fn);
extern void fn_82359C18(void *fn);
extern char lbl_821B2630[];

typedef struct Function_82455050 {
    void *vt;
    void (*pf)(void);
    int pad[2];
    struct Function_82455050 *impl;
} Function_82455050;

static __forceinline Function_82455050 *Function_82455050_ConstructImpl(Function_82455050 *f, void (*pf)(void))
{
    f->pf = pf;
    f->vt = lbl_821B2630;
    return f;
}

void fn_82455050(void **self)
{
    Function_82455050 fn;
    void (*pf)(void) = fn_82455100;
    fn.impl = pf == 0 ? 0 : Function_82455050_ConstructImpl(&fn, pf);
    fn_824C8258(*self, &fn);
    fn_82359C18(&fn);
}
