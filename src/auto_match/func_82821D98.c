typedef struct Range_82821D98 {
    unsigned int id;
    unsigned int count;
    unsigned int inner;
    unsigned int arg;
    unsigned int stride;
} Range_82821D98;

typedef struct List_82821D98 {
    unsigned int id;
    unsigned int pad4;
    unsigned int count;
} List_82821D98;

extern unsigned int fn_8281FE80(void *ctx, unsigned int id);
extern void fn_82820EF8(unsigned int addr, unsigned int size);

void fn_82821D98(void *ctx, Range_82821D98 *ranges, unsigned int numRanges,
                 unsigned int *offsets, List_82821D98 *lists, unsigned int numLists,
                 unsigned int *listOffsets)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int base;
    unsigned int inner;
    unsigned int arg;
    unsigned int stride;

    for (i = 0; i < numRanges; i++, ranges++) {
        base = fn_8281FE80(ctx, ranges->id);
        inner = ranges->inner;
        arg = ranges->arg;
        stride = ranges->stride;
        for (j = 0; j < ranges->count; j++, offsets++) {
            for (k = 0; k < inner; k++) {
                fn_82820EF8(*offsets + k * stride + base, arg);
            }
        }
    }
    for (i = 0; i < numLists; i++, lists++) {
        base = fn_8281FE80(ctx, lists->id);
        for (j = 0; j < lists->count; j++) {
            fn_82820EF8(*listOffsets + base, 4);
            listOffsets++;
        }
    }
}
