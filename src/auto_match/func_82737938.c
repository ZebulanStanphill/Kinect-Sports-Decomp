typedef struct Obj_82737938 {
    int f0;
    int f4;
    char *f8;
} Obj_82737938;

extern unsigned char fn_82695468(Obj_82737938 *o, int k);
extern void fn_826954C0(Obj_82737938 *o, const char *s, int a, int b);
extern int fn_827558B0(char *a);
extern void fn_8269A1F0(int a, int b);

void fn_82737938(Obj_82737938 *o)
{
    char *p;
    if (fn_82695468(o, 0x29) == 0) {
        fn_826954C0(o, "TextSnapshot", 0, 0);
    } else {
        p = o->f8 ? o->f8 - 0x10 : 0;
        if (p != 0) {
            fn_8269A1F0(o->f4, fn_827558B0(p + 0x30));
        }
    }
}
