typedef struct Coder_82F1B2D8 {
    char pad0[0x4e14];
    void *tables[12];    /* 0x4e14 */
    int longTableIndex;  /* 0x4e44 */
    int shortTableIndex; /* 0x4e48 */
} Coder_82F1B2D8;

extern int fn_82F2A8A8(Coder_82F1B2D8 *coder, int second, int first, void *table, int *stateA, int *stateB);

int fn_82F1B2D8(Coder_82F1B2D8 *coder, short *values, short *count, int mode)
{
    int bits;
    int stateB;
    int stateA;
    int i;

    bits = 0;
    stateA = 0;
    stateB = 0;
    if (mode < 4) {
        if (*count > 2) {
            for (i = 2; i < *count - 2; i += 2) {
                bits += fn_82F2A8A8(coder, values[i + 1], values[i],
                                    coder->tables[coder->shortTableIndex + 6], &stateA, &stateB);
            }
            bits += fn_82F2A8A8(coder, values[i + 1], values[i], coder->tables[coder->shortTableIndex + 9],
                                &stateA, &stateB);
        }
    } else {
        if (*count > 2) {
            for (i = 2; i < *count - 2; i += 2) {
                bits += fn_82F2A8A8(coder, values[i + 1], values[i], coder->tables[coder->longTableIndex],
                                    &stateA, &stateB);
            }
            bits += fn_82F2A8A8(coder, values[i + 1], values[i], coder->tables[coder->longTableIndex + 3],
                                &stateA, &stateB);
        }
    }
    return bits;
}
