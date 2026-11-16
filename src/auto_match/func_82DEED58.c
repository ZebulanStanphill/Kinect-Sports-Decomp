struct Item_82DEED58 {
    char padding[0xc];
    float first;  /* 0x0c */
    float second; /* 0x10 */
};

struct Array_82DEED58 {
    struct Item_82DEED58 **data;
    int count;
    int capacity;
};
struct Allocator_82DEED58;

struct Vtable_82DEED58 {
    void *unused[4];
    void (*free)(struct Allocator_82DEED58 *self, void *data, int count, int stride);
};

struct Allocator_82DEED58 {
    struct Vtable_82DEED58 *vtable;
};

struct Context_82DEED58 {
    char padding[0x10];
    struct Allocator_82DEED58 *allocator;
};
extern struct Context_82DEED58 *fn_82CE5410(void);
extern void fn_82DEDE28(void *self, int index, void *filter, struct Array_82DEED58 *items);

void fn_82DEED58(void *self, int index, void *filter, float first, float second)
{
    struct Array_82DEED58 items;
    struct Allocator_82DEED58 *allocator;
    items.data = 0;
    items.count = 0;
    items.capacity = 0x80000000;
    fn_82DEDE28(self, index, filter, &items);
    if (items.count != 0) {
        float inverse = 1.0f / items.count;
        float firstShare = inverse * first;
        float secondShare = inverse * second;
        int i;
        for (i = 0; i < items.count; ++i) {
            struct Item_82DEED58 *item = items.data[i];
            item->first = firstShare;
            item->second = secondShare;
        }
    }
    allocator = fn_82CE5410()->allocator;
    items.count = 0;
    if ((items.capacity & (int)0x80000000) == 0) {
        allocator->vtable->free(allocator, items.data, items.capacity & 0x3fffffff, 4);
    }
}
