extern int fn_8223C478(void *w, int n, int f);
extern unsigned char fn_828E9DB8(void *w, int v, int n);

int fn_8224BF30(void *w, const char *s)
{
    const char *p = s;
    char c = *p;
    for (;;) {
        fn_8223C478(w, 8, 0);
        if (!fn_828E9DB8(w, c, 8)) return 0;
        if (c == 0) break;
        c = *++p;
    }
    return 1;
}
