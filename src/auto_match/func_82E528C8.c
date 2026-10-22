typedef struct IUnk { struct { void *qi; void *addref; int (*release)(struct IUnk *); } *vt; } IUnk;

extern void fn_82E50EA0(void *);
extern void fn_82E51480(void *);
extern void fn_82E522B0(void *);
extern void fn_82E569B0(void *, int);
extern char lbl_821547F8[];
extern char lbl_82154818[];
extern char lbl_82154830[];
extern char lbl_82154D80[];

void fn_82E528C8(void **param_1)
{
    IUnk *u;

    param_1[0] = lbl_82154830;
    param_1[0x13] = lbl_82154818;
    param_1[0x14] = lbl_821547F8;
    fn_82E51480(param_1);
    u = (IUnk *)param_1[0x16];
    if (u != 0) {
        u->vt->release(u);
        param_1[0x16] = 0;
    }
    param_1[0x28] = lbl_82154D80;
    if (param_1[0x29] == 0) {
        fn_82E569B0(param_1 + 0x28, 0);
    }
    fn_82E50EA0(param_1 + 0x19);
    fn_82E522B0(param_1);
}
