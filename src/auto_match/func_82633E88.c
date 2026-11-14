typedef struct Desc_82633E88 {
    unsigned int top : 4;
    unsigned int mask : 12;
    unsigned int flag : 1;
    unsigned int count : 3;
    unsigned int first : 12;
} Desc_82633E88;

typedef struct Entry_82633E88 {
    unsigned int kind : 6;
    unsigned int rest0 : 26;
    int f4;
    unsigned int pad8 : 3;
    unsigned int type : 5;
    unsigned int rest8 : 24;
} Entry_82633E88;

static __forceinline unsigned char InRange(unsigned int v, unsigned int lo, unsigned int hi)
{
    return v >= lo && v <= hi;
}

int fn_82633E88(Desc_82633E88 *desc, Entry_82633E88 *table)
{
    Entry_82633E88 *e = &table[desc->first];
    unsigned int count = desc->count;
    unsigned int mask = desc->mask;
    unsigned int i;

    int result = 1;

    for (i = 0; i < count; i++, e++) {
        if (((1 << (i * 2)) & mask) == 0) {
            unsigned int type = e->type;
            unsigned int kind = e->kind;
            unsigned char a = InRange(type, 0x14, 0x17);
            unsigned char b = InRange(kind, 0x1b, 0x22);
            if (a || b) {
                result = 0;
                break;
            }
        }
    }
    return result;
}
