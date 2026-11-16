typedef struct Message_8253C720 {
    unsigned int type;
    unsigned int size;
} Message_8253C720;

typedef struct Item_8253C720 Item_8253C720;

typedef struct VTable_8253C720 {
    void *unused[3];
    void (*send)(Item_8253C720 *, Message_8253C720 *);
} VTable_8253C720;

struct Item_8253C720 {
    VTable_8253C720 *vtable;
    char unknown[0x4c - 4];
    void *active;
};

typedef struct Request_8253C720 {
    Message_8253C720 header;
    Item_8253C720 *item;
    int handled;
} Request_8253C720;

typedef struct Owner_8253C720 {
    char unknown[0x44];
    Item_8253C720 **items;
    int count;
    int unknown4c;
    void **pending;
    int pendingCount;
} Owner_8253C720;

extern void *XMemSet(void *, int, unsigned int);
extern void fn_8257CB40(void *, Request_8253C720 *, int);
extern void fn_82599A38(void *, void *);

void fn_8253C720(Owner_8253C720 *self, char *context)
{
    int index;
    Request_8253C720 request;
    for (index = 0; index < self->count; ++index) {
        if (self->items[index]->active) {
            XMemSet(&request.item, 0, 8);
            request.header.type = 0x59;
            request.header.size = 0x10;
            request.item = self->items[index];
            fn_8257CB40(context + 0x78, &request, 1);
            if (request.handled == 0) {
                Message_8253C720 message;
                message.type = 0x17;
                message.size = 8;
                self->items[index]->vtable->send(self->items[index], &message);
            }
        }
    }
    self->count = 0;
    for (index = 0; index < self->pendingCount; ++index) {
        fn_82599A38(context + 0x7fc, self->pending[index]);
    }
    self->pendingCount = 0;
}
