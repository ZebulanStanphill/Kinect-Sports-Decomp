typedef struct Table_82A70960 {
    int pad0;              /* 0x00 */
    int *values;           /* 0x04 */
    int *slopes;           /* 0x08 */
    int base;              /* 0x0c */
    unsigned int mask;     /* 0x10 */
    unsigned int shift;    /* 0x14 */
    unsigned int fracMask; /* 0x18 */
    int useSlopes;         /* 0x1c */
} Table_82A70960;

int fn_82A70960(Table_82A70960 *table, int x)
{
    unsigned int offset = x - table->base;
    unsigned int index = (table->mask & offset) >> table->shift;
    int frac = table->fracMask & offset;
    int *entry;

    if (table->useSlopes != 0) {
        return table->slopes[index] * frac + table->values[index];
    }
    entry = &table->values[index];
    return (int)((entry[1] - entry[0]) * frac) / (1 << table->shift) + entry[0];
}
