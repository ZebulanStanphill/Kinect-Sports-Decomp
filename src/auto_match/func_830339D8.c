extern void fn_8301B338(void *mgr, void *res);
extern void *lbl_832642F8;

typedef struct Inner {
    void *res;
} Inner;

typedef struct Handle {
    int a;
    int b;
    Inner *inner;
    unsigned char c;
    unsigned char d;
    int e;
    int f;
} Handle;

Handle *fn_830339D8(Handle *self, Handle *other)
{
    self->a = other->a;
    self->b = other->b;
    self->inner = other->inner;
    self->c = other->c;
    self->d = other->d;
    self->e = 0;
    self->f = other->f;
    if (lbl_832642F8 != 0 && self->inner->res != 0) {
        fn_8301B338(lbl_832642F8, self->inner->res);
    }
    return self;
}
