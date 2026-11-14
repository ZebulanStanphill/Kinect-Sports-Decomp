typedef struct Item_82EEFD30 {
    int data[2];
} Item_82EEFD30;

typedef struct Block_82EEFD30 {
    unsigned char unk0[0x4];
    unsigned int base;
    unsigned char unk8[0xc];
    unsigned char used[0x4];
    Item_82EEFD30 items[20];
    struct Block_82EEFD30 *next;
} Block_82EEFD30;

extern unsigned char lbl_8318A74C[8];

int fn_82EEFD30(Block_82EEFD30 *head, unsigned int index, Item_82EEFD30 **out)
{
    int hr;
    Block_82EEFD30 *block;

    if (out == 0) {
        return 0x80070057;
    }
    *out = 0;
    block = head;
    hr = 0x80004005;
    for (; block != 0; block = block->next) {
        if (index >= block->base && index < block->base + 20) {
            index -= block->base;
            if (block->used[index >> 3] & lbl_8318A74C[index & 7]) {
                *out = &block->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
