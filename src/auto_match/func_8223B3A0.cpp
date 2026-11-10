struct Buffer_8223B3A0 { unsigned char b[25]; };
inline void *operator new(unsigned int, void *p) { return p; }

struct Out_8223B3A0 {
    int f0;
    int f4;
    void *f8;
    int fc;
};

extern "C" {
unsigned int fn_8223C610(void *r, int n, int a, int b);
void fn_8223C680(Out_8223B3A0 *o, int a, Buffer_8223B3A0 *buf);
void *fn_8265C9E0(unsigned int size);
void *memset(void *dst, int c, unsigned int n);
}

extern "C" void fn_8223B3A0(void *param_1, void *param_2, void *r, Out_8223B3A0 *o)
{
    Buffer_8223B3A0 buf;
    unsigned int i;

    if (fn_8223C610(r, 1, 0, 0) != 0) {
        new (&buf) Buffer_8223B3A0();
    } else {
        for (i = 0; i < 25; i++) {
            if (fn_8223C610(r, 1, 0, 0) != 0) {
                buf.b[i] = 0;
            } else {
                buf.b[i] = fn_8223C610(r, i == 24 ? 1 : 8, 0, 0);
            }
        }
    }
    if (o != 0) {
        void *p;
        o->f4 = 7;
        o->fc = 25;
        p = fn_8265C9E0(25);
        memset(p, 0, 25);
        o->f8 = p;
        fn_8223C680(o, 0, &buf);
    }
}
