typedef struct Obj_8273D270 {
    int f0;
    int f4;
    char *f8;
    char pad[0xc];
    int f18;
} Obj_8273D270;

extern unsigned char fn_82695468(Obj_8273D270 *o, int k);
extern void fn_826954C0(Obj_8273D270 *o, const char *s, int a, int b);
extern int fn_8273D198(char *a, int b);
extern void fn_8269A1F0(int a, int b);

void fn_8273D270(Obj_8273D270 *o)
{
    char *p;
    if (fn_82695468(o, 0x2a) == 0) {
        fn_826954C0(o, "SharedObject", 0, 0);
    } else {
        p = o->f8 ? o->f8 - 0x10 : 0;
        if (p != 0) {
            fn_8269A1F0(o->f4, fn_8273D198(p, o->f18));
        }
    }
}
