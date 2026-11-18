typedef struct Buffer_82BE6410 {
    char pad00[0x1c];
    unsigned char *data; /* 0x1c */
    int position;        /* 0x20 */
    int size;            /* 0x24 */
    int capacity;        /* 0x28 */
} Buffer_82BE6410;

extern void fn_82BE5240(Buffer_82BE6410 *buffer, int code, const char *message);

static __forceinline int IsValid(Buffer_82BE6410 *buffer)
{
    return buffer->data != 0 && buffer->capacity > 0;
}

int fn_82BE6410(Buffer_82BE6410 *buffer, int offset, int length)
{
    int i;

    if (!IsValid(buffer)) {
        fn_82BE5240(buffer, 0x65, "Can't remove data from an invalid buffer.");
        return 0;
    }
    if (offset + length > buffer->size) {
        fn_82BE5240(buffer, 0x65, "Length of data to remove will overrun buffer. Not removing.");
        return 0;
    }
    if (length == 0) {
        fn_82BE5240(buffer, 0x65, "Length of data to remove is zero.");
        return 0;
    }
    for (i = offset; i + length < buffer->size; i++) {
        buffer->data[i] = buffer->data[i + length];
    }
    buffer->size -= length;
    if (buffer->position > offset) {
        buffer->position -= length;
    }
    return 1;
}
