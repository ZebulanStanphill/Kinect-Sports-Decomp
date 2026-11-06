typedef struct Obj_82C0C470 Obj_82C0C470;
typedef struct ObjVtbl_82C0C470 {
    void *slot0;
    void *slot1;
    void *slot2;
    void (*lock)(Obj_82C0C470 *self);
    void *slot4;
    void (*unlock)(Obj_82C0C470 *self);
} ObjVtbl_82C0C470;
struct Obj_82C0C470 {
    ObjVtbl_82C0C470 *vt;
    char pad04[0x30];
    int value34;
    int value38;
    int value3C;
    int value40;
    int extra44;
    int extra48;
    int extra4C;
    int extra50;
};

int fn_82C0C470(Obj_82C0C470 *self, int kind, int value, int extra)
{
    self->vt->lock(self);
    switch (kind) {
    default:
        self->extra44 = extra;
        self->value34 = value;
        break;
    case 3:
        self->extra44 = extra;
        self->value34 = value;
        break;
    case 4:
        self->value38 = value;
        self->extra48 = extra;
        break;
    case 1:
        self->value3C = value;
        self->extra4C = extra;
        break;
    case 2:
        self->value40 = value;
        self->extra50 = extra;
        break;
    }
    self->vt->unlock(self);
    return 0;
}
