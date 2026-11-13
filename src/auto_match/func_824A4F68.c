typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, void *src);
extern char lbl_821BF6A8[];

typedef struct Src_824A4F68 {
    int pad[0x12];
    float f48;
    float f4c;
    int f50;
    int f54;
} Src_824A4F68;

typedef struct Obj_824A4F68 {
    char *vt;
    int pad[0xe];
    float f3c;
    float f40;
    int f44;
    int f48;
    unsigned char f4c;
    int f50;
    int pad54[7];
    __vector4 v70;
    int f80;
    int pad84[3];
} Obj_824A4F68;

Obj_824A4F68 *fn_824A4F68(Src_824A4F68 *src)
{
    Obj_824A4F68 *p = (Obj_824A4F68 *)fn_8265C9E0(0x90);
    if (p != 0) {
        fn_82F53A20(p, src);
        p->vt = lbl_821BF6A8;
        p->f40 = src->f4c;
        p->f44 = src->f50;
        p->f48 = src->f54;
        p->f3c = src->f48 * src->f48;
        p->f4c = 0;
        p->f50 = p->f44;
        p->v70 = __VMXGetReg(77);
        p->f80 = 0;
        return p;
    }
    return 0;
}
