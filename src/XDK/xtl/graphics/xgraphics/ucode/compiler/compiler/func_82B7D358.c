extern int *fn_82B7BD28(int heap, int size);
extern unsigned int lbl_820DB520;

typedef struct Obj_82B7D358 {
    void *vtable;
    int owner;
    int pad8;
    int padC;
    int ctx;
} Obj_82B7D358;

static __forceinline Obj_82B7D358 *Init_82B7D358(Obj_82B7D358 *o, int owner, int ctx)
{
    o->owner = owner;
    o->ctx = ctx;
    o->vtable = &lbl_820DB520;
    return o;
}

Obj_82B7D358 *fn_82B7D358(int param_1, int param_2)
{
    int heap;
    int *mem;
    Obj_82B7D358 *o;
    Obj_82B7D358 *result;

    heap = *(int *)(param_2 + 0x5a8);
    mem = fn_82B7BD28(heap, 0x18);
    o = (Obj_82B7D358 *)(mem + 1);
    mem[0] = heap;
    result = o ? Init_82B7D358(o, param_1, param_2) : 0;
    return result;
}
