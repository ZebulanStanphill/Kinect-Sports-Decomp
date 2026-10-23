struct Buf4 { unsigned char b[4]; };
inline void *operator new(unsigned int, void *p) { return p; }

struct Out {
    int f0;
    int f4;
    int f8;
    int fc;
};

extern "C" {
unsigned int fn_8223C610(void *r, int n, int a, int b);
void fn_8223C680(Out *o, int a, Buf4 *buf);
}

extern "C" void fn_82235378(void *param_1, void *param_2, void *r, Out *o)
{
    Buf4 buf;
    unsigned int i;

    if (fn_8223C610(r, 1, 0, 0) != 0) {
        new (&buf) Buf4();
    } else {
        for (i = 0; i < 4; i++) {
            if (fn_8223C610(r, 1, 0, 0) != 0) {
                buf.b[i] = 0;
            } else {
                buf.b[i] = fn_8223C610(r, i == 3 ? 5 : 8, 0, 0);
            }
        }
    }
    if (o != 0) {
        o->f8 = 0;
        o->f4 = 7;
        o->fc = 4;
        fn_8223C680(o, 0, &buf);
    }
}
