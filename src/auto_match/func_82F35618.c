extern unsigned char lbl_831B9F98[];

typedef struct Pool_82F35618 {
    int unk0;
    unsigned int first;
    int unk8;
    int unkC;
    unsigned char used[4];
    int items[20];
    struct Pool_82F35618 *next;
} Pool_82F35618;

long fn_82F35618(Pool_82F35618 *pool, unsigned int index, int **out)
{
    long hr;
    Pool_82F35618 *p;

    if (out == 0) {
        return 0x80070057;
    }
    p = pool;
    *out = 0;
    hr = 0x80004005;
    for (; p != 0; p = p->next) {
        if (index >= p->first && index < p->first + 20) {
            index -= p->first;
            if (p->used[index >> 3] & lbl_831B9F98[index & 7]) {
                *out = &p->items[index];
                hr = 0;
            }
            break;
        }
    }
    return hr;
}
