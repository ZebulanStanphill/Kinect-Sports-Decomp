typedef struct Res {
    int pad0;
    unsigned char b4;
    char pad5[3];
    int v8;
} Res;

typedef struct Inner {
    char pad0[0xc];
    int type;
    char pad10[0x24];
    struct Inner *p34;
} Inner;

typedef struct Arg {
    char pad0[0x10];
    Inner *inner;
} Arg;

typedef struct Self {
    char pad0[0x100];
    unsigned char b100;
    char pad101[7];
    unsigned int flags;
} Self;

extern Res *fn_82D41968(Inner *p, int id);

void fn_82572970(Self *self, Arg *arg, int id, unsigned char *outb, int *outv)
{
    Res *r;
    Inner *in;

    if (id != -1 && arg != 0) {
        if (arg->inner->type == 10 && (in = arg->inner->p34, in->type == 0xe)) {
            r = fn_82D41968(in, id);
        } else {
            r = 0;
        }
        if (r != 0) {
            *outb = r->b4;
            *outv = r->v8;
            goto done;
        }
    }
    *outb = 0;
    *outv = 0;
done:
    if (*outb == 0) {
        unsigned char c;
        if ((self->flags & 0x10) == 0) {
            c = self->b100;
        } else {
            c = 0;
        }
        *outb = c;
    }
}
