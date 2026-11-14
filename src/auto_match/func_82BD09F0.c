typedef struct Item_82BD09F0 {
    char pad0[0x38];
    int index;
    char pad3c[0xe4 - 0x3c];
    unsigned int pad : 24;
    unsigned int mapped : 1;
} Item_82BD09F0;

extern int *lbl_83223EC0;

int fn_82BD09F0(void *self, Item_82BD09F0 *item)
{
    int index = item->index;
    if ((unsigned char)item->mapped) {
        return lbl_83223EC0[index];
    }
    return index;
}
