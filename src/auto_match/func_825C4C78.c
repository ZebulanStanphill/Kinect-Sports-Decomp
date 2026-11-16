typedef struct Resource_825C4C78 {
    char padding[0x1a4];
    unsigned char active;
    unsigned char pending;
    unsigned char expired;
} Resource_825C4C78;

typedef struct Item_825C4C78 {
    void *unused;
    Resource_825C4C78 *resource;
} Item_825C4C78;

typedef struct Node_825C4C78 {
    Item_825C4C78 *item;
    float start;
    float duration;
    char padding[8];
    struct Node_825C4C78 *next;
} Node_825C4C78;
typedef struct List_825C4C78 List_825C4C78;

typedef struct Table_825C4C78 {
    void *unused[9];
    void (*trim)(List_825C4C78 *self, float time);
} Table_825C4C78;

struct List_825C4C78 {
    Table_825C4C78 *vtable;
    void *owner;
    Node_825C4C78 *head;
    unsigned int unused;
    unsigned int size;
};

extern void fn_82575DF0(void *owner, Resource_825C4C78 *resource);
extern void fn_826170B8(Item_825C4C78 *self, Resource_825C4C78 *resource, float time);

void fn_825C4C78(List_825C4C78 *self, float time)
{
    Node_825C4C78 *node = self->head;
    while (node != 0) {
        Item_825C4C78 *item = node->item;
        Resource_825C4C78 *resource = item->resource;
        if (resource->active || resource->pending ||
            (!resource->expired && (node->duration <= 0.0f || node->start + node->duration >= time))) {
            fn_826170B8(item, resource, time);
            node = node->next;
        } else {
            node = node->next;
            fn_82575DF0(self->owner, resource);
        }
    }
    if (self->size > 0x80000) {
        self->vtable->trim(self, time);
    }
}
