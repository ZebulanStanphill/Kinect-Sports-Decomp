typedef struct Leaf_8295E4F8 {
    int f0;
    unsigned int flags; /* 0x04 */
} Leaf_8295E4F8;

typedef struct Mid_8295E4F8 {
    int f0;
    int leafIndex; /* 0x04 */
    char pad8[0x54];
    void *f5C; /* 0x5c */
} Mid_8295E4F8;

typedef struct Info_8295E4F8 {
    int f0;
    int pad4;
    unsigned int field8; /* 0x08 */
    int padC;
    unsigned int *items; /* 0x10 */
} Info_8295E4F8;

typedef struct Obj_8295E4F8 {
    char pad0[0x10];
    Leaf_8295E4F8 **leafs; /* 0x10 */
    Mid_8295E4F8 **mids;   /* 0x14 */
    char pad18[0x104 - 0x18];
    Info_8295E4F8 *info; /* 0x104 */
    char pad108[0x190 - 0x108];
    int hasExtra;        /* 0x190 */
    char extra194[0x10]; /* 0x194 */
    char extra1A4[0x10]; /* 0x1a4 */
} Obj_8295E4F8;

extern int fn_8295D318(Obj_8295E4F8 *self, int mode, unsigned int *list, unsigned int count, unsigned int b,
                       void *list1, void *list2, unsigned int n, int c, int d, int e, int f);

int fn_8295E4F8(Obj_8295E4F8 *self)
{
    Info_8295E4F8 *info = self->info;
    unsigned int found[2];
    unsigned int count = 0;
    int offset;
    unsigned int item;
    Mid_8295E4F8 *mid;
    void *list1;
    unsigned int field8;
    void *list2;

    for (offset = 0; offset < 2 * 4; offset += 4) {
        item = *(unsigned int *)((char *)info->items + offset);
        mid = self->mids[item];
        if ((self->leafs[mid->leafIndex]->flags & 1) == 0 || mid->f5C != 0) {
            found[count] = item;
            count++;
        }
    }
    if (count == 0) {
        return 0;
    }
    field8 = info->field8;
    list1 = self->hasExtra != 0 ? self->extra194 : 0;
    list2 = self->hasExtra != 0 ? self->extra1A4 : 0;
    return fn_8295D318(self, 0x25, found, count, field8, list1, list2, 4, 0, 0, 0, 0);
}
