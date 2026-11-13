/* Writes `indent` single spaces once a line has started (pending flag at +8). */
typedef struct Writer_82A99BC8 {
    int f0;
    unsigned int indent;
    int pending;
} Writer_82A99BC8;

extern void fn_82A99B70(Writer_82A99BC8 *w, const char *fmt, ...);

void fn_82A99BC8(Writer_82A99BC8 *w)
{
    unsigned int i;
    if (w->pending != 0) {
        w->pending = 0;
        for (i = 0; i < w->indent; i++) {
            fn_82A99B70(w, " ");
        }
    }
}
