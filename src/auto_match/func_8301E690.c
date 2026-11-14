typedef struct Table_8301E690 {
    char pad0[0x14];
    unsigned int count;
} Table_8301E690;

extern int fn_82FE8948(const unsigned short *name);

int fn_8301E690(Table_8301E690 *self, const unsigned short **names, int *out, unsigned int count)
{
    unsigned int i;

    if (count != self->count) {
        return 2;
    }
    for (i = 0; i < count; i++) {
        int v = 0;
        if (names[i][0] != 0) {
            v = fn_82FE8948(names[i]);
            v = v ? v : 0;
        }
        out[i] = v;
    }
    return 1;
}
