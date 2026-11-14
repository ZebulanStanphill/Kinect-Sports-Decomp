typedef struct Owner_82FA7340 {
    char pad0[0x20];
    unsigned int id;
} Owner_82FA7340;

typedef struct Entry_82FA7340 Entry_82FA7340;
typedef struct Entry_82FA7340_vt {
    void *slots[3];
    int (*query)(Entry_82FA7340 *self, void *out);
} Entry_82FA7340_vt;

struct Entry_82FA7340 {
    Entry_82FA7340_vt *vt;
    char pad4[0x10];
    unsigned int flags;
    char pad18[0x20];
    Owner_82FA7340 *owner;
    Entry_82FA7340 *next;
};

typedef struct Info_82FA7340 {
    char data[0x20];
} Info_82FA7340;

extern Entry_82FA7340 *lbl_83264234;
extern char lbl_83264240[];
extern void fn_82FA7F30(void *table, unsigned int id, Info_82FA7340 *info);
extern void fn_82FAB260(Owner_82FA7340 *owner);

void fn_82FA7340(void)
{
    Entry_82FA7340 *e = lbl_83264234;
    while (e != 0) {
        Entry_82FA7340 *cur = e;
        Owner_82FA7340 *owner;
        Info_82FA7340 info;
        e = cur->next;
        owner = cur->owner;
        if ((cur->flags & 0x20000) != 0 && cur->vt->query(cur, &info) == 1) {
            fn_82FA7F30(lbl_83264240, owner->id, &info);
        }
        fn_82FAB260(owner);
    }
}
