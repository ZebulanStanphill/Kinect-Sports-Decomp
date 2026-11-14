typedef struct Desc_82B8F208 Desc_82B8F208;

typedef struct Link_82B8F208 {
    Desc_82B8F208 *desc;
    struct Link_82B8F208 *next;
} Link_82B8F208;

typedef struct Info_82B8F208 {
    char pad[0x10];
    Link_82B8F208 head;
} Info_82B8F208;

struct Desc_82B8F208 {
    char pad[0x30];
    unsigned int pad9 : 9;
    unsigned int hidden : 1;
    unsigned int pad10 : 1;
    unsigned int visible : 1;
    unsigned int disabled : 1;
    unsigned int rest : 19;
    char pad2[0x74 - 0x34];
    Info_82B8F208 *info;
};

typedef struct Node_82B8F208 {
    Desc_82B8F208 *desc;
    int pad4;
    struct Node_82B8F208 *next;
} Node_82B8F208;

typedef struct GroupData_82B8F208 {
    char pad[0xc];
    Node_82B8F208 *nodes;
} GroupData_82B8F208;

typedef struct Group_82B8F208 {
    int pad0;
    GroupData_82B8F208 *data;
} Group_82B8F208;

typedef struct Iter_82B8F208 {
    Desc_82B8F208 *desc;
    Group_82B8F208 *group;
    Link_82B8F208 *cur;
    int pad0c;
    Desc_82B8F208 *found;
    GroupData_82B8F208 *data;
    unsigned char saved;
    unsigned char valid;
} Iter_82B8F208;

static __forceinline int NotNull(Node_82B8F208 *p) { if (p) return 1; return 0; }

void fn_82B8F208(Iter_82B8F208 *self, Group_82B8F208 *group)
{
    GroupData_82B8F208 *data;
    Node_82B8F208 *node;
    Desc_82B8F208 *desc;
    Link_82B8F208 *link;

    self->group = group;
    self->valid = 0;
    if (group == 0)
        return;
    if ((unsigned char)self->desc->disabled)
        return;
    data = group->data;
    for (node = data->nodes; ; node = node->next) {
        if (!NotNull(node))
            return;
        desc = node->desc;
        if ((unsigned char)desc->disabled)
            break;
    }
    link = &desc->info->head;
    if (desc->info->head.desc == 0)
        return;
    self->found = desc;
    self->data = data;
    self->cur = link;
    for (; self->cur != 0; self->cur = self->cur->next) {
        Desc_82B8F208 *d = self->cur->desc;
        if (!(unsigned char)d->hidden && (unsigned char)d->visible)
            break;
    }
    self->valid = self->saved;
}
