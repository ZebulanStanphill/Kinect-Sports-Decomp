typedef struct Item_82EEFC00 {
    int data[4];
} Item_82EEFC00;

typedef struct Block_82EEFC00 {
    unsigned char unk0[0x4];
    unsigned int base;
    unsigned char unk8[0x14];
    unsigned char used[0x4];
    Item_82EEFC00 items[20];
    struct Block_82EEFC00 *next;
} Block_82EEFC00;

extern unsigned char lbl_8318A744[8];

int fn_82EEFC00(Block_82EEFC00 *head, unsigned int index, Item_82EEFC00 **out)
{
    int hr;
    Block_82EEFC00 *block;

    if (out == 0) {
        return 0x80070057;
    }
    *out = 0;
    block = head;
    hr = 0x80004005;
    for (; block != 0; block = block->next) {
        if (index >= block->base && index < block->base + 20) {
            index -= block->base;
            if (block->used[index >> 3] & lbl_8318A744[index & 7]) {
                *out = &block->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
