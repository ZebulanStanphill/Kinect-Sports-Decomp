typedef struct RingBuffer_82F61B68 {
    int buffer;            /* 0x0 */
    int unknown4[5];       /* 0x4 */
    unsigned int head;     /* 0x18 */
    int count;             /* 0x1c */
    int unknown20;         /* 0x20 */
    unsigned int capacity; /* 0x24 */
    unsigned int stride;   /* 0x28 */
    int unknown2C[9];      /* 0x2c */
    char *data;            /* 0x50 */
} RingBuffer_82F61B68;

long fn_82F61B68(RingBuffer_82F61B68 *ring, int index, void **out)
{
    long hr = 0;

    if (out != 0) {
        *out = 0;
        if (ring->buffer != 0) {
            if (index >= 0 && index < ring->count) {
                *out = ring->data + (ring->head - index) % ring->capacity * ring->stride;
            }
        } else {
            hr = 0x82240406;
        }
    } else {
        hr = 0x82240403;
    }
    return hr;
}
