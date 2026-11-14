typedef struct Item_825FA398 {
    char pad0[0x28];
    struct Item_825FA398 *next;
} Item_825FA398;

typedef struct Sub_825FA398 {
    char pad0[0x18];
    struct Sub_825FA398 *next;
} Sub_825FA398;

typedef struct Group_825FA398 {
    char pad0[0x1c];
    Sub_825FA398 *subs;
    struct Group_825FA398 *next;
} Group_825FA398;

typedef struct Bucket_825FA398 {
    int count;
    Item_825FA398 *head;
    int f8;
} Bucket_825FA398;

typedef struct Pool_825FA398 {
    int count;
    int f4;
    Group_825FA398 *groups;
    int fc;
    Bucket_825FA398 buckets[3];
} Pool_825FA398;

extern void fn_82522ED8(void *p);

void fn_825FA398(Pool_825FA398 *self)
{
    int i;
    Item_825FA398 *item;
    Item_825FA398 *nextItem;
    Group_825FA398 *group;
    Group_825FA398 *nextGroup;
    Sub_825FA398 *sub;
    Sub_825FA398 *nextSub;

    for (i = 0; i < 3; i++) {
        item = self->buckets[i].head;
        while (item != 0) {
            nextItem = item->next;
            fn_82522ED8(item);
            item = nextItem;
        }
        self->buckets[i].count = 0;
        self->buckets[i].head = 0;
    }
    group = self->groups;
    while (group != 0) {
        sub = group->subs;
        nextGroup = group->next;
        while (sub != 0) {
            nextSub = sub->next;
            fn_82522ED8(sub);
            sub = nextSub;
        }
        group->subs = 0;
        fn_82522ED8(group);
        group = nextGroup;
    }
    self->count = 0;
    self->groups = 0;
}
