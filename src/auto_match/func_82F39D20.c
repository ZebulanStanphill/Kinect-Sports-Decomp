extern unsigned char lbl_831B9FE0[];

typedef struct Item_82F39D20 {
    int words[2];
} Item_82F39D20;

typedef struct Pool_82F39D20 {
    int unk0;
    unsigned int first;
    int unk8[3];
    unsigned char used[4];
    Item_82F39D20 items[20];
    struct Pool_82F39D20 *next;
} Pool_82F39D20;

long fn_82F39D20(Pool_82F39D20 *pool, unsigned int index, Item_82F39D20 **out)
{
    long hr;
    Pool_82F39D20 *p;

    if (out == 0) {
        return 0x80070057;
    }
    p = pool;
    *out = 0;
    hr = 0x80004005;
    for (; p != 0; p = p->next) {
        if (index >= p->first && index < p->first + 20) {
            index -= p->first;
            if (p->used[index >> 3] & lbl_831B9FE0[index & 7]) {
                *out = &p->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
