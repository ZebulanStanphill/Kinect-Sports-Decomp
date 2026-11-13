typedef struct Obj_82E228B8 Obj_82E228B8;

typedef struct Vtbl_82E228B8 {
    void *slots[9];
    void (*apply)(Obj_82E228B8 *self, int a, int b, int c, int d, int e, int f, int g, int h, int i);
} Vtbl_82E228B8;

struct Obj_82E228B8 {
    Vtbl_82E228B8 *vt;
};

void fn_82E228B8(Obj_82E228B8 *self, int a)
{
    self->vt->apply(self, a, 0xd, 0x33, 6, 0x17, 0xf, 0x25, 0x3c, 0x16);
}
