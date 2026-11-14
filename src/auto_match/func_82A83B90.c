/* Compares two tables: header, block at 0x300, the first `count` entries as an unordered set, then 0x380..0x38d. */
typedef struct Entry_82A83B90 {
    unsigned char bytes[0x20];
} Entry_82A83B90;

typedef struct Table_82A83B90 {
    unsigned char header[0x160];
    Entry_82A83B90 entries[13];     /* 0x160 */
    unsigned char extra[0x80];      /* 0x300 */
    unsigned char tail[8];          /* 0x380 */
    unsigned char tail2[5];         /* 0x388 */
} Table_82A83B90;

typedef struct Self_82A83B90 {
    Table_82A83B90 *table;
} Self_82A83B90;

int memcmp(const void *a, const void *b, unsigned int n);
extern unsigned int fn_82A83B30(Self_82A83B90 *self);

unsigned char fn_82A83B90(Self_82A83B90 *a, Self_82A83B90 *b)
{
    unsigned int count;
    unsigned int i;
    unsigned int j;

    if (a->table == b->table)
        return 1;
    if (memcmp(a->table->header, b->table->header, sizeof(a->table->header)) != 0)
        return 0;
    if (memcmp(a->table->extra, b->table->extra, sizeof(a->table->extra)) != 0)
        return 0;
    count = fn_82A83B30(b);
    if (count != fn_82A83B30(a))
        return 0;
    for (j = 0; j < count; j++) {
        for (i = 0; i < count; i++) {
            if (memcmp(&a->table->entries[i], &b->table->entries[j], sizeof(Entry_82A83B90)) == 0)
                break;
        }
        if (i == count)
            return 0;
    }
    if (memcmp(a->table->tail, b->table->tail, sizeof(a->table->tail)) != 0)
        return 0;
    return memcmp(a->table->tail2, b->table->tail2, sizeof(a->table->tail2)) == 0;
}
