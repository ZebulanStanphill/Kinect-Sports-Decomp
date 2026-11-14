typedef struct Item_822B1D80 { char pad0[0x26]; unsigned char hidden; } Item_822B1D80;
typedef struct Node_822B1D80 {
    struct Node_822B1D80 *next;
    struct Node_822B1D80 *prev;
    int pad8[2];
    Item_822B1D80 *item;
} Node_822B1D80;
typedef struct Inner_822B1D80 { char pad0[0x200]; Node_822B1D80 *items; } Inner_822B1D80;
typedef struct Outer_822B1D80 { char pad0[0x10]; Inner_822B1D80 *inner; } Outer_822B1D80;
typedef struct Self_822B1D80 { char pad0[0x10]; Outer_822B1D80 *outer; } Self_822B1D80;

typedef struct Impl_822B1D80 Impl_822B1D80;
struct Impl_822B1D80 {
    struct {
        void *f0;
        unsigned char (*call)(Impl_822B1D80 *self, Item_822B1D80 *item);
    } *vt;
};
typedef struct Func_822B1D80 {
    char pad[0x10];
    Impl_822B1D80 *impl;
} Func_822B1D80;

extern unsigned char fn_8288B760(Outer_822B1D80 *outer);
extern unsigned char fn_828B1340(Inner_822B1D80 *inner);
extern void fn_82359C18(Func_822B1D80 *f);
extern void fn_82381BC0(Node_822B1D80 **it);
extern __declspec(noreturn) void fn_82F63108(void);

static __forceinline unsigned char Call(Func_822B1D80 *f, Item_822B1D80 *item)
{
    if (f->impl == 0) {
        fn_82F63108();
    }
    return f->impl->vt->call(f->impl, item);
}

unsigned char fn_822B1D80(Self_822B1D80 *self, Func_822B1D80 *pred, unsigned char all)
{
    unsigned char result;
    Node_822B1D80 *it;
    Node_822B1D80 *head;

    if (!fn_8288B760(self->outer)) {
        fn_82359C18(pred);
        return 0;
    }
    if (fn_828B1340(self->outer->inner)) {
        fn_82359C18(pred);
        return 0;
    }
    result = 1;
    head = self->outer->inner->items;
    it = head->next;
    if (it != head) do {
        if (all || it->item->hidden == 0) {
            if (!Call(pred, it->item)) {
                result = 0;
                break;
            }
        }
        fn_82381BC0(&it);
    } while (it != self->outer->inner->items);
    fn_82359C18(pred);
    return result;
}
