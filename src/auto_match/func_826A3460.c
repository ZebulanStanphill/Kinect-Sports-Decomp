typedef struct Obj_826A3460 {
    int f0;
    int f4;
    char *f8;
    int fC;
    int f10;
    int f14;
    int f18;
    int count;
} Obj_826A3460;

extern unsigned char fn_82695468(Obj_826A3460 *o, int kind);
extern int fn_826954C0(Obj_826A3460 *o, const char *name, int a, int b);
extern int fn_826957D0(Obj_826A3460 *o, int index);
extern int fn_8269A1F0(int a, int b);
extern int fn_826A2F80(char *dst, int value);

void fn_826A3460(Obj_826A3460 *o)
{
    char *q;
    int i;

    if (fn_82695468(o, 7) == 0) {
        fn_826954C0(o, "Array", 0, 0);
        return;
    }
    q = o->f8 != 0 ? o->f8 - 0x10 : 0;
    for (i = 0; i < o->count; i++) {
        fn_826A2F80(q, fn_826957D0(o, i));
    }
    fn_8269A1F0(o->f4, *(int *)(q + 0x38));
}
