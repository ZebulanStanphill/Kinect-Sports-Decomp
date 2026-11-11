typedef struct Obj_82739B30 {
    char pad[0x48];
    __int64 time;
} Obj_82739B30;

typedef struct Self_82739B30 {
    int pad0;
    int arg;
    char *ptr;
} Self_82739B30;

extern unsigned char fn_82695468(Self_82739B30 *self, int id);
extern void fn_826954C0(Self_82739B30 *self, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);

void fn_82739B30(Self_82739B30 *param_1)
{
    char *p;
    Obj_82739B30 *o;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    }
    else {
        p = param_1->ptr;
        o = p ? (Obj_82739B30 *)(p - 0x10) : 0;
        fn_82681898(param_1->arg, (double)(((int)(o->time / 86400000) + 4) % 7));
    }
}
