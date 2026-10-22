typedef struct Item {
    char pad[0x40];
    int v;
} Item;

typedef struct S {
    char pad0[0xc];
    void *ready;
    char pad1[0x48 - 0x10];
    char list[0xb0 - 0x48];
    unsigned int count;
} S;

extern void fn_82EE3630(void *list, unsigned int idx, Item ***out);

int fn_82EE3C50(S *s, unsigned short idx, unsigned short *out)
{
    Item **it;
    if (s->ready == 0) {
        return 0xc00d36b6;
    }
    if (out == 0) {
        return 0x80070057;
    }
    if (idx >= s->count) {
        return 0xc00d36d5;
    }
    fn_82EE3630(s->list, idx, &it);
    *out = (unsigned short)(*it)->v;
    return 0;
}
