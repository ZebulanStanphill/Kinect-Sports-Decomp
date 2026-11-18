typedef struct Desc_82802488 {
    unsigned char pad0[0xa];
    unsigned short count; /* 0x0a */
    unsigned char padc[4];
    unsigned int modes[1]; /* 0x10 */
} Desc_82802488;

typedef struct Table_82802488 {
    unsigned char pad0[8];
    unsigned int count; /* 0x08 */
    unsigned char padc[0x10];
    unsigned short *ids; /* 0x1c */
} Table_82802488;

extern void fn_828114A8(unsigned char *bits, unsigned int index);
extern void fn_82811500(unsigned char *bits, unsigned int index);

static __forceinline unsigned int GetMode(unsigned int *modes, unsigned int bit)
{
    return (modes[bit >> 5] & (3 << (bit & 31))) >> (bit & 31);
}

void fn_82802488(Table_82802488 *self, Desc_82802488 *desc, unsigned char *bits, unsigned int filtered)
{
    unsigned int bit;
    unsigned int slot;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int mode;
    unsigned short *ids;
    unsigned int found;
    unsigned int *modes;

    modes = desc->modes;
    bit = 0;
    slot = 0;
    k = 0;
    for (i = 0; i < self->count; i++) {
        if (filtered != 0) {
            ids = self->ids;
            found = 0;
            if (ids == 0 || ids[k] == i) {
                k++;
                for (j = 0; j < desc->count; j++) {
                    mode = GetMode(modes, bit);
                    if (mode == 2 || mode == 3) {
                        found = 1;
                    }
                    bit += 2;
                }
                if (found != 0) {
                    fn_828114A8(bits, i);
                    continue;
                }
            }
            if (ids == 0) {
                fn_82811500(bits, i);
            }
        } else {
            for (j = 0; j < desc->count; j++) {
                mode = GetMode(modes, bit);
                if (mode == 2 || mode == 3) {
                    fn_828114A8(bits, slot);
                } else {
                    fn_82811500(bits, slot);
                }
                bit += 2;
                slot++;
            }
        }
    }
}
