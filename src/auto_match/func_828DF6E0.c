typedef struct Tree_828DF6E0 {
    int unk0;
    unsigned int head;
} Tree_828DF6E0;

typedef struct Iter_828DF6E0 {
    unsigned int node;
} Iter_828DF6E0;

extern unsigned int fn_828DF3F0(Tree_828DF6E0 *tree, void *key);
extern unsigned char fn_828E0270(void *key, void *nodeKey);

Iter_828DF6E0 *fn_828DF6E0(Iter_828DF6E0 *result, Tree_828DF6E0 *tree, void *key)
{
    Iter_828DF6E0 it;
    Iter_828DF6E0 end;
    Iter_828DF6E0 *p;

    it.node = fn_828DF3F0(tree, key);
    if (it.node == tree->head || fn_828E0270(key, (void *)(it.node + 0xc)) != 0) {
        end.node = tree->head;
        p = &end;
    } else {
        p = &it;
    }
    *result = *p;
    return result;
}
