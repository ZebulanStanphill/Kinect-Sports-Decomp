typedef struct It_828E3380 {
    char *node;
} It_828E3380;

typedef struct Tree_828E3380 {
    int unk0;
    char *head;
} Tree_828E3380;

extern unsigned char fn_828E0270(void *key, char *val);
extern It_828E3380 fn_828E2CC8(Tree_828E3380 *t, void *key);

static __forceinline It_828E3380 End_828E3380(Tree_828E3380 *t)
{
    It_828E3380 e;
    e.node = t->head;
    return e;
}

It_828E3380 *fn_828E3380(It_828E3380 *ret, Tree_828E3380 *t, void *key)
{
    It_828E3380 it = fn_828E2CC8(t, key);
    It_828E3380 end;
    It_828E3380 *p;

    if (it.node == t->head || fn_828E0270(key, it.node + 0xc)) {
        end = End_828E3380(t);
        p = &end;
    } else {
        p = &it;
    }
    *ret = *p;
    return ret;
}
