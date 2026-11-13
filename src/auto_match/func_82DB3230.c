typedef struct Owner_82DB3230 Owner_82DB3230;

typedef struct Item_82DB3230 {
    char pad0[0x10];
    char key[4];                 /* 0x10: its address identifies the entry */
} Item_82DB3230;

typedef struct Outer_82DB3230 {
    Owner_82DB3230 *owner;       /* 0x0 */
    char pad4[0xc];
    unsigned char dirty;         /* 0x10 */
    unsigned char enabled;       /* 0x11 */
} Outer_82DB3230;

extern void fn_83083900(Owner_82DB3230 *owner, unsigned int id);

#define OUTER(p) ((Outer_82DB3230 *)((char *)(p) - 4))

void fn_82DB3230(void *self, Item_82DB3230 *item)
{
    Outer_82DB3230 *o = OUTER(self);

    if (!o->enabled) {
        o->dirty = 1;
        return;
    }
    fn_83083900(o->owner, (unsigned int)item->key);
}
