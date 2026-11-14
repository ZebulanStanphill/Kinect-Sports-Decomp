/* Index of the first of the 13 table entries whose GUID is lbl_8202E618, or 13 when none is. */
typedef struct Guid_82A83B30 {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} Guid_82A83B30;

typedef struct Entry_82A83B30 {
    Guid_82A83B30 id;
    char pad10[0x10];
} Entry_82A83B30;

typedef struct Table_82A83B30 {
    char pad0[0x160];
    Entry_82A83B30 entries[13];     /* 0x160 */
} Table_82A83B30;

typedef struct Self_82A83B30 {
    Table_82A83B30 *table;
} Self_82A83B30;

extern const Guid_82A83B30 lbl_8202E618;

int memcmp(const void *a, const void *b, unsigned int n);

unsigned int fn_82A83B30(Self_82A83B30 *self)
{
    unsigned int i;

    for (i = 0; i < 13; i++) {
        if (memcmp(&self->table->entries[i].id, &lbl_8202E618, sizeof(Guid_82A83B30)) == 0) {
            return i;
        }
    }
    return 13;
}
