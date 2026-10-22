typedef struct {
    char pad0[0x48];
    int f48;
    unsigned int pos;
} Stream;

typedef struct {
    char pad0[8];
    Stream *s;
} Obj;

extern void fn_826E7110(Stream *s, int pos);

unsigned int fn_826E7268(Obj *self, int offset, unsigned int whence)
{
    Stream *s = self->s;
    if (s == 0) {
        return 0xffffffff;
    }
    if (s->f48 != 0) {
        return s->pos;
    }
    switch (whence) {
    case 2:
        fn_826E7110(s, 0x7fffffff);
        if (offset == 0) {
            break;
        }
        s = self->s;
        /* fall through */
    case 1:
        offset += s->pos;
        /* fall through */
    case 0:
        fn_826E7110(s, offset);
        break;
    }
    return self->s->pos;
}
