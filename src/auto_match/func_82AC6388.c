typedef struct Item { int a; int b; unsigned int flags; } Item;
typedef struct Obj { char pad[0x5c]; Item *slots[1]; } Obj;
extern void fn_82AD2128(Item *it, int idx, Item *old);

void fn_82AC6388(Obj *o, int idx, Item *it)
{
    if (o->slots[idx] != 0) {
        fn_82AD2128(it, idx, o->slots[idx]);
    }
    o->slots[idx] = it;
    it->flags |= 0x2000000;
}
