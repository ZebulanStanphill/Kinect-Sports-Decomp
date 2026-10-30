// Forwards to slot 0x48 of the current element (elems[idx], 0x3c bytes each). One
// implementation of that slot, fn_82C04E00, takes an unsigned int, so this does too.
typedef struct Elem_82C0BC88 Elem_82C0BC88;

typedef struct {
    void *f[18];
    void (*fn48)(Elem_82C0BC88 *self, unsigned int a);
} ElemVtbl_82C0BC88;

struct Elem_82C0BC88 {
    ElemVtbl_82C0BC88 *vt;
    char pad[0x38];
};

typedef struct {
    char pad[0x30];
    Elem_82C0BC88 *elems;
    char pad2[0xc];
    int idx;
} Obj_82C0BC88;

void fn_82C0BC88(Obj_82C0BC88 *p, unsigned int a)
{
    Elem_82C0BC88 *e = &p->elems[p->idx];

    e->vt->fn48(e, a);
}
