typedef struct Tree_8288CCB8 {
    int unk0;
    unsigned int head;
} Tree_8288CCB8;

typedef struct Iter_8288CCB8 {
    unsigned int node;
} Iter_8288CCB8;

extern unsigned int fn_8288B8B0(Tree_8288CCB8 *tree, void *key);
extern unsigned char fn_828B5650(void *key, void *nodeKey);

Iter_8288CCB8 *fn_8288CCB8(Iter_8288CCB8 *result, Tree_8288CCB8 *tree, void *key)
{
    Iter_8288CCB8 it;
    Iter_8288CCB8 end;
    Iter_8288CCB8 *p;

    it.node = fn_8288B8B0(tree, key);
    if (it.node == tree->head || fn_828B5650(key, (void *)(it.node + 0xc)) != 0) {
        end.node = tree->head;
        p = &end;
    } else {
        p = &it;
    }
    *result = *p;
    return result;
}
