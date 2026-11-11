extern int fn_828E9D90(void *s);
extern int fn_828E9DA8(void *s);
extern int fn_828E9FF8(void *s, int n);

typedef struct {
    int f0;
    int f4;
    unsigned char value;
} Out_828A8DA8;

void fn_828A8DA8(void *self, void *a, void *stream, Out_828A8DA8 *out)
{
    int r;
    if (fn_828E9DA8(stream) - fn_828E9D90(stream) >= 1) {
        r = fn_828E9FF8(stream, 1);
    } else {
        r = 0;
    }
    if (out != 0) {
        out->f4 = 0;
        out->value = r != 0;
    }
}
