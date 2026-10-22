typedef struct Stream {
    int pad0[3];
    int hr;
    char *base;
    unsigned int size;
    unsigned int pos;
} Stream;

extern int fn_82F6EDE8(char *buf, unsigned int len, int a, int b);

void fn_82A9A1B0(Stream *s, int a, int b)
{
    int n;

    if (s->hr >= 0) {
        n = fn_82F6EDE8(s->base + s->pos, s->size - s->pos, a, b);
        if (n < 0) {
            s->hr = 0x80004005;
        } else {
            s->pos += n;
        }
    }
}
