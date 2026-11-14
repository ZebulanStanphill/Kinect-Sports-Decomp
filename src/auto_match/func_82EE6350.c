typedef struct Item_82EE6350 {
    int data[2];
} Item_82EE6350;

typedef struct Block_82EE6350 {
    unsigned char unk0[0x4];
    unsigned int base;
    unsigned char unk8[0xc];
    unsigned char used[0x4];
    Item_82EE6350 items[20];
    struct Block_82EE6350 *next;
} Block_82EE6350;

extern unsigned char lbl_8318A6E8[8];

int fn_82EE6350(Block_82EE6350 *head, unsigned int index, Item_82EE6350 **out)
{
    int hr;
    Block_82EE6350 *block;

    if (out == 0) {
        return 0x80070057;
    }
    *out = 0;
    block = head;
    hr = 0x80004005;
    for (; block != 0; block = block->next) {
        if (index >= block->base && index < block->base + 20) {
            index -= block->base;
            if (block->used[index >> 3] & lbl_8318A6E8[index & 7]) {
                *out = &block->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
