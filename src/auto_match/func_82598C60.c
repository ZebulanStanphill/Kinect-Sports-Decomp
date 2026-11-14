struct Node_82598C60;

typedef struct Node_82598C60 {
    void *pad0;
    struct Node_82598C60 *next;
    char pad8[0x180 - 8];
    void (*notify)(struct Node_82598C60 *self);
} Node_82598C60;

typedef struct Group_82598C60 {
    Node_82598C60 *head;
    char pad4[0x24 - 4];
    int active;
    int index;
} Group_82598C60;

typedef struct Entry_82598C60 {
    Node_82598C60 *node;
    char pad[0x30];
} Entry_82598C60;

typedef struct Table_82598C60 {
    unsigned short ownerOffset;
    Entry_82598C60 *begin;
    Entry_82598C60 *end;
} Table_82598C60;

typedef struct List_82598C60 {
    Table_82598C60 *table;
    int count;
} List_82598C60;

typedef struct Self_82598C60 {
    char pad[0x8cc];
    List_82598C60 list;
} Self_82598C60;

extern void fn_825A24C0(Table_82598C60 *table, Entry_82598C60 *entry);

static __forceinline Group_82598C60 *GetGroup(Table_82598C60 *table)
{
    return (Group_82598C60 *)((char *)table->end - table->ownerOffset);
}

static __forceinline Entry_82598C60 *Find(Table_82598C60 *table, Node_82598C60 *node)
{
    Entry_82598C60 *e;

    for (e = table->begin; e < table->end; e++) {
        if (e->node == node)
            return e;
    }
    return 0;
}

void fn_82598C60(Self_82598C60 *self, Node_82598C60 *node)
{
    List_82598C60 *list = &self->list;
    Node_82598C60 *front = 0;
    int wasFront;

    if (list->count != 0)
        front = GetGroup(list->table)->head;
    wasFront = node == front;
    fn_825A24C0(list->table, Find(list->table, node));
    if (--list->count != 0 && wasFront) {
        Group_82598C60 *group = GetGroup(list->table);
        Node_82598C60 *n;

        group->active = 1;
        for (n = group->head; n != 0; n = n->next)
            n->notify(n);
        group->index = -1;
    }
}
