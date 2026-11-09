typedef struct Releasable_82E65548 Releasable_82E65548;
typedef struct ReleasableVtbl_82E65548 {
    void (*slot0)(Releasable_82E65548 *self);
    void (*slot1)(Releasable_82E65548 *self);
    void (*Release)(Releasable_82E65548 *self);
} ReleasableVtbl_82E65548;
struct Releasable_82E65548 {
    ReleasableVtbl_82E65548 *vt;
};

typedef struct Object_82E65548 {
    void *vt;
    void *vt2;
    unsigned int field8;
    Releasable_82E65548 *child;
} Object_82E65548;

extern char lbl_821550F4[];
extern char lbl_821550E0[];

void fn_82E65548(Object_82E65548 *self)
{
    self->vt = lbl_821550F4;
    self->vt2 = lbl_821550E0;
    if (self->child != 0) {
        self->child->vt->Release(self->child);
        self->child = 0;
    }
}
