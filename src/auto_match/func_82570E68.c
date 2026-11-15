typedef struct Item_82570E68 {
    char pad[0x94];
    unsigned int key;
    char tail[0x38];
} Item_82570E68;

typedef struct Array_82570E68 {
    char *begin;
    char *end;
    int capacity;
    unsigned short stride;
    char pad[6];
} Array_82570E68;

typedef struct Owner_82570E68 {
    char pad[0x380];
    Array_82570E68 items;
    Array_82570E68 extra;
    char gap[0xfc];
    unsigned int *children;
    unsigned int *childrenEnd;
    char gap4ac[0xc];
    unsigned int flags;
} Owner_82570E68;

extern void fn_8251E5A0(Array_82570E68 *, void *);
extern void fn_82572A20(unsigned int, unsigned int);

void fn_82570E68(Owner_82570E68 *self, unsigned int key)
{
    Array_82570E68 *items = &self->items;
    Item_82570E68 *item;
    Item_82570E68 *end;
    unsigned int *child;
    unsigned int *childEnd;

    if (self->flags & 1) {
        item = (Item_82570E68 *)items->begin;
        end = (Item_82570E68 *)items->end;
        for (; item < end; item++) {
            if (item->key == key) {
                fn_8251E5A0(&items[1], items[1].begin + ((int)((char *)item - items->begin) / items->stride) *
                                                            items[1].stride);
                fn_8251E5A0(items, item);
                item--;
                end--;
            }
        }
        child = *(unsigned int **)((char *)items + 0x124);
        childEnd = *(unsigned int **)((char *)items + 0x128);
        for (; child < childEnd; child += 2) {
            fn_82572A20(child[1], key);
        }
    }
}
