extern void *memmove(void *dst, const void *src, unsigned n);
extern int fn_82E3BBD0(void *head, unsigned key, unsigned arg);
extern unsigned char lbl_831882E8;
extern unsigned char lbl_8318A6D4[];
extern unsigned char lbl_8318A6C8[];

typedef struct Block_82EE3360 {
    unsigned pad0;
    unsigned base;
    unsigned flags;
    unsigned short pad3;
    unsigned char bits[4];
    unsigned short vals[0x14];
    struct Block_82EE3360 *next;
} Block_82EE3360;

int fn_82EE3360(Block_82EE3360 *head, unsigned key)
{
    Block_82EE3360 *n;
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
            if (n->bits[0] & lbl_831882E8) {
                hr = fn_82E3BBD0(head, base - 1, n->vals[0]);
                if (hr < 0) {
                    return hr;
                }
            }
        }
        memmove(&n->vals[off], &n->vals[off + 1], (0x13 - off) * 2);
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
            *pb = lbl_8318A6C8[8 - m] & *pb;
            *pb = (lbl_8318A6D4[m] & old) | *pb;
        }
        n = n->next;
    }
    return hr;
}

