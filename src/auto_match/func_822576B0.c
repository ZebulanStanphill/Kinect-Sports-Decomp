typedef struct Str_822576B0 { int pad[2]; char buf[4]; unsigned cap; } Str_822576B0;
typedef struct StrP_822576B0 { int pad[2]; char *ptr; unsigned cap; } StrP_822576B0;
extern void fn_8223C200(void *, unsigned char, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);
void fn_822576B0(void *a, void *b, void *w, Str_822576B0 *s)
{
    unsigned char *buf; unsigned char *p; int n; unsigned char allzero; unsigned i;
    if (s->cap <= 4) buf = (unsigned char *)s->buf; else buf = (unsigned char *)((StrP_822576B0 *)s)->ptr;
    p = buf; n = 0;
    for (; p != buf + 4; p++) { if (*p == 0) n++; }
    allzero = n == 4;
    fn_8223C200(w, allzero, 0);
    if (allzero == 0) {
        for (i = 0; i < 4; i++) {
            unsigned char c = buf[i];
            unsigned char z = c == 0;
            fn_8223C200(w, z, 0);
            if (!z) { int bits = i != 3 ? 8 : 7; fn_8223C478(w, bits, 0); fn_828E9DB8(w, c, bits); }
        }
    }
}
