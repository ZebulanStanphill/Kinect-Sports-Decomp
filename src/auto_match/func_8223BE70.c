typedef struct Str_8223BE70 { int pad[2]; char buf[4]; unsigned cap; } Str_8223BE70;
typedef struct StrP_8223BE70 { int pad[2]; char *ptr; unsigned cap; } StrP_8223BE70;
extern void fn_8223C200(void *, unsigned char, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);
void fn_8223BE70(void *a, void *b, void *w, Str_8223BE70 *s)
{
    unsigned char *buf; unsigned char *p; int n; unsigned char allzero; unsigned i;
    if (s->cap <= 4) buf = (unsigned char *)s->buf; else buf = (unsigned char *)((StrP_8223BE70 *)s)->ptr;
    p = buf; n = 0;
    for (; p != buf + 8; p++) { if (*p == 0) n++; }
    allzero = n == 8;
    fn_8223C200(w, allzero, 0);
    if (allzero == 0) {
        for (i = 0; i < 8; i++) {
            unsigned char c = buf[i];
            unsigned char z = c == 0;
            fn_8223C200(w, z, 0);
            if (!z) { int bits = i != 8 ? 8 : 0; fn_8223C478(w, bits, 0); fn_828E9DB8(w, c, bits); }
        }
    }
}
