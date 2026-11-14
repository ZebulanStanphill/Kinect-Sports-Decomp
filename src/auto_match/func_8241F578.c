typedef struct Set_8241F578 {
    char pad0[0x48];
    int active;
    char a[0x20];
    char b[0x20];
} Set_8241F578;

typedef struct World_8241F578 {
    char pad0[0xc00];
    int disabled;
    char pad1[0x1bc4 - 0xc04];
    Set_8241F578 primary;
    char pad2[0x1cc0 - 0x1bc4 - sizeof(Set_8241F578)];
    Set_8241F578 secondary;
} World_8241F578;

typedef struct Slot_8241F578 {
    int pad0;
    int used;
    char pad1[0x1ac - 8];
} Slot_8241F578;

typedef struct Target_8241F578 {
    char pad0[0x4c];
    void *set;
} Target_8241F578;

typedef struct Panel_8241F578 {
    char pad0[0x280];
    void *set;
} Panel_8241F578;

typedef struct Self_8241F578 {
    World_8241F578 *world;
    int pad4;
    Slot_8241F578 *slots;
    int padc[3];
    int index;
    int pad1c[5];
    Panel_8241F578 *panel;
    int pad34[0x15];
    Target_8241F578 **begin;
    Target_8241F578 **end;
} Self_8241F578;

void fn_8241F578(Self_8241F578 *self, int alt)
{
    World_8241F578 *world = self->world;
    Set_8241F578 *set;
    Target_8241F578 **it;

    if (world->disabled != 0) {
        return;
    }
    set = &world->primary;
    if (self->slots[self->index].used == 0) {
        set = &world->secondary;
    }
    if (set->active == 0) {
        return;
    }
    if (self->panel != 0) {
        self->panel->set = alt != 0 ? set->b : set->a;
    }
    for (it = self->begin; it != self->end; it++) {
        Target_8241F578 *target = *it;
        target->set = alt != 0 ? set->b : set->a;
    }
}
