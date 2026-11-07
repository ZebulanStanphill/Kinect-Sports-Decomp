typedef struct Tree_828EF460 {
    int unk0;
    unsigned int head;
} Tree_828EF460;

typedef struct Iter_828EF460 {
    unsigned int node;
} Iter_828EF460;

extern unsigned int fn_828EEAA8(Tree_828EF460 *tree, void *key);
extern unsigned char fn_828A0C20(void *key, void *nodeKey);

Iter_828EF460 *fn_828EF460(Iter_828EF460 *result, Tree_828EF460 *tree, void *key)
{
    Iter_828EF460 it;
    Iter_828EF460 end;
    Iter_828EF460 *p;

    it.node = fn_828EEAA8(tree, key);
    if (it.node == tree->head || fn_828A0C20(key, (void *)(it.node + 0xc)) != 0) {
        end.node = tree->head;
        p = &end;
    } else {
        p = &it;
    }
    *result = *p;
    return result;
}
