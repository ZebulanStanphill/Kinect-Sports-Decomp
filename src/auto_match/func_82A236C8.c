typedef struct Entry_82A236C8 {
    unsigned int slot : 8;    /* 0x0 */
    unsigned int count : 8;   /* 0x1 */
    unsigned int offset : 16; /* 0x2 */
} Entry_82A236C8;

typedef struct Block_82A236C8 {
    char pad0[0x4];
    unsigned short tableOffset; /* 0x4 */
    unsigned short elementSize; /* 0x6 */
    unsigned short entryCount;  /* 0x8 */
    char padA[0x2];
    unsigned short firstEntry; /* 0xc */
} Block_82A236C8;

char *fn_82A236C8(char *data, int *count)
{
    unsigned int i;
    unsigned int slot;
    unsigned int entries;
    char *tag;
    Block_82A236C8 *block;
    Entry_82A236C8 *entry;

    i = 0;
    tag = data - 4;
    block = (Block_82A236C8 *)(tag - *(unsigned short *)tag);
    entries = block->entryCount;
    slot = (unsigned int)(data - (char *)block - 0x14) / block->elementSize;
    for (; i < entries; i++) {
        entry = (Entry_82A236C8 *)((char *)block + block->tableOffset + (i - block->firstEntry) * 4);
        if (entry->slot == slot) {
            break;
        }
    }
    entry = (Entry_82A236C8 *)((char *)block + block->tableOffset + (i - block->firstEntry) * 4);
    *count = entry->count - 1;
    return (char *)block + entry->offset + 1;
}
