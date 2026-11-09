struct Buf16_8223C6F8 { unsigned char b[16]; };
inline void *operator new(unsigned int, void *p) { return p; }

struct Out_8223C6F8 {
    int f0;
    int f4;
    void *f8;
    int fc;
};

extern "C" {
unsigned int fn_8223C610(void *r, int n, int a, int b);
void fn_8223C680(Out_8223C6F8 *o, int a, Buf16_8223C6F8 *buf);
void *fn_8265C9E0(unsigned int size);
void *memset(void *dst, int c, unsigned int n);
}

extern "C" void fn_8223C6F8(void *param_1, void *param_2, void *r, Out_8223C6F8 *o)
{
    Buf16_8223C6F8 buf;
    unsigned int i;

    if (fn_8223C610(r, 1, 0, 0) != 0) {
        new (&buf) Buf16_8223C6F8();
    } else {
        for (i = 0; i < 16; i++) {
            if (fn_8223C610(r, 1, 0, 0) != 0) {
                buf.b[i] = 0;
            } else {
                buf.b[i] = fn_8223C610(r, i != 16 ? 8 : 0, 0, 0);
            }
        }
    }
    if (o != 0) {
        void *p;
        o->f4 = 7;
        o->fc = 16;
        p = fn_8265C9E0(16);
        memset(p, 0, 16);
        o->f8 = p;
        fn_8223C680(o, 0, &buf);
    }
}
