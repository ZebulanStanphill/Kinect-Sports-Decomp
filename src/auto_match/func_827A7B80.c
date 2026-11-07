typedef struct Stream_827A7B80 {
    int a;
    int b;
    int c;
    int d;
    int e0;
    int e1;
    int e2;
    int e3;
    int e4;
    unsigned char f;
    unsigned char g;
} Stream_827A7B80;

typedef struct Obj_827A7B80 {
    void *vt;
    int p;
    int a;
    int b;
    int c;
} Obj_827A7B80;

extern char lbl_82015C38[];
extern char lbl_82015C48[];
extern int fn_827A75A8(Stream_827A7B80 *s, int a2, int a3, Obj_827A7B80 *o, int *out);
extern void fn_8267BE38(int p);

int fn_827A7B80(int param_1, int param_2, int param_3)
{
    int r;
    Obj_827A7B80 o;
    Stream_827A7B80 s;

    s.b = 0;
    s.a = 0xb;
    o.vt = lbl_82015C48;
    s.c = 0;
    s.d = 0xb;
    s.e0 = 0;
    s.e1 = 0;
    s.e2 = 0;
    s.e3 = 0;
    s.e4 = 0;
    s.f = 0;
    s.g = 0;
    o.a = 0;
    o.b = 0;
    o.c = 0;
    o.p = param_1;
    r = fn_827A75A8(&s, param_2, param_3, &o, &o.a);
    o.vt = lbl_82015C38;
    fn_8267BE38(o.a);
    fn_8267BE38(s.e2);
    return r;
}
