/* Blend update: fetches the two channel items and the target, then runs the fn_8250CE00 / fn_8250C540 /
   fn_8250C3B0 sequence of the func_8250DE28 family with the weight (1, w). */
typedef struct Obj_8250DEE8 {
    char pad00[0xe8];
    int fe8;
} Obj_8250DEE8;

extern int fn_827F3C48(Obj_8250DEE8 *o, int index);
extern int fn_827F3C28(int item);
extern int fn_827F3C20(Obj_8250DEE8 *o);
extern float fn_827F4868(Obj_8250DEE8 *o);
extern unsigned short fn_827F7210(int item);
extern void fn_8250CE00(int a, int b, int c, float x, int d);
extern void fn_8250C540(int a, int b, int c, float x, float y, int d);
extern void fn_8250C3B0(int a, int b, int c);
extern float lbl_821CA45C[];

void fn_8250DEE8(Obj_8250DEE8 *o)
{
    int a;
    int b;
    int c;
    float w;
    int d;

    a = fn_827F3C28(fn_827F3C48(o, 0));
    b = fn_827F3C28(fn_827F3C48(o, 1));
    c = fn_827F3C20(o);
    w = fn_827F4868(o);
    d = o->fe8;
    if (fn_827F7210(a) != 0) {
        fn_8250CE00(a, b, c, w, d);
    }
    fn_8250C540(a, b, c, lbl_821CA45C[1], w, 0);
    fn_8250C3B0(a, b, c);
}
