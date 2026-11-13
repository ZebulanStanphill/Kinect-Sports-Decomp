typedef struct {
    int type;
    void (*handler)(void);
    int x8;
    unsigned char xc;
    unsigned char xd;
    const char *name;
    int x14;
    int x18;
} Message_828E5BD0;

typedef struct {
    void *vt;
    void (*fn)(void);
} FuncImpl_828E5BD0;

typedef struct {
    FuncImpl_828E5BD0 storage;
    int pad[2];
    FuncImpl_828E5BD0 *impl;
} Function_828E5BD0;

extern void *lbl_821C2734[];
extern void fn_828B02D0(Message_828E5BD0 *m);
extern void fn_828BF798(Message_828E5BD0 *m);
extern void fn_828E5860(void);
extern void fn_828E5A80(void);
extern void fn_828E2DC8(Function_828E5BD0 *f);

void fn_828E5BD0(void)
{
    Message_828E5BD0 m;
    Function_828E5BD0 f;
    void (*fn)(void);

    fn_828B02D0(&m);
    m.xd = 0;
    m.handler = fn_828E5860;
    m.name = "Function Call Message";
    m.x8 = 0;
    m.xc = 0;
    m.type = 0x1b;
    fn_828BF798(&m);
    fn = fn_828E5A80;
    if (fn == 0) {
        f.impl = 0;
    } else {
        f.storage.fn = fn;
        f.impl = &f.storage;
        f.storage.vt = lbl_821C2734;
    }
    fn_828E2DC8(&f);
}
