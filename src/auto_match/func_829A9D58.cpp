// Recursively counts a use of a node and its parent chain (index-first lwzx = member function).
struct Node_829A9D58 {
    char pad0[8];
    int parent;
    unsigned int count;
    int *items;
};

extern "C" int fn_829A9AF8(struct Ctx_829A9D58 *self, Node_829A9D58 *node);
extern "C" int fn_8295A330(struct Ctx_829A9D58 *self, int *end);

struct Ctx_829A9D58 {
    char pad0[0x14];
    Node_829A9D58 **nodes;
    char pad18[0x110 - 0x18];
    int *uses;
    int AddUse(int index, int slot);
};

int Ctx_829A9D58::AddUse(int index, int slot)
{
    Node_829A9D58 *node = nodes[index];

    if (node->parent != -1 && AddUse(node->parent, slot) < 0)
        goto fail;
    if (fn_829A9AF8(this, node) < 0)
        goto fail;
    if (fn_8295A330(this, node->items + node->count) < 0)
        goto fail;
    uses[slot]++;
    return 0;
fail:
    return 0x8007000E;
}
