typedef struct Buffer_82E21028 {
    unsigned char wide;
    int used;
    unsigned int capacity;
    unsigned int length;
    void *data;
} Buffer_82E21028;

extern void *fn_8265C9E0(unsigned int size);

Buffer_82E21028 *fn_82E21028(Buffer_82E21028 *b, unsigned int n, unsigned char wide)
{
    b->wide = wide;
    b->length = n;
    b->capacity = n;
    {
        unsigned int bytes = n;
        if (wide) {
            bytes = n * 2;
        }
        b->data = fn_8265C9E0(bytes);
    }
    b->used = 0;
    return b;
}
