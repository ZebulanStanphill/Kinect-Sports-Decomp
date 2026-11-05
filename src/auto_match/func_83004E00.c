extern char lbl_831BC7F4[];
struct Unk_83004E00;
typedef struct Slot_83004E00 { int key; struct Unk_83004E00 *obj; int pad; } Slot_83004E00;
typedef struct Vt_83004E00 {
    int pad[4];
    int (*f10)(struct Unk_83004E00 *, void *);
} Vt_83004E00;
typedef struct Unk_83004E00 { Vt_83004E00 *vt; } Unk_83004E00;
typedef struct Vt2_83004E00 {
    int pad[20];
    void (*f50)(struct Obj_83004E00 *);
} Vt2_83004E00;
typedef struct Obj_83004E00 {
    Vt2_83004E00 *vt;
    int pad[9];
    Slot_83004E00 *slots;
} Obj_83004E00;
int fn_83004E00(Obj_83004E00 *o, unsigned idx)
{
    int r;
    Slot_83004E00 *s;
    if (idx >= 4) return 0x1f;
    if (o->slots == 0) return 2;
    r = 2;
    s = &o->slots[idx + 1];
    if (s->obj != 0)
        r = s->obj->vt->f10(s->obj, lbl_831BC7F4);
    s->obj = 0;
    s->key = -1;
    o->vt->f50(o);
    return r;
}
