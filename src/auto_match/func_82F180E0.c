typedef struct Rec_82F180E0 {
    char pad0[8];
    int id;
    char padC[8];
    int level;
    int delta;
    int target;
} Rec_82F180E0;

typedef struct Obj_82F180E0 {
    char pad0[0x2a0];
    int value;
    char pad2A4[0x3c];
    __int64 id;
    char pad2E8[0x1ac8];
    int state;
    char pad1DB4[0x58b8];
    Rec_82F180E0 *rec;
    char pad7670[0x54];
    int dirty;
} Obj_82F180E0;

void fn_82F180E0(Obj_82F180E0 *self)
{
    Rec_82F180E0 *rec;
    int v;

    if (self->state != 2)
        return;
    rec = self->rec;
    if (rec == 0)
        return;
    if (self->id != rec->id)
        return;
    v = self->value + rec->delta;
    self->value = v;
    if (v <= rec->target - 5) {
        self->value = v + 2;
    } else if (v >= rec->target + 5 && rec->level > 0x14) {
        self->value = v - 2;
    }
    if (self->value < 1)
        self->value = 1;
    else if (self->value > 0x1f)
        self->value = 0x1f;
    self->dirty = 1;
}
