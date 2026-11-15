typedef struct Entry_82A8DB80 {
    int size;
    int offset;
    int unused;
} Entry_82A8DB80;

typedef struct Table_82A8DB80 {
    int count;
    int total;
    Entry_82A8DB80 entries[1];
} Table_82A8DB80;

extern void fn_82A8C620(void *, int, int, void *);

void fn_82A8DB80(void *unused, Table_82A8DB80 *table, void *data, int offset)
{
    int i;
    table->total = 0;
    fn_82A8C620(data, offset, 32, table);
    offset += 32;
    for (i = table->count - 1; i >= 0; i--) {
        fn_82A8C620(data, offset, 32, &table->entries[i].offset);
        fn_82A8C620(data, offset + 32, 32, &table->entries[i].size);
        offset += 64;
    }
    for (i = table->count - 1; i >= 0; i--) {
        table->total += table->entries[i].size;
    }
}
