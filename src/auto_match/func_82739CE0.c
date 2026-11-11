typedef struct Obj_82739CE0 {
    char pad[0x50];
    int time;
} Obj_82739CE0;

typedef struct Self_82739CE0 {
    int pad0;
    int arg;
    char *ptr;
} Self_82739CE0;

extern unsigned char fn_82695468(Self_82739CE0 *self, int id);
extern void fn_826954C0(Self_82739CE0 *self, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);

void fn_82739CE0(Self_82739CE0 *param_1)
{
    char *p;
    Obj_82739CE0 *o;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    }
    else {
        p = param_1->ptr;
        o = p ? (Obj_82739CE0 *)(p - 0x10) : 0;
        fn_82681898(param_1->arg, (double)(o->time % 3600000 / 60000));
    }
}
