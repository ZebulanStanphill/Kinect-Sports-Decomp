void *memset(void *dst, int value, unsigned int size);

typedef struct Obj_82C2E688 {
    char pad000[0x22];
    unsigned short count; /* 0x022 */
    char pad024[0x18];
    int level; /* 0x03c */
    char pad040[0x1e4];
    void ***table; /* 0x224 */
} Obj_82C2E688;

extern void *fn_82C2B580(unsigned int size);

int fn_82C2E688(Obj_82C2E688 *self)
{
    int hr = 0;
    int count = self->count;
    int i;
    int j;

    if (self->level < 3) {
        self->table = 0;
        return 0;
    }
    self->table = (void ***)fn_82C2B580((count + 1) * 4);
    if (self->table == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(self->table, 0, (count + 1) * 4);
    self->table[0] = 0;
    for (i = 1; i <= count; i++) {
        self->table[i] = (void **)fn_82C2B580(i * 4);
        if (self->table[i] == 0) {
            hr = 0x8007000e;
            goto done;
        }
        memset(self->table[i], 0, i * 4);
        if (i > 6) {
            for (j = 0; j < i; j++) {
                self->table[i][j] = fn_82C2B580(i * 4);
                if (self->table[i][j] == 0) {
                    hr = 0x8007000e;
                    goto done;
                }
                memset(self->table[i][j], 0, i * 4);
            }
        }
    }
done:
    return hr;
}
