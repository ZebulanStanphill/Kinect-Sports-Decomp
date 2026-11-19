extern void *memset(void *dest, int value, unsigned int count);

typedef struct Entry_82F24798 {
    char data[0xc];
} Entry_82F24798;

typedef struct Context_82F24798 {
    char pad0000[0x2cac];
    Entry_82F24798 entries[0x200]; /* 0x2cac */
    Entry_82F24798 *free[0x200];   /* 0x44ac */
    char hashTable[0x100];         /* 0x4cac */
    int freePosition;              /* 0x4dac */
    int blockCount;                /* 0x4db0 */
    char pad4db4[0x73f4 - 0x4db4];
    char *blocks; /* 0x73f4 */
} Context_82F24798;

char *fn_82F24798(Context_82F24798 *context)
{
    char *block;
    int count;
    int i;

    for (;;) {
        count = context->blockCount;
        block = context->blocks + count * 0x4c0;
        if (count <= 7) {
            break;
        }
        for (i = context->freePosition; i < 0x200; i++) {
            context->free[i] = &context->entries[i];
        }
        context->freePosition = 0x1ff;
        memset(context->hashTable, 0, 0x100);
        context->blockCount = 0;
    }
    context->blockCount++;
    return block;
}
