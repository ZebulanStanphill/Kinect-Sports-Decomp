typedef struct Obj_8260B550 {
    int a;
    int b;
} Obj_8260B550;

extern void fn_82851250(int a, int b, float g, float h, int p, int q, int x);
extern unsigned int fn_8284D840(int a);
extern void fn_8260B5C0(Obj_8260B550 *o, void *y, void *z, float f);

void fn_8260B550(Obj_8260B550 *o, int x, void *y, void *z, float f, int p, int q, float g, float h)
{
    fn_82851250(o->a, o->b, g, h, p, q, x);
    if (fn_8284D840(o->a) & 8) {
        fn_8260B5C0(o, y, z, f);
    }
}
