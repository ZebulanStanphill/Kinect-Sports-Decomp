typedef struct Entry {
    void *first;
    int b;
    int c;
} Entry;

typedef struct Key {
    int pad0;
    unsigned short index;
    unsigned short sub;
} Key;

typedef struct Table {
    int pad0;
    Entry *entries;
} Table;

extern Entry *fn_8300E510(Table *table, Entry *entry, unsigned short sub, void *key);

Entry *fn_8300E568(Table *table, Key *node, void **keys, unsigned int depth)
{
    Entry *entry;
    Entry *found;

    if (table->entries != 0) {
        entry = &table->entries[node->index];
        found = fn_8300E510(table, entry, node->sub, *keys);
        if (found != 0) {
            if (depth == 1) {
                return found;
            }
            found = fn_8300E568(table, (Key *)found, keys + 1, depth - 1);
            if (found != 0) {
                return found;
            }
        }
        if (entry->first == 0 && *keys != 0) {
            if (depth == 1) {
                return entry;
            }
            found = fn_8300E568(table, (Key *)entry, keys + 1, depth - 1);
            if (found != 0) {
                return found;
            }
        }
    }
    return 0;
}
