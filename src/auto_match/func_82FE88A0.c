typedef unsigned int size_t;
extern int atexit(void (*)(void));
extern size_t strlen(const char *);
extern unsigned int lbl_832643A4;
extern void fn_83141D60(void);

unsigned int fn_82FE88A0(const char *s)
{
    const unsigned char *p;
    const unsigned char *end;
    unsigned int h;

    if ((lbl_832643A4 & 1) == 0) {
        lbl_832643A4 |= 1;
        atexit(fn_83141D60);
    }
    end = (const unsigned char *)s + strlen(s);
    h = 0x811c9dc5;
    for (p = (const unsigned char *)s; p < end; p++) {
        h = (h * 0x1000193) ^ *p;
    }
    return h;
}
