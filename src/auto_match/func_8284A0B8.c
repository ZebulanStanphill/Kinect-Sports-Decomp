typedef struct { void *data; int owned; } Buf_8284A0B8;
typedef struct { char pad0[0x28]; void *data; unsigned int size; } Src_8284A0B8;
extern void *fn_8265CA60(unsigned int size);
extern void *memcpy(void *dst, const void *src, unsigned int n);

Buf_8284A0B8 *fn_8284A0B8(Buf_8284A0B8 *self, Src_8284A0B8 *src)
{
    void *p = fn_8265CA60(src->size);
    self->data = p;
    memcpy(self->data, src->data, src->size);
    self->owned = 1;
    return self;
}
