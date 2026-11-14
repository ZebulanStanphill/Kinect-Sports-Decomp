typedef struct Item_8226C560 {
    char pad[0xc0];
    float value;
    char pad2[0x20];
    unsigned int mask;
    float copy;
    int pad3;
} Item_8226C560;

typedef struct Owner_8226C560 {
    char pad[0x40];
    Item_8226C560 *items;
    int count;
} Owner_8226C560;

extern float lbl_82193E50;
extern float fn_8280A580(float value);

static __forceinline void Add(float *value, float step)
{
    *value += step;
}

void fn_8226C560(Owner_8226C560 *self, unsigned int mask)
{
    Owner_8226C560 *selfCopy = self;
    int i = 0;
    if (0 < selfCopy->count) {
        int off = 0;
        float step = lbl_82193E50;
        do {
            if (((Item_8226C560 *)((char *)selfCopy->items + off))->mask & mask) {
                Item_8226C560 *item = (Item_8226C560 *)((char *)selfCopy->items + off);
                Add(&item->value, step);
                ((Item_8226C560 *)((char *)selfCopy->items + off))->value =
                    fn_8280A580(((Item_8226C560 *)((char *)selfCopy->items + off))->value);
                item = (Item_8226C560 *)((char *)selfCopy->items + off);
                item->copy = item->value;
            }
            i++;
            off += 0xf0;
        } while (i < selfCopy->count);
    }
}
