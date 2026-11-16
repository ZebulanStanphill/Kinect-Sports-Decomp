extern void MmFreePhysicalMemory(unsigned int type, void *memory);
extern void fn_8265C990(void *memory, unsigned int attributes);
extern void *memset(void *destination, int value, unsigned int size);

typedef struct Buffers_82656468 {
    void *primary;   /* 0x00 */
    void *secondary; /* 0x04 */
    char padding[0x248];
    void *extra; /* 0x250 */
    char padding2[0x10];
    int flags; /* 0x264 */
    int state; /* 0x268 */
} Buffers_82656468;

void fn_82656468(char *self)
{
    Buffers_82656468 *buffers = (Buffers_82656468 *)(self + 0x5c1c);
    unsigned int kind;
    int state;
    int index;

    if (buffers->extra != 0) {
        if ((buffers->flags & 0x08000000) == 0) {
            MmFreePhysicalMemory(2, buffers->extra);
        } else {
            fn_8265C990(buffers->extra, 0x24800000);
        }
    }
    if (buffers->primary != 0) {
        kind = buffers->flags >> 30;
        switch (kind) {
        case 0:
            MmFreePhysicalMemory(2, buffers->primary);
            break;
        case 1:
            fn_8265C990(buffers->primary, 0xb1800000);
            break;
        }
    }
    if (buffers->secondary != 0) {
        kind = (buffers->flags << 2) >> 30;
        switch (kind) {
        case 0:
            MmFreePhysicalMemory(2, buffers->secondary);
            break;
        case 1:
            fn_8265C990(buffers->secondary, 0xb1800000);
            break;
        }
    }
    state = buffers->state;
    memset(buffers, 0, sizeof(*buffers));
    buffers->state = state;
    for (index = 0; index < 41; ++index) {
        ((int *)((char *)buffers + 0x14))[index] = -1;
    }
}
