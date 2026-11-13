typedef struct { char pad[0x84]; unsigned int id; } Item_828999E8;
typedef struct { char pad[0x18]; char *iface; } Node_828999E8;
typedef struct { Node_828999E8 *node; } Iter_828999E8;

extern void fn_828E5F60(Iter_828999E8 *it);

static __forceinline Item_828999E8 *ToItem(char *iface)
{
    if (iface != 0) return (Item_828999E8 *)(iface - 0x50);
    return 0;
}

Iter_828999E8 *fn_828999E8(Iter_828999E8 *ret, Iter_828999E8 first, Iter_828999E8 last, unsigned int id)
{
    for (; first.node != last.node; fn_828E5F60(&first)) {
        if (ToItem(first.node->iface)->id == id) {
            break;
        }
    }
    *ret = first;
    return ret;
}
