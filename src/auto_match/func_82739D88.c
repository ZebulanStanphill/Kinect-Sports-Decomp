typedef struct Self_82739D88 {
    int pad0;
    int arg;
    char *ptr;
} Self_82739D88;

typedef struct Obj_82739D88 {
    char pad[0x50];
    int value;
} Obj_82739D88;

extern unsigned char fn_82695468(Self_82739D88 *self, int id);
extern void fn_826954C0(Self_82739D88 *self, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);

void fn_82739D88(Self_82739D88 *param_1)
{
    char *p;
    Obj_82739D88 *o;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    }
    else {
        p = param_1->ptr;
        o = p ? (Obj_82739D88 *)(p - 0x10) : 0;
        fn_82681898(param_1->arg, (double)((o->value % 60000) / 1000));
    }
}
