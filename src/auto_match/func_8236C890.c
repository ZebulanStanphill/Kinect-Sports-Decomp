typedef struct Visitor_8236C890 Visitor_8236C890;

typedef struct Vtable_8236C890 {
    void *unused;
    void (*visit)(Visitor_8236C890 *, void *);
    void *unused2;
    void (*destroy)(Visitor_8236C890 *, unsigned int);
} Vtable_8236C890;

struct Visitor_8236C890 {
    Vtable_8236C890 *vtable;
    unsigned int *count;
    char pad[8];
};

typedef struct Callback_8236C890 {
    Visitor_8236C890 storage;
    Visitor_8236C890 *visitor;
} Callback_8236C890;

typedef struct Group_8236C890 {
    void **first;
    void **last;
} Group_8236C890;

typedef struct Object_8236C890 {
    char pad[0x20];
    Group_8236C890 **first;
    Group_8236C890 **last;
} Object_8236C890;

extern Vtable_8236C890 lbl_821B3020;
extern __declspec(noreturn) void fn_82F63108(void);

unsigned int fn_8236C890(Object_8236C890 *self)
{
    unsigned int count = 0;
    Callback_8236C890 callback;
    Group_8236C890 **group = self->first;
    Group_8236C890 **end = self->last;
    callback.storage.vtable = &lbl_821B3020;
    callback.storage.count = &count;
    callback.visitor = &callback.storage;
    for (; group < end; group++) {
        void **item = (*group)->first;
        void **last = (*group)->last;
        for (; item < last; item++) {
            if (*item) {
                if (!callback.visitor) {
                    fn_82F63108();
                }
                callback.visitor->vtable->visit(callback.visitor, *item);
            }
        }
    }
    if (callback.visitor) {
        callback.visitor->vtable->destroy(callback.visitor, callback.visitor != &callback.storage);
    }
    return count;
}
