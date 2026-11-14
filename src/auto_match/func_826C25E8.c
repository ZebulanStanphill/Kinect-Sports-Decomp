typedef struct Item_826C25E8 {
    int pad0;
    unsigned char type;
} Item_826C25E8;

typedef struct Root_826C25E8 {
    void *first;
} Root_826C25E8;

typedef struct Table_826C25E8 {
    Root_826C25E8 *root;
} Table_826C25E8;

typedef struct Entry_826C25E8 {
    int key[2];
    int value;
} Entry_826C25E8;

typedef struct Obj_826C25E8 {
    char pad0[0x18];
    Table_826C25E8 *table;
} Obj_826C25E8;

extern Entry_826C25E8 *fn_826BF178(Table_826C25E8 *table, int *key);
extern int *fn_826C0700(Table_826C25E8 *table, int *key);
extern void fn_826C2588(Table_826C25E8 *table, int *key, unsigned char big);
extern void fn_826BE288(Table_826C25E8 *table);
extern void fn_8267BE38(void *p);

static __forceinline int *Find(Table_826C25E8 *table, int *key)
{
    Entry_826C25E8 *e = fn_826BF178(table, key);
    return e ? &e->value : 0;
}

static __forceinline int IsEmpty(Table_826C25E8 *t)
{
    return t->root == 0 || t->root->first == 0;
}

int fn_826C25E8(Obj_826C25E8 *self, Item_826C25E8 *item, int *key)
{
    if (self->table != 0) {
        int *found;
        if (item->type > 6)
            found = Find(self->table, key);
        else
            found = fn_826C0700(self->table, key);
        if (found != 0) {
            Table_826C25E8 *t;
            fn_826C2588(self->table, key, item->type > 6);
            if (IsEmpty(self->table)) {
                t = self->table;
                if (t != 0) {
                    fn_826BE288(t);
                    fn_8267BE38(t);
                }
                self->table = 0;
            }
            return 1;
        }
    }
    return 0;
}
