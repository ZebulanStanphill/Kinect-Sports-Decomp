// Teardown of a game object: runs the base part (fn_826BE530), releases the two
// reference pairs at +0x44 and +0x50 (fn_826C31F0) and every element of the
// ref-counted handle array at +0x5c (count read once, array pointer re-read
// after each release). Cluster c6b435b36f98 (11 functions, same body).
// The element is taken by reference (`int &o = (*arr)[i]`): reading it through
// the slot address is what gives `self` r30 and the loop counter r29; a value
// copy (`int o = ...`) swaps them.
extern "C" void fn_826BE530(void *self);
extern "C" void fn_826C31F0(void *pair);

struct RefObj {
    virtual void Destroy(int flags);
    int f4;
    unsigned refs;  // low 28 bits: count; bits 28-30: state

    void Release()
    {
        unsigned c = refs - 1;
        refs = c;
        if ((c & 0x70000000) != 0x10000000) {
            refs = (c & 0x8fffffff) | 0x10000000;
            Destroy(1);
        }
    }
};

struct HandleArray {
    int *data;
    unsigned size;

    unsigned GetSize() const { return size; }
    int &operator[](unsigned i) { return data[i]; }
};

struct RefPair {
    RefObj *p[2];
    int f8;
};

struct Owner {
    char pad0[0x44];
    RefPair pairA;       // +0x44
    RefPair pairB;       // +0x50
    HandleArray *items;  // +0x5c
};

extern "C" void fn_8271C8C8(Owner *self)
{
    fn_826BE530(self);
    fn_826C31F0(&self->pairA);
    fn_826C31F0(&self->pairB);
    if (self->items != 0) {
        unsigned n = self->items->GetSize();
        for (unsigned i = 0; i < n; i++) {
            int &o = (*self->items)[i];
            if (o != 0)
                ((RefObj *)o)->Release();
        }
    }
}
