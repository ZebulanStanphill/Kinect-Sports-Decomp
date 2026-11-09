/* /O1 /QVMXReserve: v77 is the game's reserved zero vector, read with __VMXGetReg
   (as in func_82515270.c). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
extern void *fn_8265C9E0(int size);
extern void fn_82F53A20(void *p, void *src);
extern char lbl_821BF5D0[];

typedef struct Src_824A3600 {
    int pad[0x12];
    float f48;
    int f4c;
} Src_824A3600;

typedef struct Obj_824A3600 {
    char *vt;
    int pad[0xe];
    float f3c;
    int f40;
    int f44;
    int pad48[2];
    __vector4 v50;
    int f60;
    int pad64[3];
} Obj_824A3600;

Obj_824A3600 *fn_824A3600(Src_824A3600 *src)
{
    Obj_824A3600 *p = (Obj_824A3600 *)fn_8265C9E0(0x70);
    if (p != 0) {
        fn_82F53A20(p, src);
        p->vt = lbl_821BF5D0;
        p->f3c = src->f48;
        p->f40 = src->f4c;
        p->v50 = __VMXGetReg(77);
        p->f44 = 0;
        p->f60 = 0;
        return p;
    }
    return 0;
}
