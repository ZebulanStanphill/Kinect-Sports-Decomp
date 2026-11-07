typedef struct Ref_826821F0 {
    int f0;
    int f4;
    int count;
} Ref_826821F0;

typedef struct Obj_826821F0 {
    void *vtable;
    int f4;
    Ref_826821F0 *ref;
} Obj_826821F0;

extern void fn_8267C488(Obj_826821F0 *self);
extern void fn_826944C8(Ref_826821F0 *ref);
extern unsigned int lbl_82005798;

void fn_826821F0(Obj_826821F0 *self)
{
    Ref_826821F0 *ref = self->ref;

    self->vtable = &lbl_82005798;
    if (--ref->count == 0) {
        fn_826944C8(ref);
    }
    fn_8267C488(self);
}
