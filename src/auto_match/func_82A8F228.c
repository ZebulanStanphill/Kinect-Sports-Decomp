typedef struct Block_82A8F228 {
    int reserved[10];
    int a;
    int b;
    int c;
} Block_82A8F228;

typedef struct Entry_82A8F228 {
    Block_82A8F228 first;
    Block_82A8F228 second;
    Block_82A8F228 third;
} Entry_82A8F228;

typedef struct Table_82A8F228 {
    int count;
    int total;
    Entry_82A8F228 entries[1];
} Table_82A8F228;

extern void fn_82A8C620(void *, int, int, void *);
extern void fn_82A8C770(void *, void *, void *, int);

void fn_82A8F228(int *contexts, Table_82A8F228 *table, void *data, int offset)
{
    int i;
    table->total = 0;
    fn_82A8C620(data, offset, 32, table);
    offset += 32;
    i = table->count - 1;
    if (i >= 0) {
        int *secondContext = contexts + 1;
        int *thirdContext = contexts + 2;
        char *last = (char *)table + i * sizeof(Entry_82A8F228) + 0x70;
        do {
            fn_82A8C770(contexts, last - 0x68, data, offset);
            fn_82A8C770(secondContext, last - 0x34, data, offset + 0x92);
            fn_82A8C770(thirdContext, last, data, offset + 0x124);
            i--;
            offset += 0x1b6;
            last -= sizeof(Entry_82A8F228);
        } while (i >= 0);
    }
    for (i = table->count - 1; i >= 0; i--) {
        Entry_82A8F228 *entry = &table->entries[i];
        Block_82A8F228 *second = &entry->second;
        table->total += entry->first.a + entry->first.b + entry->first.c + second->a + second->b + second->c +
                        entry->third.a + entry->third.b + entry->third.c;
    }
}
