typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern __vector4 __VMXGetReg(int);
extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, int a);
extern int lbl_821BFAA8;

typedef struct Obj_824AAB00 {
    void *vtbl;
    int pad[0xe];
    int f3c;
    int f40;
    int f44;
    int f48;
    int pad4c;
    __vector4 v50;
} Obj_824AAB00;

Obj_824AAB00 *fn_824AAB00(int a)
{
    Obj_824AAB00 *p = (Obj_824AAB00 *)fn_8265C9E0(0x60);
    if (p != 0) {
        fn_82F53A20(p, a);
        p->f3c = 0;
        p->vtbl = &lbl_821BFAA8;
        p->f40 = 0;
        p->v50 = __VMXGetReg(77); /* uninitialised vector member, as in func_82361BA0 */
        p->f44 = 0;
        p->f48 = 0;
        return p;
    }
    return 0;
}
