extern unsigned char lbl_831B9FE8[];

typedef struct Item_82F39E50 {
    int words[55];
} Item_82F39E50;

typedef struct Pool_82F39E50 {
    int unk0;
    unsigned int first;
    int unk8[56];
    unsigned char used[4];
    Item_82F39E50 items[20];
    struct Pool_82F39E50 *next;
} Pool_82F39E50;

long fn_82F39E50(Pool_82F39E50 *pool, unsigned int index, Item_82F39E50 **out)
{
    long hr;
    Pool_82F39E50 *p;

    if (out == 0) {
        return 0x80070057;
    }
    p = pool;
    *out = 0;
    hr = 0x80004005;
    for (; p != 0; p = p->next) {
        if (index >= p->first && index < p->first + 20) {
            index -= p->first;
            if (p->used[index >> 3] & lbl_831B9FE8[index & 7]) {
                *out = &p->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
