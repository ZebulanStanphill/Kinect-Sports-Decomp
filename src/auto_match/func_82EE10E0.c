extern void *memmove(void *dst, const void *src, unsigned n);

typedef struct Value_82EE10E0 {
    unsigned __int64 a;
    unsigned __int64 b;
    unsigned __int64 c;
} Value_82EE10E0;

typedef struct Block_82EE10E0 {
    unsigned pad0;
    unsigned base;
    unsigned pad8[7];
    unsigned char bits[4];
    Value_82EE10E0 vals[0x14];
    struct Block_82EE10E0 *next;
} Block_82EE10E0;

extern int fn_82EE0958(Block_82EE10E0 *head, unsigned key, Value_82EE10E0 value);
extern unsigned char lbl_8318A10C;
extern unsigned char lbl_8318A114[];
extern unsigned char lbl_8318A120[];

int fn_82EE10E0(Block_82EE10E0 *head, unsigned key)
{
    Block_82EE10E0 *n;
    unsigned base;
    unsigned off;
    unsigned j;
    unsigned char m;
    int inside;
    int hr;
    unsigned char b;
    unsigned char old;
    unsigned char *pb;

    n = head;
    while (n != 0 && key >= n->base + 0x14) {
        n = n->next;
    }
    hr = 0;
    while (n != 0) {
        base = n->base;
        inside = 0;
        off = 0;
        if (key >= base) {
            inside = 1;
            off = key - base;
        } else {
            if (n->bits[0] & lbl_8318A10C) {
                hr = fn_82EE0958(head, base - 1, n->vals[0]);
                if (hr < 0) {
                    return hr;
                }
            }
        }
        memmove(&n->vals[off], &n->vals[off + 1], (0x13 - off) * sizeof(Value_82EE10E0));
        pb = &n->bits[off >> 3];
        j = off >> 3;
        old = *pb;
        for (; j < 3; j++) {
            b = n->bits[j] << 1;
            n->bits[j] = b;
            if (j < 2 && (n->bits[j + 1] & 0x80)) {
                n->bits[j] = b | 1;
            }
        }
        m = off & 7;
        if (inside && m != 0) {
            *pb = lbl_8318A114[8 - m] & *pb;
            *pb = (lbl_8318A120[m] & old) | *pb;
        }
        n = n->next;
    }
    return hr;
}
