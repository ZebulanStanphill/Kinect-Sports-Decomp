typedef void (*Fn_82BDBD58)(int, int, int, int, float *);
typedef struct Obj_82BDBD58 {
    int a;
    char pad[0xcc];
    unsigned int flags;
} Obj_82BDBD58;
extern int XMemSet(int, int, int);
extern int fn_82BD38E8(int, float *);
extern int fn_82BD62B8(Obj_82BDBD58 *);

int fn_82BDBD58(int **param_1, int *param_2)
{
    Fn_82BDBD58 cb;
    Obj_82BDBD58 *o;
    float *pv;
    float tmp[8];
    float v;
    int b;
    int c;
    int a;

    pv = 0;
    cb = *(Fn_82BDBD58 *)((char *)*param_1 + 0x4b8);
    if (cb == 0) {
        return 0;
    }
    o = (Obj_82BDBD58 *)param_1[1];
    if (fn_82BD38E8(*(int *)((char *)o + 0xc), tmp) >= 0) {
        pv = &v;
        v = tmp[0];
    }
    if ((o->flags & 1) != 0) {
        XMemSet(param_2[2], 0, param_2[3]);
    }
    c = param_2[3];
    a = o->a;
    b = param_2[2];
    cb(a, fn_82BD62B8(o), b, c, pv);
    return 1;
}
