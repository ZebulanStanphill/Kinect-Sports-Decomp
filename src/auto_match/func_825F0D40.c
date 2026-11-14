typedef struct Table_825F0D40 { void **data; } Table_825F0D40;
typedef struct Src_825F0D40 { char pad[0x98]; void **values; } Src_825F0D40;
typedef struct Res_825F0D40 { Src_825F0D40 *src; Table_825F0D40 *table; } Res_825F0D40;
typedef struct Dev_825F0D40 Dev_825F0D40;
typedef struct DevVt_825F0D40 { char pad[0x3c]; Res_825F0D40 *(*getRes)(Dev_825F0D40 *); } DevVt_825F0D40;
struct Dev_825F0D40 { DevVt_825F0D40 *vt; char pad[0x198]; void *f19c; };
typedef struct Slot_825F0D40 { int f0; int index; } Slot_825F0D40;
typedef struct Self_825F0D40 {
    char pad[0x40];
    Dev_825F0D40 *dev;
    Slot_825F0D40 *slot;
    char pad48[0x68];
    void **defaults;
    char padb4[4];
    void **overrides;
} Self_825F0D40;
extern void *lbl_8326B370[];

void fn_825F0D40(Self_825F0D40 *self, int i)
{
    Res_825F0D40 *r = self->dev->vt->getRes(self->dev);
    Table_825F0D40 *t = r->table;
    void *v;
    if (self->overrides[i] == 0) {
        int idx = self->slot->index;
        t->data[idx] = r->src->values[idx];
    } else if (self->slot != 0) {
        t->data[self->slot->index] = self->overrides[i];
    } else {
        Dev_825F0D40 *dev = self->dev;
        v = self->defaults[i];
        if (v == 0) v = lbl_8326B370[9];
        dev->f19c = v;
    }
}
