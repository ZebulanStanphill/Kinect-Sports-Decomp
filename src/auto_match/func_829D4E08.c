typedef struct Entry_829D4E08 {
    unsigned char data[0x54];
} Entry_829D4E08;

typedef struct Table_829D4E08 {
    unsigned char head[0x1c];
    Entry_829D4E08 entries[4];
} Table_829D4E08;

extern char *lbl_832179FC;

Entry_829D4E08 *fn_829D4E08(int kind, unsigned int flags)
{
    Table_829D4E08 *table;
    unsigned char high = (unsigned char)(flags >> 31);
    if (high) {
        table = (Table_829D4E08 *)(lbl_832179FC + 0x8f108);
    } else {
        table = (Table_829D4E08 *)(lbl_832179FC + 0x8f274);
    }
    switch (kind) {
    case 1:
        return &table->entries[0];
    case 2:
        return &table->entries[1];
    case 4:
        return &table->entries[2];
    case 6:
        return &table->entries[3];
    }
    return 0;
}
