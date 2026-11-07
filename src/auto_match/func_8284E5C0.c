typedef struct Node_8284E5C0 Node_8284E5C0;
struct Node_8284E5C0 {
    unsigned int unk0;
    unsigned int unk4;
    unsigned int countA;
    unsigned int unkC;
    unsigned int countB;
};

unsigned int fn_8284E5C0(Node_8284E5C0 *node, Node_8284E5C0 **children, int count)
{
    unsigned int size;
    int i;

    size = (((node->countA * 12 + node->countB) * 5 + count) * 4 + 0x4f) & ~0xfu;
    for (i = 0; i < count; i++) {
        if (children[i] != 0) {
            size += fn_8284E5C0(children[i], 0, 0);
        }
    }
    return size;
}
