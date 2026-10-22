typedef void (*vfn)(void *, int, int);
typedef struct { vfn f[4]; } VT;
typedef struct { VT *vt; } Obj;
extern int fn_82CE5410(void);
extern int fn_82DC73A8(unsigned short);
extern int fn_82DC74A8(unsigned int, unsigned char, unsigned char, unsigned short);
extern void fn_82DC7568(int, int);

int fn_82DC7748(int param_1, int param_2, unsigned char *param_3)
{
    int r;
    int v;
    Obj *o;

    if ((int)((*(unsigned short *)(param_1 + 4) + param_2) * 2) <= (int)*(unsigned short *)(param_1 + 6)) {
        r = fn_82DC74A8(*(unsigned short *)(param_1 + 6) >> 1, *(unsigned char *)(param_1 + 8),
                        *(unsigned char *)(param_1 + 9), *(unsigned short *)(param_1 + 0xc));
        fn_82DC7568(r, param_1);
        v = fn_82DC73A8(*(unsigned short *)(param_1 + 2));
        o = *(Obj **)(fn_82CE5410() + 0x10);
        o->vt->f[2](o, param_1, v);
        *param_3 = 1;
        return r;
    }
    return param_1;
}
