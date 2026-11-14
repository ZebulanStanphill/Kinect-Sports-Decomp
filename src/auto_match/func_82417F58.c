typedef struct Group_82417F58 {
    char pad0[0x8];
    unsigned int count;         /* 0x08 */
} Group_82417F58;

typedef struct List_82417F58 {
    Group_82417F58 **groups;    /* 0x00 */
    char pad4[0xc];
    int current;                /* 0x10 */
} List_82417F58;

typedef struct ListVec_82417F58 {
    List_82417F58 **begin;      /* 0x00 */
    List_82417F58 **end;        /* 0x04 */
} ListVec_82417F58;

typedef struct Owner_82417F58 {
    char pad0[0x8];
    ListVec_82417F58 *lists;    /* 0x08 */
} Owner_82417F58;

typedef struct Slot_82417F58 {
    int list;                   /* 0x000 */
    char pad4[0x1a8];
} Slot_82417F58;

typedef struct Self_82417F58 {
    Owner_82417F58 *owner;      /* 0x00 */
    char pad4[0x4];
    Slot_82417F58 *slots;       /* 0x08 */
    char padC[0xc];
    int slot;                   /* 0x18 */
    unsigned int index;         /* 0x1c */
} Self_82417F58;

extern void *fn_822ABA88(Group_82417F58 *group, unsigned int index);


void *fn_82417F58(Self_82417F58 *self)
{
    ListVec_82417F58 *lists = self->owner->lists;
    int list = self->slots[self->slot].list;
    unsigned int index = self->index;
    Group_82417F58 *group;

    if (list < lists->end - lists->begin) {
        List_82417F58 *l = self->owner->lists->begin[list];
        group = l->groups[l->current];
        if (index < group->count)
            return fn_822ABA88(group, index);
    }
    return 0;
}
