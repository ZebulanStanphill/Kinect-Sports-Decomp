#include <string.h>

typedef struct Entry_8283F7C0 {
    const char *name; /* 0x0 */
    const char *type; /* 0x4 */
    unsigned int id;  /* 0x8 */
    unsigned int pad0c;
} Entry_8283F7C0;

typedef struct EntryArray_8283F7C0 {
    Entry_8283F7C0 *items; /* 0x0 */
    unsigned int count;    /* 0x4 */
} EntryArray_8283F7C0;

typedef struct Registry_8283F7C0 {
    char pad00[0x24];
    EntryArray_8283F7C0 *entries; /* 0x24 */
} Registry_8283F7C0;

Entry_8283F7C0 *fn_8283F7C0(Registry_8283F7C0 *registry, const Entry_8283F7C0 *key)
{
    unsigned int i;

    if (registry == 0) {
        return 0;
    }
    for (i = 0; i < registry->entries->count; i++) {
        Entry_8283F7C0 *entry = &registry->entries->items[i];

        if (entry->name != 0 && entry->type != 0 && strcmp(entry->name, key->name) == 0 &&
            strcmp(entry->type, key->type) == 0 && entry->id == key->id) {
            return entry;
        }
    }
    return 0;
}
