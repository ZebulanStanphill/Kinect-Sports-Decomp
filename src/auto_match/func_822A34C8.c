typedef struct Slot_822A34C8 {
    int used;
    char text[0x58];
} Slot_822A34C8;

typedef struct Group_822A34C8 {
    int active;
    Slot_822A34C8 slots[10];
} Group_822A34C8;

typedef struct Obj_822A34C8 {
    unsigned char pad0[0x1188];
    Group_822A34C8 groups[4];
    int dirty;
} Obj_822A34C8;

extern int fn_82526C70(char *buf, int size, const char *fmt, ...);
extern char lbl_82196582[];

void fn_822A34C8(Obj_822A34C8 *self, int group, int slot, int value)
{
    Group_822A34C8 *g = &self->groups[group];
    Slot_822A34C8 *s = &g->slots[slot - 1];

    g->active = 1;
    s->used = 1;
    if (value < 1) {
        fn_82526C70(s->text, 0x10, lbl_82196582);
    } else {
        fn_82526C70(s->text, 0x10, "%d", value);
    }
    self->dirty = 1;
}
