typedef struct Buffer_827AF0F8 {
    int pad00;
    unsigned int size; /* 0x04 */
} Buffer_827AF0F8;

typedef struct Reader_827AF0F8 {
    Buffer_827AF0F8 *buffer; /* 0x00 */
    int pad04;
    unsigned int position; /* 0x08 */
    char pad0C[0x10];
    void *current; /* 0x1C */
} Reader_827AF0F8;

extern void fn_827AEE78(Reader_827AF0F8 *self);

static unsigned char IsAtEnd(Reader_827AF0F8 *self)
{
    return self->position >= self->buffer->size || self->current == 0;
}

void fn_827AF0F8(Reader_827AF0F8 *self)
{
    if (!IsAtEnd(self)) {
        fn_827AEE78(self);
    }
}
