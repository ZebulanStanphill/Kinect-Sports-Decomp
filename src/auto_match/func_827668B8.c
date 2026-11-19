typedef struct Buffer_827668B8 {
    int pad[3];            /* 0x0 */
    unsigned char **pages; /* 0xc */
} Buffer_827668B8;

typedef struct Reader_827668B8 {
    Buffer_827668B8 *buffer; /* 0x0 */
} Reader_827668B8;

extern const unsigned char lbl_82014C50[16];

static __forceinline unsigned char Byte(Reader_827668B8 *self, unsigned int offset)
{
    return self->buffer->pages[offset >> 12][offset & 0xfff];
}

unsigned int fn_827668B8(Reader_827668B8 *self, unsigned int offset, unsigned char *out)
{
    unsigned int extra;
    unsigned int i;

    *out = Byte(self, offset++);
    extra = lbl_82014C50[*out & 0xf];
    out++;
    for (i = 0; i < extra; i++) {
        *out++ = Byte(self, offset++);
    }
    return extra + 1;
}
