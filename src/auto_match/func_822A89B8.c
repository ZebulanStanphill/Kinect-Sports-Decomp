typedef struct Variant_822A89B8 {
    int words[12];
} Variant_822A89B8;

typedef struct Node_822A89B8 {
    int left;
    int parent;
    int right;
    int value;
} Node_822A89B8;

typedef struct Tree_822A89B8 {
    int alloc;
    Node_822A89B8 *head;
    int size;
} Tree_822A89B8;

typedef struct Slot_822A89B8 {
    int f0;
    Tree_822A89B8 tree;
} Slot_822A89B8;

typedef struct Source_822A89B8 {
    char pad[0x10];
    unsigned int f10;
} Source_822A89B8;

extern void *fn_828648F0(void *dst, void *src);
extern Node_822A89B8 **fn_822A9D80(Node_822A89B8 **out, Tree_822A89B8 *t, void *key);
extern void fn_822924C0(void *dst, void *src);
extern void fn_82864898(void *self);

int fn_822A89B8(Slot_822A89B8 *slots, int index, Source_822A89B8 *src, void *out)
{
    Variant_822A89B8 key;
    Node_822A89B8 *it;
    Slot_822A89B8 *slot;

    if (src->f10 == 0) {
        return 0x80004005;
    }
    fn_828648F0(&key, src);
    slot = &slots[index];
    fn_822A9D80(&it, &slot->tree, &key);
    if (it != slot->tree.head) {
        fn_822924C0(out, &it->value);
        fn_82864898(&key);
        return 0;
    }
    fn_82864898(&key);
    return 0x80004005;
}
