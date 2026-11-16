void __dcbt(int offset, const void *base);

typedef struct Resource_82581F00 {
    char padding[0x140];
    void *renderData; /* 0x140 */
    char padding144[0x1a4 - 0x144];
    unsigned char active;
    unsigned char pending;
    unsigned char expired;
} Resource_82581F00;

typedef struct Item_82581F00 {
    void *unused;
    Resource_82581F00 *resource;
} Item_82581F00;

typedef struct Node_82581F00 {
    Item_82581F00 *item;
    int unused;
    float start;
    float duration;
    struct Node_82581F00 *previous;
    struct Node_82581F00 *next;
} Node_82581F00;

typedef struct RenderNode_82581F00 {
    Resource_82581F00 *resource;
    char padding[12];
    struct RenderNode_82581F00 *next;
} RenderNode_82581F00;

typedef struct List_82581F00 List_82581F00;

typedef struct Table_82581F00 {
    void *unused[9];
    void (*trim)(List_82581F00 *self, float time);
} Table_82581F00;

struct List_82581F00 {
    Table_82581F00 *vtable;
    void *owner;
    char padding08[0xdc - 8];
    Node_82581F00 *head;
    RenderNode_82581F00 *renderHead;
    int unused;
    void *renderState;
    unsigned int size;
};

extern void *lbl_8320A898;
extern unsigned char fn_82575DF0(void *owner, Resource_82581F00 *resource);
extern void fn_82583170(Item_82581F00 *item, float time);
extern void fn_82645EA8(void *device, unsigned int mode);
extern void fn_8263CBB0(void *device, unsigned int index, void *state, unsigned __int64 flags);
extern void fn_825D7C08(Resource_82581F00 *resource);

void fn_82581F00(List_82581F00 *self, float time)
{
    Node_82581F00 *node = self->head;
    while (node != 0) {
        Node_82581F00 *next = node->next;
        Item_82581F00 *item;
        Resource_82581F00 *resource;
        __dcbt(0, next);
        item = node->item;
        resource = item->resource;
        if (resource->active || resource->pending ||
            (!resource->expired && (node->duration <= 0.0f || node->start + node->duration >= time))) {
            fn_82583170(item, time);
            node = node->next;
        } else {
            fn_82575DF0(self->owner, resource);
            node = next;
        }
    }
    if (self->size > 0x380000) {
        self->vtable->trim(self, time);
    }
    {
        RenderNode_82581F00 *render = self->renderHead;
        fn_82645EA8(lbl_8320A898, 3);
        fn_8263CBB0(lbl_8320A898, 0, self->renderState, 0x80000000);
        for (; render != 0; render = render->next) {
            Resource_82581F00 *resource = render->resource;
            if (resource != 0 && resource->renderData != 0) {
                fn_825D7C08(resource);
            }
        }
        fn_82645EA8(lbl_8320A898, 0);
    }
}
