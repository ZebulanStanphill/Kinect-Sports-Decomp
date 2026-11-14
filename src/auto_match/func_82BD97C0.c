typedef struct Target_82BD97C0 Target_82BD97C0;
typedef struct {
    void *slot[6];
    void (*submit)(Target_82BD97C0 *self, void *a, void *b, void *c, int flags);
} TargetVtbl_82BD97C0;
struct Target_82BD97C0 {
    TargetVtbl_82BD97C0 *vt;
};

typedef struct {
    unsigned char pad0[0x48];
    Target_82BD97C0 *primary;
    int pad4c;
    Target_82BD97C0 *secondary;
} Owner_82BD97C0;

void fn_82BD97C0(Owner_82BD97C0 *self, int secondary, void *a, void *b, void *c)
{
    (secondary ? self->secondary : self->primary)->vt->submit(secondary ? self->secondary : self->primary, a, b, c, 0);
}
