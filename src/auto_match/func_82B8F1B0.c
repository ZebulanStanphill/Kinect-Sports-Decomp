/* Removes the entry that refers to `owner` from the object's entry list and from the owner's own entry list. */
typedef struct Owner_82B8F1B0 Owner_82B8F1B0;
typedef struct Entry_82B8F1B0 Entry_82B8F1B0;

struct Entry_82B8F1B0 {
    Owner_82B8F1B0 *owner;
    int f4;
    Entry_82B8F1B0 *next;       /* 0x08: next in the object's list */
    Entry_82B8F1B0 *ownerNext;  /* 0x0c: next in the owner's list */
};

struct Owner_82B8F1B0 {
    int pad0[2];
    Entry_82B8F1B0 *entries;    /* 0x08 */
};

typedef struct Self_82B8F1B0 {
    int pad0[3];
    Entry_82B8F1B0 *entries;    /* 0x0c */
} Self_82B8F1B0;

void fn_82B8F1B0(Self_82B8F1B0 *self, Owner_82B8F1B0 *owner)
{
    Entry_82B8F1B0 **link = &self->entries;
    Entry_82B8F1B0 *entry;

    for (entry = self->entries; entry->owner != owner; entry = entry->next) {
        link = &entry->next;
    }
    *link = entry->next;
    link = &owner->entries;
    while (entry != *link) {
        link = &(*link)->ownerNext;
    }
    *link = entry->ownerNext;
}
