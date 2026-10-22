extern void fn_8245DD40(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821BBC84[];

typedef struct Obj {
    void *vt;
    int pad[0x13];
    int f50;
    int f54;
    int f58;
} Obj;

Obj *fn_8245D4B8(Obj *param_1, unsigned int param_2)
{
    param_1->vt = lbl_821BBC84;
    if (param_1->f54 != 0 && param_1->f58 == 0 && param_1->f50 == 0) {
        fn_8245DD40(param_1);
    }
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}
