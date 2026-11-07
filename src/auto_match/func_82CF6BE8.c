typedef struct VT_82CF6BE8 VT_82CF6BE8;

typedef struct Obj_82CF6BE8 {
    VT_82CF6BE8 *vt;
    struct Obj_82CF6BE8 *inner;
} Obj_82CF6BE8;

struct VT_82CF6BE8 {
    void *slot0;
    void *slot4;
    void (*one)(Obj_82CF6BE8 *self, int item, int size);
    void *slotC;
    void *slot10;
    void *slot14;
    void *slot18;
    void (*many)(Obj_82CF6BE8 *self, int *items, int count, int size);
};

void fn_82CF6BE8(Obj_82CF6BE8 *self, int *items, int count, int size)
{
    if (size <= 0x2000) {
        int i;
        for (i = 0; i < count; i++) {
            self->vt->one(self, items[i], size);
        }
    } else {
        self->inner->vt->many(self->inner, items, count, size);
    }
}
