typedef struct Pages_827B13A0 {
    char pad0[0xc];
    unsigned char **pages;
} Pages_827B13A0;

typedef struct Stream_827B13A0 {
    char pad0[0xc];
    Pages_827B13A0 *data;
} Stream_827B13A0;

extern unsigned int fn_827B0790(Stream_827B13A0 *self, unsigned int pos);

unsigned int fn_827B13A0(Stream_827B13A0 *self, unsigned int pos)
{
    unsigned int hash = 0;
    unsigned int end = fn_827B0790(self, pos);
    for (; pos < end; pos++)
        hash = hash * 33 ^ self->data->pages[pos >> 12][pos & 0xfff];
    return hash;
}
