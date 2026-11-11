typedef struct Obj_8273A988 {
    char pad[0x30];
    __int64 time;
} Obj_8273A988;

typedef struct Self_8273A988 {
    int pad0;
    int arg;
    char *ptr;
} Self_8273A988;

extern unsigned char fn_82695468(Self_8273A988 *self, int id);
extern void fn_826954C0(Self_8273A988 *self, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);

void fn_8273A988(Self_8273A988 *param_1)
{
    char *p;
    Obj_8273A988 *o;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    }
    else {
        p = param_1->ptr;
        o = p ? (Obj_8273A988 *)(p - 0x10) : 0;
        fn_82681898(param_1->arg, (double)(((int)(o->time / 86400000) + 4) % 7));
    }
}
