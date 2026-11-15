typedef struct Entry_82A8EA88 {
    int first[13];  /* 0x0 */
    int second[13]; /* 0x34 */
} Entry_82A8EA88;

typedef struct Table_82A8EA88 {
    int count;
    int total;
    Entry_82A8EA88 entries[1];
} Table_82A8EA88;

extern void fn_82A8C620(void *, int, int, void *);
extern void fn_82A8C770(void *, void *, void *, int);

void fn_82A8EA88(char *self, Table_82A8EA88 *table, void *data, int offset)
{
    int i;
    table->total = 0;
    fn_82A8C620(data, offset, 32, table);
    offset += 32;
    for (i = table->count - 1; i >= 0; i--) {
        Entry_82A8EA88 *entry = &table->entries[i];
        fn_82A8C770(self, entry, data, offset);
        fn_82A8C770(self + 4, (char *)entry + 0x34, data, offset + 0x92);
        offset += 0x124;
    }
    for (i = table->count - 1; i >= 0; i--) {
        Entry_82A8EA88 *entry = &table->entries[i];
        table->total += entry->second[11] + entry->second[12] + entry->second[10] + entry->first[12] +
                        entry->first[11] + entry->first[10];
    }
}
