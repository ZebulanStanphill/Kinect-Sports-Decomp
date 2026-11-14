typedef struct Entry_82850EF8 {
    int pad0;
    int pad4;
    unsigned int refs;              /* 0x08 */
    int padC;
} Entry_82850EF8;

typedef struct Table_82850EF8 {
    int count;
    Entry_82850EF8 *entries;
} Table_82850EF8;

typedef struct Owner_82850EF8 {
    char pad0[0x178];
    unsigned int active;            /* 0x178 */
    Table_82850EF8 *table;          /* 0x17c */
} Owner_82850EF8;

int fn_82850EF8(Owner_82850EF8 *self)
{
    if (self->active > 0) {
        Table_82850EF8 *table = self->table;
        int i;
        for (i = table->count - 1; i >= 0; i--) {
            if (table->entries[i].refs > 0)
                return i;
        }
    }
    return -1;
}
