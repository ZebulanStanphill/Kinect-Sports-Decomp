typedef struct Buf_82691000 {
    int count;
    unsigned char data[0x80];
} Buf_82691000;

typedef struct Obj_82691000 {
    Buf_82691000 bufs[3];
    int f18c;
} Obj_82691000;

extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void Buf_init(Buf_82691000 *b)
{
    b->count = 0;
    memset(b->data, 0, sizeof(b->data));
}

Obj_82691000 *fn_82691000(Obj_82691000 *self)
{
    Buf_init(&self->bufs[0]);
    Buf_init(&self->bufs[1]);
    Buf_init(&self->bufs[2]);
    self->f18c = 0;
    return self;
}
