extern int fn_828E9D90(void *s);
extern int fn_828E9DA8(void *s);
extern int fn_828E9FF8(void *s, int n);

void fn_828ABA60(void *self, void *stream, unsigned char *out)
{
    int r;
    if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= 1) {
        r = fn_828E9FF8(stream, 1);
    } else {
        r = 0;
    }
    if (out != 0) {
        *out = r != 0;
    }
}
