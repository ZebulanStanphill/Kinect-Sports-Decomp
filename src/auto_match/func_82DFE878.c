typedef struct Data_82DFE878 {
    char reserved00[0x20];
    signed char count; /* 0x20 */
} Data_82DFE878;
typedef struct Object_82DFE878 Object_82DFE878;
typedef struct Handler_82DFE878 Handler_82DFE878;

typedef struct HandlerVtable_82DFE878 {
    void *reserved00[4];
    void (*update)(Handler_82DFE878 *, float, Object_82DFE878 *, void *);
} HandlerVtable_82DFE878;

struct Handler_82DFE878 {
    HandlerVtable_82DFE878 *vtable;
};

struct Object_82DFE878 {
    char reserved00[0x1c];
    Data_82DFE878 *data; /* 0x1c */
    char reserved20[0x1c];
    Handler_82DFE878 *handler; /* 0x3c */
};

typedef struct Input_82DFE878 {
    int reserved00[2];
    float time; /* 0x08 */
} Input_82DFE878;
typedef struct Allocator_82DFE878 Allocator_82DFE878;

typedef struct AllocatorVtable_82DFE878 {
    void *reserved00[4];
    void (*release)(Allocator_82DFE878 *, void *, unsigned int, int);
} AllocatorVtable_82DFE878;

struct Allocator_82DFE878 {
    AllocatorVtable_82DFE878 *vtable;
};

typedef struct Router_82DFE878 {
    char *top; /* 0x00 */
    char reserved04[0xc];
    Allocator_82DFE878 *allocator; /* 0x10 */
} Router_82DFE878;

extern void fn_82DFC8F8(Object_82DFE878 *);
extern Router_82DFE878 *fn_82CE5410(void);
extern void fn_82DFE6F8(Object_82DFE878 *, const Input_82DFE878 *, void *);

void fn_82DFE878(Object_82DFE878 *self, const Input_82DFE878 *input)
{
    int count;
    Router_82DFE878 *router;
    char *storage;
    Handler_82DFE878 *handler;
    Allocator_82DFE878 *allocator;
    fn_82DFC8F8(self);
    count = self->data->count;
    router = fn_82CE5410();
    storage = router->top;
    router->top = storage + ((count * 0x60 + 0x7fU) & ~0x7fU);
    count |= 0x80000000;
    handler = self->handler;
    handler->vtable->update(handler, input->time, self, storage);
    fn_82DFE6F8(self, input, storage);
    fn_82CE5410()->top = storage;
    router = fn_82CE5410();
    allocator = router->allocator;
    if ((count & (int)0x80000000) == 0) {
        allocator->vtable->release(allocator, storage, count & 0x3fffffff, 0x60);
    }
}
