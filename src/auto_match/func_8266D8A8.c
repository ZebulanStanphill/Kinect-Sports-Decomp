typedef struct Elem_8266D8A8 { int a; int b; unsigned int key; } Elem_8266D8A8;
typedef struct Out_8266D8A8 { int pad[4]; int f10; } Out_8266D8A8;
typedef struct Tmp_8266D8A8 { int w0, w1, w2, w3, w4; } Tmp_8266D8A8;
typedef struct Res_8266D8A8 { int pad[6]; } Res_8266D8A8;
extern void fn_8266D270(Out_8266D8A8 *, Elem_8266D8A8 *);
extern Res_8266D8A8 *fn_8266D840(void *, Elem_8266D8A8 *, Elem_8266D8A8 *, Tmp_8266D8A8 *);
extern void fn_8266D440(void *);

Res_8266D8A8 *fn_8266D8A8(Res_8266D8A8 *res, Elem_8266D8A8 *a, Elem_8266D8A8 *ae, Elem_8266D8A8 *b, Elem_8266D8A8 *be, Out_8266D8A8 *out)
{
    Tmp_8266D8A8 t;
    Res_8266D8A8 r1;
    Res_8266D8A8 *p;
    while (a != ae && b != be) {
        if (b->key < a->key) {
            fn_8266D270(out, b);
            b++;
        } else {
            fn_8266D270(out, a);
            a++;
        }
    }
    t.w4 = out->f10;
    t.w0 = 0;
    t.w1 = 0;
    t.w2 = 0;
    t.w3 = 0;
    p = fn_8266D840(&r1, a, ae, &t);
    out->f10 = p->pad[4];
    fn_8266D440(&r1);
    t.w4 = out->f10;
    t.w0 = 0;
    t.w1 = 0;
    t.w2 = 0;
    t.w3 = 0;
    fn_8266D840(res, b, be, &t);
    fn_8266D440(out);
    return res;
}
