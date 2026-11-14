extern unsigned char lbl_8318A75C[];

typedef struct Item_82EF2CB8 {
    int words[6];
} Item_82EF2CB8;

typedef struct Pool_82EF2CB8 {
    int unk0;
    unsigned int first;
    int unk8[7];
    unsigned char used[4];
    Item_82EF2CB8 items[20];
    struct Pool_82EF2CB8 *next;
} Pool_82EF2CB8;

long fn_82EF2CB8(Pool_82EF2CB8 *pool, unsigned int index, Item_82EF2CB8 **out)
{
    long hr;
    Pool_82EF2CB8 *p;

    if (out == 0) {
        return 0x80070057;
    }
    p = pool;
    *out = 0;
    hr = 0x80004005;
    for (; p != 0; p = p->next) {
        if (index >= p->first && index < p->first + 20) {
            index -= p->first;
            if (p->used[index >> 3] & lbl_8318A75C[index & 7]) {
                *out = &p->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
