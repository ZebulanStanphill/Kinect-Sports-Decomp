typedef struct Pair_82E66E70 {
    int first;
    int second;
} Pair_82E66E70;

typedef struct Tables_82E66E70 {
    unsigned char *buffer; /* 0x00 */
    Pair_82E66E70 *starts; /* 0x04 */
    Pair_82E66E70 *ends;   /* 0x08 */
    char reserved0c[0x1c];
    unsigned int bufferSize; /* 0x28 */
    char reserved2c[0x10];
    int count; /* 0x3c */
    char reserved40[0x60];
    int *offsets;          /* 0xa0 */
    Pair_82E66E70 *ranges; /* 0xa4 */
} Tables_82E66E70;

typedef struct Decoder_82E66E70 {
    char reserved0000[0x75c4];
    int maxLevel; /* 0x75c4 */
    int minLevel; /* 0x75c8 */
} Decoder_82E66E70;

extern void *fn_82C2B580(unsigned int size);
extern void *memset(void *data, int value, unsigned int size);

int fn_82E66E70(Decoder_82E66E70 *self, Tables_82E66E70 *tables)
{
    int hr = 0;

    if (self == 0 || tables == 0) {
        hr = 0x80004005;
        goto done;
    }
    tables->buffer = (unsigned char *)fn_82C2B580(tables->bufferSize);
    if (tables->buffer == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(tables->buffer, 0, tables->bufferSize);
    tables->starts = (Pair_82E66E70 *)fn_82C2B580((tables->count + 1) * sizeof(Pair_82E66E70));
    if (tables->starts == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(tables->starts, 0, (tables->count + 1) * sizeof(Pair_82E66E70));
    tables->ends = (Pair_82E66E70 *)fn_82C2B580((tables->count + 1) * sizeof(Pair_82E66E70));
    if (tables->ends == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(tables->ends, 0, (tables->count + 1) * sizeof(Pair_82E66E70));
    if (self->maxLevel < self->minLevel) {
        hr = 0x80070057;
        goto done;
    }
    tables->offsets = (int *)fn_82C2B580((self->maxLevel - self->minLevel + 1) * sizeof(int));
    if (tables->offsets == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(tables->offsets, 0, (self->maxLevel - self->minLevel + 1) * sizeof(int));
    tables->ranges =
        (Pair_82E66E70 *)fn_82C2B580((self->maxLevel - self->minLevel + 1) * sizeof(Pair_82E66E70));
    if (tables->ranges == 0) {
        hr = 0x8007000e;
        goto done;
    }
    memset(tables->ranges, 0, (self->maxLevel - self->minLevel + 1) * sizeof(Pair_82E66E70));
done:
    return hr;
}
