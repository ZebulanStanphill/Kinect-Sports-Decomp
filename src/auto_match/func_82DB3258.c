typedef struct Owner_82DB3258 Owner_82DB3258;

typedef struct Item_82DB3258 {
    char pad0[0x10];
    int key;                     /* 0x10: its address identifies the entry */
} Item_82DB3258;

typedef struct Outer_82DB3258 {
    Owner_82DB3258 *owner;       /* 0x0 */
    char pad4[0xc];
    unsigned char dirty;         /* 0x10 */
    unsigned char enabled;       /* 0x11 */
} Outer_82DB3258;

extern void fn_83083900(Owner_82DB3258 *owner, int *key);

#define OUTER(p) ((Outer_82DB3258 *)((char *)(p) - 8))

void fn_82DB3258(void *self, Item_82DB3258 *item)
{
    Outer_82DB3258 *o = OUTER(self);
    int *key = &item->key;

    if (*key == 0) {
        return;
    }
    if (!o->enabled) {
        o->dirty = 1;
        return;
    }
    fn_83083900(o->owner, key);
}
