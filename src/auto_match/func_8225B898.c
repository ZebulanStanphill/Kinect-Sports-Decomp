long _InterlockedDecrement(long volatile *);

typedef struct Owner_8225B898 {
    char pad0[0x10c];
    int value;
    char pad110[8];
    int dirty;
} Owner_8225B898;

typedef struct Item_8225B898 {
    Owner_8225B898 *owner;
    int value;
} Item_8225B898;

typedef struct Self_8225B898 {
    int pad0;
    void *ref;
} Self_8225B898;

extern long lbl_831D0968;
extern void fn_82522ED8(Item_8225B898 *item);
extern void fn_822315A0(void *ref);

void fn_8225B898(Self_8225B898 *self, Item_8225B898 *item)
{
    if (item != 0) {
        item->owner->dirty = 1;
        item->owner->value = item->value;
        fn_82522ED8(item);
    } else {
        _InterlockedDecrement(&lbl_831D0968);
    }
    if (self->ref != 0)
        fn_822315A0(self->ref);
}
