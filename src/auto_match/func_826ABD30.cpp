extern "C" void fn_826824B0(void *p);

struct Base_826ABD30;
extern "C" void fn_826C1AD8(Base_826ABD30 *self);

struct Base_826ABD30 {
    unsigned char pad[0x30];
    __forceinline ~Base_826ABD30() { fn_826C1AD8(this); }
};

struct Ptr_826ABD30 {
    void *p;
    __forceinline ~Ptr_826ABD30() { if (p != 0) fn_826824B0(p); }
};

struct Pair_826ADCE8 {
    void *a;
    void *b;
    unsigned char flags;
    __forceinline ~Pair_826ADCE8()
    {
        if ((flags & 2) == 0 && a != 0) {
            fn_826824B0(a);
        }
        a = 0;
        if ((flags & 1) == 0 && b != 0) {
            fn_826824B0(b);
        }
        b = 0;
    }
};

struct Obj_826ABD30 : Base_826ABD30 {
    Ptr_826ABD30 p30;
    Ptr_826ABD30 p34;
    int unk38;
    Pair_826ADCE8 pair;
    __forceinline ~Obj_826ABD30() {}
};

extern "C" void fn_826ABD30(Obj_826ABD30 *self)
{
    self->Obj_826ABD30::~Obj_826ABD30();
}
