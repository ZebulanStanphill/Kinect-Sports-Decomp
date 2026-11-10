typedef struct Tree_828B3DF8 {
    int unk0;
    unsigned int head;
} Tree_828B3DF8;

typedef struct Iter_828B3DF8 {
    unsigned int node;
} Iter_828B3DF8;

extern unsigned int fn_828B3080(Tree_828B3DF8 *tree, void *key);
static __forceinline unsigned char less_828B3DF8(void *key, void *nodeKey) {return *(unsigned __int64 *)key < *(unsigned __int64 *)nodeKey;}

Iter_828B3DF8 *fn_828B3DF8(Iter_828B3DF8 *result, Tree_828B3DF8 *tree, void *key)
{
    Iter_828B3DF8 it;
    Iter_828B3DF8 end;
    Iter_828B3DF8 *p;

    it.node = fn_828B3080(tree, key);
    if (it.node == tree->head || less_828B3DF8(key, (void *)(it.node + 0x10)) != 0) {
        end.node = tree->head;
        p = &end;
    } else {
        p = &it;
    }
    *result = *p;
    return result;
}
