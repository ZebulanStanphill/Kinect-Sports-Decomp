typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
    void (*f4)(Obj *self);
    void (*f8)(Obj *self);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

extern void fn_82230300(void *p, int a, int b);
extern int **fn_824BC7E8(void);
extern void fn_825604A0(void *p);
extern unsigned int lbl_821BBE24;
extern unsigned int lbl_821C2CCC;

void fn_824638B0(unsigned int *param_1)
{
    *param_1 = (unsigned int)&lbl_821BBE24;
    fn_825604A0(param_1 + 0xc);
    if ((Obj *)param_1[0x6e] != 0) {
        ((Obj *)param_1[0x6e])->vtbl->f8((Obj *)param_1[0x6e]);
        if ((Obj *)param_1[0x6e] != 0) {
            ((Obj *)param_1[0x6e])->vtbl->dtor((Obj *)param_1[0x6e], 1);
        }
    }
    *(int *)(*fn_824BC7E8() + 1) = 0;
    *param_1 = (unsigned int)&lbl_821C2CCC;
    fn_82230300(param_1 + 3, 1, 0);
}
