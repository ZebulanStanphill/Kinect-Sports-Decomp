typedef struct Object_83055310 {
    void *vtable; /* 0x0 */
    unsigned char pad4[0x14];
    unsigned __int64 base; /* 0x18 */
    int blockSize;         /* 0x20 */
    unsigned char pad24[0x48];
    int blockCount; /* 0x6c */
    unsigned char pad70[0x40];
    unsigned __int64 stamp;     /* 0xb0 */
    unsigned char pending : 1;  /* 0xb8, 0x80 */
    unsigned char detached : 1; /* 0xb8, 0x40 */
    unsigned char bits : 6;
    unsigned char padB9[7];
} Object_83055310;

unsigned int fn_83055310(Object_83055310 *object, unsigned __int64 position, unsigned int count)
{
    unsigned __int64 end;
    unsigned __int64 limit;

    end = position + count;
    limit = (unsigned int)(object->blockCount * object->blockSize) + object->base;
    if (end <= limit) {
        object->stamp = end;
    } else {
        object->stamp = limit;
        count = (unsigned int)limit - (unsigned int)position;
    }
    object->pending = 1;
    return count;
}
