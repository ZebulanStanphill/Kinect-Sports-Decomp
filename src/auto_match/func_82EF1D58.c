typedef struct Item_82EF1D58 {
    int data[10];
} Item_82EF1D58;

typedef struct Block_82EF1D58 {
    unsigned char unk0[0x8];
    unsigned int base;
    unsigned char unkc[0x2c];
    unsigned char used[0x8];
    Item_82EF1D58 items[20];
    struct Block_82EF1D58 *next;
} Block_82EF1D58;

extern unsigned char lbl_8318A754[8];

int fn_82EF1D58(Block_82EF1D58 *head, unsigned int index, Item_82EF1D58 **out)
{
    int hr;
    Block_82EF1D58 *block;

    if (out == 0) {
        return 0x80070057;
    }
    *out = 0;
    block = head;
    hr = 0x80004005;
    for (; block != 0; block = block->next) {
        if (index >= block->base && index < block->base + 20) {
            index -= block->base;
            if (block->used[index >> 3] & lbl_8318A754[index & 7]) {
                *out = &block->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
