typedef struct { void *stream; } Writer_827B1DA0;
extern void fn_827B19D8(void *stream, unsigned char *b);

int fn_827B1DA0(Writer_827B1DA0 *w, int v)
{
    unsigned char b;
    if (v < -0x800 || v > 0x7ff) {
        b = (unsigned char)(v << 4 | 1);
        fn_827B19D8(w->stream, &b);
        b = (unsigned char)(v >> 4);
        fn_827B19D8(w->stream, &b);
        b = (unsigned char)(v >> 12);
        fn_827B19D8(w->stream, &b);
        return 3;
    }
    b = (unsigned char)(v << 4);
    fn_827B19D8(w->stream, &b);
    b = (unsigned char)(v >> 4);
    fn_827B19D8(w->stream, &b);
    return 2;
}
