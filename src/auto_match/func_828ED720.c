typedef struct Entry_828ED720 {
    unsigned int id;
    int pad[5];
} Entry_828ED720; /* 0x18 bytes */

typedef struct Item_828ED720 {
    char pad0[0x4c];
    int count;                 /* 0x4c */
    int pad50;                 /* 0x50 */
    Entry_828ED720 *entries;   /* 0x54 */
    int pad58;                 /* 0x58 */
} Item_828ED720; /* 0x5c bytes */

typedef struct Table_828ED720 {
    int pad0;
    Item_828ED720 *items;      /* 0x4 */
} Table_828ED720;

typedef struct Obj_828ED720 {
    char pad0[0x10];
    Table_828ED720 *table;     /* 0x10 */
} Obj_828ED720;

Entry_828ED720 *fn_828ED720(Obj_828ED720 *param_1, int param_2, unsigned int param_3)
{
    Item_828ED720 *item = &param_1->table->items[param_2];
    Entry_828ED720 *result = 0;
    int i;

    for (i = 0; i < item->count; i++) {
        if (item->entries[i].id == param_3) {
            result = &item->entries[i];
            break;
        }
    }
    return result;
}
