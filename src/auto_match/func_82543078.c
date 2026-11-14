typedef struct {
    unsigned int count;
    unsigned int *ids;
} IdList_82543078;

typedef struct {
    int pad0;
    void **entries;
} Table_82543078;

typedef struct {
    char pad0[0x34];
    int anyMode;
    int wildcard;
    char pad3c[0xabb8 - 0x3c];
    int slot;
} Self_82543078;

extern int fn_828116B8(void *entry, unsigned int id);

int fn_82543078(Self_82543078 *self, Table_82543078 *table, IdList_82543078 *list)
{
    unsigned int i;
    int found;

    if (self->anyMode != 0) {
        found = 0;
        for (i = 0; i < list->count; i++) {
            unsigned int id = list->ids[i];
            if (id == self->wildcard) {
                found = 1;
            } else if (id != 0xffffffff) {
                if (fn_828116B8(table->entries[self->slot + 2], id) == 0) {
                    return 0;
                }
            }
        }
        return found;
    }
    if (list->ids[0] != 0xffffffff) {
        for (i = 0; i < list->count; i++) {
            if (fn_828116B8(table->entries[self->slot + 2], list->ids[i]) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
