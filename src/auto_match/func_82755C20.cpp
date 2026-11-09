// Object_82755C20::SetValue: stores *in into the object's value, then hands
// the value to List_827AECA8::SetAll (func_827AECA8.cpp) of the list that each
// entry's item holds at offset 0x154, when it has one. The original tests that
// word as a signed int (cmpwi), so it is kept as an int here.
struct List_827AECA8 {
    void SetAll(int *v);
};

struct Item_82755C20 {
    char pad[0x154];
    int list;
};

struct Entry_82755C20 {
    Item_82755C20 *item;
    int pad;
};

struct Value_82755C20 {
    int v;
};

struct Object_82755C20 {
    Entry_82755C20 *entries;
    unsigned count;
    int x, y;
    Value_82755C20 value;

    void SetValue(int *in);
};

static __forceinline void set(Value_82755C20 *p, int *v)
{
    p->v = *v;
}

void Object_82755C20::SetValue(int *in)
{
    Object_82755C20 *p = this;
    Value_82755C20 *v = &p->value;
    set(v, in);
    for (unsigned i = 0, off = 0; i < p->count; i++, off += 8) {
        int list = p->entries[i].item->list;
        if (list)
            ((List_827AECA8 *)list)->SetAll(&v->v);
    }
}
