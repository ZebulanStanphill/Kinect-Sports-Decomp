extern void fn_8223C478(void *, unsigned, int);
extern void fn_8288B4F0(void *, unsigned, void *);
extern unsigned short *fn_8288DD10(void *, unsigned);
extern void *fn_828A12E8(void *);
extern void fn_828E9DB8(void *, unsigned short, unsigned);

typedef struct { unsigned short a; unsigned short b; unsigned short c; unsigned char pad6; unsigned char flag; } In_828B5C88;

void fn_828B5C88(In_828B5C88 *p, void *u, void *w)
{
    unsigned v;
    unsigned n;
    unsigned x;
    char *e;

    if (p->flag != 0) {
        v = p->b;
    } else {
        v = 0x8000;
    }
    fn_8288B4F0(fn_828A12E8(u), v, w);
    if (p->flag != 0) {
        v = p->b;
        e = (char *)fn_8288DD10(fn_828A12E8(u), v);
        x = p->a;
        n = *(unsigned short *)(e + 0x20);
        fn_8223C478(w, 2, 0);
        fn_828E9DB8(w, x, 2);
        x = p->c;
        fn_8223C478(w, n, 0);
        fn_828E9DB8(w, x, n);
    }
}
