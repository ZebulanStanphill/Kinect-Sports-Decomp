typedef struct {
    int base;
    char rest[4];
} Sub_8302BB48;

typedef struct {
    char pad[0xc];
    Sub_8302BB48 sub;
} Inner_8302BB48;

typedef struct {
    char pad[0x18];
    Inner_8302BB48 *inner;
} Self_8302BB48;

extern int fn_8302BF38(void *p);

int fn_8302BB48(Self_8302BB48 *self)
{
    Inner_8302BB48 *in = self->inner;
    if (in != 0) {
        Sub_8302BB48 *s = &in->sub;
        return fn_8302BF38(s->rest) + s->base;
    }
    return 0;
}
