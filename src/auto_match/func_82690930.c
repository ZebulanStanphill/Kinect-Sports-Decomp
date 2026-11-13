typedef struct Buf_82690930 {
    int count;
    unsigned char data[0x80];
} Buf_82690930;

typedef struct Obj_82690930 {
    Buf_82690930 bufs[3];
    int f18c;
} Obj_82690930;

extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void Buf_init(Buf_82690930 *b)
{
    b->count = 0;
    memset(b->data, 0, sizeof(b->data));
}

void fn_82690930(Obj_82690930 *self)
{
    Buf_init(&self->bufs[0]);
    Buf_init(&self->bufs[1]);
    Buf_init(&self->bufs[2]);
    self->f18c = 0;

}
