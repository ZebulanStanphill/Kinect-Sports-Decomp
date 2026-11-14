typedef struct List_82BC59C8 { int pad0; unsigned int count; unsigned int *items; } List_82BC59C8;
typedef struct Block_82BC59C8 { char pad[0x3c]; List_82BC59C8 *list; } Block_82BC59C8;

static unsigned char GetItem(List_82BC59C8 *list, unsigned int index, unsigned int *out)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *out = list->items[index];
    return 1;
}

int fn_82BC59C8(Block_82BC59C8 *self, unsigned int value)
{
    int n = 1;
    unsigned int item = 0;
    unsigned int i;
    for (i = 0; GetItem(self->list, i, &item); i++) {
        if (value == item) {
            return n;
        }
        n++;
    }
    return -1;
}
