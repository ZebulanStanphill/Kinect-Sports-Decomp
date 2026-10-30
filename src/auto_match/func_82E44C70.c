extern unsigned char lbl_831882F0[];

typedef struct Block_82E44C70 {
    unsigned pad0;
    unsigned base;
    unsigned flags;
    unsigned deflt;
    unsigned char bits[4];
    unsigned vals[0x14];
    struct Block_82E44C70 *next;
} Block_82E44C70;

int fn_82E44C70(Block_82E44C70 *head, unsigned key, unsigned *out)
{
    Block_82E44C70 *n;
    unsigned base;
    unsigned idx;
    unsigned v;
    int found;
    int hr;
    if (out == 0) {
        return 0x80070057;
    }
    hr = 0x80004005;
    n = head;
    if (n != 0) {
        found = 0;
        for (; n != 0; n = n->next) {
            base = n->base;
            if (key >= base && key < base + 0x14) {
                idx = key - base;
                if (n->bits[idx >> 3] & lbl_831882F0[idx & 7]) {
                    v = n->vals[idx];
                    found = 1;
                }
                break;
            }
        }
        if (!found && (head->flags & 1)) {
            v = head->deflt;
            found = 1;
        }
        if (found) {
            *out = v;
            hr = 0;
        }
    } else {
        hr = 0x8000ffff;
    }
    return hr;
}
