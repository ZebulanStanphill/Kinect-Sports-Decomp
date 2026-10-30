typedef struct { int a, b, c; } Z_83032278;
typedef struct Obj_83032278 Obj_83032278;
typedef struct { void *s[2]; void (*dtor)(Obj_83032278 *); } VT_83032278;
struct Obj_83032278 {
    VT_83032278 *vt;
    int pad[6];
    void *vt2;
    int pad2[0x17];
    int f7c;
    int f80;
    int f84;
    int f88;
};
extern Obj_83032278 *fn_82FA5060(void *heap, int size);
extern Obj_83032278 *fn_830016B0(Obj_83032278 *o, int a);
extern int fn_82FFF750(Obj_83032278 *o);
extern void *lbl_831BC768;
extern char lbl_8217CD88[];
extern char lbl_8217C940[];

Obj_83032278 *fn_83032278(int param_1)
{
    Obj_83032278 *mem;
    Obj_83032278 *o;
    Z_83032278 *z;

    mem = fn_82FA5060(lbl_831BC768, 0x88);
    if (mem != 0) {
        fn_830016B0(mem, param_1);
        z = (Z_83032278 *)&mem->f7c;
        z->a = 0;
        z->b = 0;
        z->c = 0;
        mem->vt = (VT_83032278 *)lbl_8217CD88;
        mem->vt2 = lbl_8217C940;
        o = mem;
        if (fn_82FFF750(o) != 1) {
            o->vt->dtor(o);
            o = 0;
        }
    } else {
        o = 0;
    }
    return o;
}
