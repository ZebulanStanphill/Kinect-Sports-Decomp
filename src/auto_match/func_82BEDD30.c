typedef struct Entry_82BEDD30 {
    char pad0[0x1c];
    char *name; /* 0x1c */
} Entry_82BEDD30;

typedef struct Table_82BEDD30 {
    int unk0;
} Table_82BEDD30;

typedef struct Owner_82BEDD30 {
    char pad0[0x8];
    int context;          /* 0x08 */
    Table_82BEDD30 table; /* 0x0c */
    char pad10[0x38];
    int pending; /* 0x48 */
    int pad4c;
    int state; /* 0x50 */
} Owner_82BEDD30;

extern int fn_82BF7540(Table_82BEDD30 *table, const unsigned int *key, Entry_82BEDD30 **entry);
extern int fn_82BF7590(Table_82BEDD30 *table, const unsigned int *key);
extern void *fn_82BE56B0(int size);
extern void *fn_82BF7DC8(void *mem, unsigned int key, int context, char *name);
extern int fn_82BECB18(Owner_82BEDD30 *self, void *item);
extern void fn_82BE8D50(void *object);
extern int fn_82BED560(Owner_82BEDD30 *self);

int fn_82BEDD30(Owner_82BEDD30 *self, unsigned int key)
{
    Entry_82BEDD30 *entry;
    Entry_82BEDD30 *found;
    void *mem;
    void *item;

    if (self->state == 2) {
        return 0;
    }
    entry = 0;
    if (fn_82BF7540(&self->table, &key, &entry) != 0) {
        found = entry;
        if (found->name != 0 && *found->name != 0) {
            mem = fn_82BE56B0(0x14);
            if (mem != 0) {
                char *name = found->name;

                item = fn_82BF7DC8(mem, key, self->context, name);
            } else {
                item = 0;
            }
            if (item == 0) {
                return 0;
            }
            if (fn_82BECB18(self, item) != 0) {
                fn_82BE8D50(item);
            } else {
                fn_82BE8D50(item);
                return 0;
            }
        }
        fn_82BE8D50(found);
        if (fn_82BF7590(&self->table, &key) == 0) {
            return 0;
        }
        if (fn_82BED560(self) == 0) {
            return 0;
        }
    }
    self->pending = 0;
    return 1;
}
