extern void fn_82455158(void);
extern void fn_824C8258(void *target, void *fn);
extern void fn_82359C18(void *fn);
extern char lbl_821B2630[];

typedef struct Function_824550A8 {
    void *vt;
    void (*pf)(void);
    int pad[2];
    struct Function_824550A8 *impl;
} Function_824550A8;

static __forceinline Function_824550A8 *Function_824550A8_ConstructImpl(Function_824550A8 *f, void (*pf)(void))
{
    f->pf = pf;
    f->vt = lbl_821B2630;
    return f;
}

void fn_824550A8(void **self)
{
    Function_824550A8 fn;
    void (*pf)(void) = fn_82455158;
    fn.impl = pf == 0 ? 0 : Function_824550A8_ConstructImpl(&fn, pf);
    fn_824C8258(*self, &fn);
    fn_82359C18(&fn);
}
