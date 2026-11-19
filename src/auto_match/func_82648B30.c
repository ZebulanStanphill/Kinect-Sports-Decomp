typedef struct Chunk_82648B30 {
    union {
        unsigned char bytes[8];
        int words[2];
    } used; /* 0x00 */

    unsigned int memory;         /* 0x08 */
    struct Chunk_82648B30 *next; /* 0x0c */
} Chunk_82648B30;

typedef struct Device_82648B30 {
    char pad0[0x5510];
    Chunk_82648B30 chunks; /* 0x5510 */
} Device_82648B30;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);

static int IsBitSet(unsigned int value, unsigned char bit)
{
    return (value >> bit) & 1;
}

int fn_82648B30(Device_82648B30 *device, Chunk_82648B30 **outChunk, unsigned int *outAddress)
{
    Chunk_82648B30 *chunk;
    Chunk_82648B30 *added;
    unsigned int byte;
    unsigned int bit;

    *outAddress = 0;
    chunk = &device->chunks;
    while (chunk->used.words[0] == -1 && chunk->used.words[1] == -1) {
        if (chunk->next == 0) {
            added = (Chunk_82648B30 *)fn_8265C940(0x1780, 0x64800000);
            if (added == 0) {
                return 0x8007000e;
            }
            added->memory = (unsigned int)fn_8265C940(0x1000, 0xbc800000);
            if (added->memory == 0) {
                fn_8265C990(added, 0x24800000);
                return 0x8007000e;
            }
            chunk->next = added;
            chunk = added;
            break;
        }
        chunk = chunk->next;
    }
    for (byte = 0; byte < 8; byte++) {
        if (chunk->used.bytes[byte] != 0xff) {
            break;
        }
    }
    for (bit = 0; bit < 8; bit++) {
        if (!IsBitSet(chunk->used.bytes[byte], (unsigned char)bit)) {
            break;
        }
    }
    *outChunk = chunk;
    chunk->used.bytes[byte] |= 1 << bit;
    *outAddress = chunk->memory + (byte * 8 + bit) * 0x40;
    return 0;
}
