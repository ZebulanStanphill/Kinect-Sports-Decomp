extern "C" void fn_826824B0(void *p);
extern "C" void fn_8267C498(void *p);
extern "C" void fn_8269A990(void *a, void *b);
extern "C" void fn_8267BE38(void *a);

struct Ptr_826CECC8 {
    void *p;
    __forceinline ~Ptr_826CECC8() { if (p != 0) fn_8267C498(p); }
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

struct Obj_826CECC8 {
    unsigned char pad[8];
    Ptr_826CECC8 p08;
    Ptr_826CECC8 p0c;
    unsigned char pad10[0x10];
    Pair_826ADCE8 pair;
    int unk2c;
    void *f30;
    void *f34;
    __forceinline ~Obj_826CECC8()
    {
        fn_8269A990(f30, f34);
        fn_8267BE38(f30);
    }
};

extern "C" void fn_826CECC8(Obj_826CECC8 *self)
{
    self->Obj_826CECC8::~Obj_826CECC8();
}
