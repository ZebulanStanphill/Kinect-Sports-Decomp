typedef struct Flags_82AEFCD8 {
    unsigned int pad0 : 1;
    unsigned int hi : 1;
    unsigned int pad1 : 2;
    unsigned int cnt : 3;
    unsigned int pad2 : 12;
    unsigned int sel : 8;
    unsigned int pad3 : 5;
} Flags_82AEFCD8;

typedef struct Node_82AEFCD8 {
    Flags_82AEFCD8 f;
    unsigned int unk4;
    struct Node_82AEFCD8 *next;
} Node_82AEFCD8;

typedef struct Bits_82AEFCD8 {
    unsigned int pad0 : 15;
    unsigned int lookup : 3;
    unsigned int pad1 : 9;
    unsigned int count : 4;
    unsigned int pad2 : 1;
} Bits_82AEFCD8;

typedef struct Owner_82AEFCD8 {
    unsigned int unk0;
    Node_82AEFCD8 *head;
    Bits_82AEFCD8 bits;
} Owner_82AEFCD8;

static __forceinline int notNull_82AEFCD8(Node_82AEFCD8 *p)
{
    if (p)
        return 1;
    return 0;
}

void fn_82AEFCD8(Owner_82AEFCD8 *o)
{
    Node_82AEFCD8 *p;
    unsigned int acc;
    unsigned int n;

    p = o->head;
    acc = 0;
    while (notNull_82AEFCD8(p)) {
        unsigned char active = p->f.hi || p->f.cnt;
        if (active) {
            unsigned int mask = 0;
            unsigned int i = 0;
            if (p->f.cnt != 0) {
                unsigned int shift = 0;
                do {
                    i++;
                    mask |= 1 << ((p->f.sel >> shift) & 3);
                    shift += 2;
                } while (i < p->f.cnt);
            }
            acc |= mask;
        }
        p = p->next;
    }

    n = 0;
    if (acc != 0) {
        n = (1 << (32 - _CountLeadingZeros(acc))) - 1;
    }
    o->bits.lookup = (unsigned int)(((0x8DA691691448ULL >> n) >> n) >> n);
    o->bits.count = n;
}
