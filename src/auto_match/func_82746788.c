typedef struct Obj_82746788 {
    int f0;
    int f4;
    char *f8;
    int pad[3];
    int f18;
} Obj_82746788;

typedef struct Rect_82746788 {
    double left;
    double top;
    double right;
    double bottom;
} Rect_82746788;

extern unsigned char fn_82695468(Obj_82746788 *o, int k);
extern void fn_826954C0(Obj_82746788 *o, const char *s, int a, int b);
extern void fn_827451A8(char *p, int a, Rect_82746788 *r);
extern double lbl_82005710;

void fn_82746788(Obj_82746788 *o)
{
    char *p;
    Rect_82746788 r;
    if (fn_82695468(o, 0x11) == 0) {
        fn_826954C0(o, "Rectangle", 0, 0);
    } else {
        p = o->f8 ? o->f8 - 0x10 : 0;
        r.left = lbl_82005710;
        r.top = lbl_82005710;
        r.right = lbl_82005710;
        r.bottom = lbl_82005710;
        fn_827451A8(p, o->f18, &r);
    }
}
