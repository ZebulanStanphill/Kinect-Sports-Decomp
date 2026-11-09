// A member of a list object (no known class name, so named List_827AECA8): it
// stores *v into word 0x18 of each of its count 0x28-byte items, then clears
// the two flag bytes at offsets 0x18 and 0x19 of the list. It matches only as a
// member function: the original adds the scaled index first when it forms an
// item's address, which a plain C function does not reproduce (99.33%). Its
// caller is Object_82755C20::SetValue, func_82755C20.cpp.
struct Item_827AECA8 {
    int f0[6];
    int f18;
    int f1c[3];
};

struct List_827AECA8 {
    Item_827AECA8 *items;
    unsigned int count;
    int f8[4];
    unsigned char f18;
    unsigned char f19;

    void SetAll(int *v);
};

void List_827AECA8::SetAll(int *v)
{
    unsigned int n = count;
    for (unsigned int i = 0; i < n; i++)
        items[i].f18 = *v;
    f18 = 0;
    f19 = 0;
}
