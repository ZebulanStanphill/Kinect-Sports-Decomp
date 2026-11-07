typedef struct Obj_8273AC08 {
    char pad[0x38];
    int value;
} Obj_8273AC08;

typedef struct Self_8273AC08 {
    int pad0;
    int arg;
    char *ptr;
} Self_8273AC08;

extern unsigned char fn_82695468(Self_8273AC08 *self, int id);
extern void fn_826954C0(Self_8273AC08 *self, const char *name, int a, int b);
extern void fn_82681898(int arg, double value);

void fn_8273AC08(Self_8273AC08 *param_1)
{
    char *p;
    Obj_8273AC08 *o;

    if (fn_82695468(param_1, 0x23) == 0) {
        fn_826954C0(param_1, "Date", 0, 0);
    }
    else {
        p = param_1->ptr;
        o = p ? (Obj_8273AC08 *)(p - 0x10) : 0;
        fn_82681898(param_1->arg, (double)(o->value % 1000));
    }
}
