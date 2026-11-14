typedef struct {
    unsigned int key;
    unsigned int subkey;
    int value;
} Entry_82788788;

typedef struct {
    int unk0[3];
    Entry_82788788 **pages;
} Table_82788788;

typedef struct {
    int unk0;
    Table_82788788 *table;
} Owner_82788788;

unsigned char fn_82788788(Owner_82788788 *self, unsigned int a, unsigned int b)
{
    Entry_82788788 **pages = self->table->pages;
    Entry_82788788 *ea = &pages[a >> 10][a & 0x3ff];
    Entry_82788788 *eb = &pages[b >> 10][b & 0x3ff];
    if (ea->key != eb->key)
        return ea->key < eb->key;
    return ea->subkey < eb->subkey;
}
