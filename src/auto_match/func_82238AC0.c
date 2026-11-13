typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

/* v77 is the game's reserved zero vector, read with __VMXGetReg (/QVMXReserve). */
__vector4 __VMXGetReg(int n);

typedef struct {
    int f00;
    int f04;
    int f08;
    char pad0c[4];
    __vector4 vec;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
} Sub_82238AC0;

typedef struct {
    void *vt;
    char pad04[0x64];
    void *vt2;
    char pad6c[0xc0 - 0x6c];
    Sub_82238AC0 sub;
} Obj_82238AC0;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_822CA318(void *p, int a);
extern char lbl_821AD878[];
extern char lbl_821AD8CC[];

Obj_82238AC0 *fn_82238AC0(int param_1)
{
    Obj_82238AC0 *p = fn_8265C9E0(0x100);
    if (p != 0) {
        fn_822CA318(p, param_1);
        p->vt = lbl_821AD878;
        p->vt2 = lbl_821AD8CC;
        {
            Sub_82238AC0 *s = &p->sub;
            s->f00 = 0;
            s->f04 = 0;
            s->f08 = 0xc;
            s->vec = __VMXGetReg(77);
            s->f20 = 0;
            s->f24 = 0x18;
            s->f28 = 0;
            s->f2c = 0xff;
            s->f30 = 4;
            s->f34 = 0;
        }
        return p;
    }
    return 0;
}
