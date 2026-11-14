typedef struct Obj_8300B720 Obj_8300B720;
typedef struct ObjVtbl_8300B720 {
    void *slot0;
    void *slot4;
    void (*Release)(Obj_8300B720 *self);
} ObjVtbl_8300B720;
struct Obj_8300B720 {
    ObjVtbl_8300B720 *vt;
};

typedef struct Entry_8300B720 {
    struct Entry_8300B720 *next;
    int id;
    float weight;
    int a;
    int b;
    int c;
} Entry_8300B720;

typedef struct Self_8300B720 {
    char pad0[0xc];
    int target;
    char pad10[0x5c - 0x10];
    Entry_8300B720 *entries;
    char pad60[0xa0 - 0x60];
    unsigned char mode : 3;
} Self_8300B720;

typedef struct Registry_8300B720 {
    int unk0;
    char table[1];
} Registry_8300B720;

extern Registry_8300B720 *lbl_832642E0;
extern Obj_8300B720 *fn_82FAB9C0(void *table, int id);
extern void fn_8300A520(Obj_8300B720 *obj, int target, int b, int c);
extern void fn_8300B5D0(Obj_8300B720 *obj, int target, float weight, int a, int c);
extern void fn_8300A650(Obj_8300B720 *obj, int target);

void fn_8300B720(Self_8300B720 *self)
{
    Entry_8300B720 *e;
    for (e = self->entries; e != 0; e = e->next) {
        Obj_8300B720 *obj = fn_82FAB9C0(lbl_832642E0->table, e->id);
        if (obj != 0) {
            switch (self->mode) {
            case 0:
                fn_8300A520(obj, self->target, e->b, e->c);
                break;
            case 1:
                fn_8300B5D0(obj, self->target, e->weight, e->a, e->c);
                break;
            case 2:
                fn_8300A650(obj, self->target);
                break;
            }
            obj->vt->Release(obj);
        }
    }
}
