typedef struct Obj {
    int f0;
    int f4;
    unsigned int pad0 : 15;
    unsigned int kind : 3;
    unsigned int pad1 : 14;
    char padc[0x2c - 0xc];
    int f2c;
} Obj;

typedef struct Src {
    char pad0[0xc];
    int fc;
    void *f10;
} Src;

typedef struct Arg3 {
    char pad0[0x1c];
    int f1c;
} Arg3;

extern void fn_82AC6860(int, Obj *, int, Arg3 *);
extern Src *fn_82ACA920(int, Src *, int);
extern int fn_82AD1978(Obj *, Src *);
extern Obj *fn_82B841E8(int, int, int, int, int, int);

Obj *fn_82AF80A8(int param_1, int param_2, Arg3 *param_3, Src *param_4)
{
    Obj *o;
    Src *s;

    o = fn_82B841E8(param_1, param_3->f1c, 0, 0x14, 1, 4);
    if (param_4->f10 != 0) {
        s = fn_82ACA920(param_1, param_4, param_4->fc);
    } else {
        s = param_4;
    }
    o->f2c = fn_82AD1978(o, s);
    o->kind = 1;
    fn_82AC6860(param_1, o, param_2, param_3);
    return o;
}

