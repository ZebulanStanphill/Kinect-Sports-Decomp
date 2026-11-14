typedef struct Item_82E78228 {
    int data[3];
} Item_82E78228;

typedef struct Block_82E78228 {
    unsigned char unk0[0x4];
    unsigned int base;
    unsigned char unk8[0x10];
    unsigned char used[0x4];
    Item_82E78228 items[20];
    struct Block_82E78228 *next;
} Block_82E78228;

extern unsigned char lbl_831888F8[8];

int fn_82E78228(Block_82E78228 *head, unsigned int index, Item_82E78228 **out)
{
    int hr;
    Block_82E78228 *block;

    if (out == 0) {
        return 0x80070057;
    }
    *out = 0;
    block = head;
    hr = 0x80004005;
    for (; block != 0; block = block->next) {
        if (index >= block->base && index < block->base + 20) {
            index -= block->base;
            if (block->used[index >> 3] & lbl_831888F8[index & 7]) {
                *out = &block->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
