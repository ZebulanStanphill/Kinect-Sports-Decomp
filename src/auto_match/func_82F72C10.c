extern char lbl_82169D88[];
extern char lbl_832635A0[];
extern void *fn_82F72318(void *heap, int size, int flags);

typedef struct Buffer_82F72C10 {
    void *vtable;
    unsigned char *data;
    int size;
} Buffer_82F72C10;

Buffer_82F72C10 *fn_82F72C10(Buffer_82F72C10 *self, const unsigned char *src, int size)
{
    unsigned char *p;

    self->vtable = lbl_82169D88;
    if (size == 0 || src == 0) {
        self->data = 0;
        self->size = 0;
    } else {
        p = (unsigned char *)fn_82F72318(lbl_832635A0, size, 0);
        self->size = size;
        self->data = p;
        if (p != 0) {
            unsigned int i;
            for (i = 0; i < (unsigned int)size; i++) {
                p[i] = src[i];
            }
        }
    }
    return self;
}
