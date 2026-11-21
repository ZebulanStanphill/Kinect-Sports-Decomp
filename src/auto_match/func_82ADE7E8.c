typedef struct Device_82ADE7E8 Device_82ADE7E8;

typedef struct Slot_82ADE7E8 {
    Device_82ADE7E8 *device; /* 0x00 */
    int pad4;                /* 0x04 */
    __int64 bits[4];         /* 0x08 */
} Slot_82ADE7E8;

typedef struct Block_82ADE7E8 {
    struct Block_82ADE7E8 *nextFree; /* 0x00 */
    char pad4[0xc];
    char *data[4];          /* 0x10 */
    Slot_82ADE7E8 slots[4]; /* 0x20 */
    char padc0[0x8];
    struct Block_82ADE7E8 *next; /* 0xc8 */
    char padcc[0x4];
} Block_82ADE7E8;

struct Device_82ADE7E8 {
    char pad0[0x2a0];
    unsigned int stride; /* 0x2a0 */
    char pad2a4[0x2b8 - 0x2a4];
    Block_82ADE7E8 *blocks;     /* 0x2b8 */
    int blockCount;             /* 0x2bc */
    Block_82ADE7E8 *freeBlocks; /* 0x2c0 */
    char pad2c4[0x318 - 0x2c4];
    unsigned int slotBits; /* 0x318 */
};

extern void *memset(void *dst, int value, unsigned int size);
extern void *fn_82ABE9F0(Device_82ADE7E8 *device, unsigned int size, int tag);
extern void fn_82AE5AC8(Slot_82ADE7E8 *slot, unsigned int first, unsigned int count);

Block_82ADE7E8 *fn_82ADE7E8(Device_82ADE7E8 *device)
{
    unsigned int size;
    Block_82ADE7E8 *block;
    char *data;
    unsigned int bits;
    Slot_82ADE7E8 *slot;
    int i;
    int j;

    size = device->stride * 32 + sizeof(Block_82ADE7E8);
    block = device->freeBlocks;
    if (block != 0) {
        device->freeBlocks = block->nextFree;
        memset(block, 0, 200);
        memset((char *)block + sizeof(Block_82ADE7E8), 0, size - sizeof(Block_82ADE7E8));
    } else {
        block = (Block_82ADE7E8 *)fn_82ABE9F0(device, size, 0x34);
        block->next = device->blocks;
        device->blocks = block;
    }
    device->blockCount++;
    data = (char *)block + sizeof(Block_82ADE7E8);
    for (i = 0; i < 4; i++) {
        block->data[i] = data;
        data += device->stride * 8;
        slot = &block->slots[i];
        slot->device = device;
        for (j = 0; j < 4; j++) {
            slot->bits[j] = 0;
        }
        bits = device->slotBits != 0 ? device->slotBits : 32;
        if (bits < 64) {
            fn_82AE5AC8(slot, bits, 64 - bits);
        }
    }
    return block;
}
