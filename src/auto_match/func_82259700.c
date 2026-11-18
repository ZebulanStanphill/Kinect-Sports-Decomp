typedef struct Str_82259700 { int pad[2]; char buf[4]; unsigned cap; } Str_82259700;
typedef struct StrP_82259700 { int pad[2]; char *ptr; unsigned cap; } StrP_82259700;
extern void fn_8223C200(void *, unsigned char, int);
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, int, int);
void fn_82259700(void *a, void *b, void *w, Str_82259700 *s)
{
    unsigned char *buf; unsigned char *p; int n; unsigned char allzero; unsigned i;
    if (s->cap <= 4) buf = (unsigned char *)s->buf; else buf = (unsigned char *)((StrP_82259700 *)s)->ptr;
    p = buf; n = 0;
    for (; p != buf + 4; p++) { if (*p == 0) n++; }
    allzero = n == 4;
    fn_8223C200(w, allzero, 0);
    if (allzero == 0) {
        for (i = 0; i < 4; i++) {
            unsigned char c = buf[i];
            unsigned char z = c == 0;
            fn_8223C200(w, z, 0);
            if (!z) { int bits = i != 4 ? 8 : 0; fn_8223C478(w, bits, 0); fn_828E9DB8(w, c, bits); }
        }
    }
}
