typedef struct Table_8301E708 {
    char pad0[0x14];
    unsigned int count;
} Table_8301E708;

extern int fn_82FE89F8(const char *name);

int fn_8301E708(Table_8301E708 *self, const char **names, int *out, unsigned int count)
{
    unsigned int i;

    if (count != self->count) {
        return 2;
    }
    for (i = 0; i < count; i++) {
        int v = 0;
        if (names[i][0] != 0) {
            v = fn_82FE89F8(names[i]);
            v = v ? v : 0;
        }
        out[i] = v;
    }
    return 1;
}
