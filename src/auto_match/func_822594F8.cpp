struct Buf5 { unsigned char b[5]; };
inline void *operator new(unsigned int, void *p) { return p; }

struct Out {
    int pad0;
    int a;
    unsigned char *buf;
    int n;
};

extern "C" {
unsigned int fn_8223C610(void *r, unsigned int n, void *a, int b);
void *fn_8265C9E0(unsigned int n);
void fn_8223C680(Out *o, int a, Buf5 *buf);
}

extern "C" void fn_822594F8(int p1, int p2, void *r, Out *o)
{
    Buf5 buf;
    unsigned int i;
    unsigned char *q;

    if (fn_8223C610(r, 1, 0, 0)) {
        new (&buf) Buf5();
    } else {
        for (i = 0; i < 5; i++) {
            if (fn_8223C610(r, 1, 0, 0)) {
                buf.b[i] = 0;
            } else {
                buf.b[i] = fn_8223C610(r, i == 4 ? 1 : 8, 0, 0);
            }
        }
    }
    if (o) {
        o->a = 7;
        o->n = 5;
        q = (unsigned char *)fn_8265C9E0(5);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        q[4] = 0;
        o->buf = q;
        fn_8223C680(o, 0, &buf);
    }
}
