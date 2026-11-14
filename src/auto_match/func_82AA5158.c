void *memset(void *, int, unsigned int);

typedef struct Entry_82AA5158 {
    void *key;
    void *value;
} Entry_82AA5158;

typedef struct Table_82AA5158 {
    char pad0[0x14];
    Entry_82AA5158 entries[1];  /* 0x14: value pointer of each 8-byte entry */
} Table_82AA5158;

typedef struct Context_82AA5158 {
    void *writer;
    int arg;
    int index;
} Context_82AA5158;

extern int fn_82637088(void *items, Context_82AA5158 *ctx, void (*callback)(void));
extern void fn_82AA5020(void);
extern void fn_82AA2720(void *writer, const char *text);
extern void fn_82AA1C90(void *writer, const char *format, ...);

int fn_82AA5158(void *writer, int arg, Table_82AA5158 *table, int unused, void *items, int index)
{
    Context_82AA5158 ctx;
    int hr;

    if (table->entries[index].key == 0) {
        return 0;
    }
    memset(&ctx, 0, sizeof(ctx));
    ctx.writer = writer;
    ctx.arg = arg;
    ctx.index = index;
    hr = fn_82637088(items, &ctx, fn_82AA5020);
    if (hr >= 0) {
        fn_82AA2720(writer, "\\line");
        fn_82AA1C90(writer, "\n");
        hr = 0;
    }
    return hr;
}
