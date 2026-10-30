extern unsigned char lbl_8318A724[];

typedef struct Block_82EED9D0 {
    unsigned pad0;
    unsigned base;
    unsigned flags;
    unsigned deflt;
    unsigned char bits[4];
    unsigned vals[0x14];
    struct Block_82EED9D0 *next;
} Block_82EED9D0;

int fn_82EED9D0(Block_82EED9D0 *head, unsigned key, unsigned *out)
{
    Block_82EED9D0 *n;
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
                if (n->bits[idx >> 3] & lbl_8318A724[idx & 7]) {
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
