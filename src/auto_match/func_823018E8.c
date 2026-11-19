/* Constructor: base constructor (fn_822C70F0), then the owner, empty lists and slots, a zero offset
   and values, and the setup from the owner's resources (fn_82301BE8). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int reg);

typedef struct List_823018E8 {
    void *first; /* 0x0 */
    void *last;  /* 0x4 */
    void *end;   /* 0x8 */
    int padC;
} List_823018E8;

typedef struct Slot_823018E8 {
    char pad0[0x40];
    void *item; /* 0x40 */
} Slot_823018E8;

typedef struct Owner_823018E8 {
    char pad0[0x118];
    char *resources; /* 0x118 */
} Owner_823018E8;

typedef struct Obj_823018E8 {
    void *vtable; /* 0x00 */
    char pad4[0x50];
    Owner_823018E8 *owner; /* 0x54 */
    int pad58;
    int count;              /* 0x5c */
    int active;             /* 0x60 */
    List_823018E8 lists[4]; /* 0x64 */
    Slot_823018E8 slots[4]; /* 0xa4 */
    int pad1b4[3];
    __vector4 offset; /* 0x1c0 */
    float values[4];  /* 0x1d0 */
} Obj_823018E8;

extern char lbl_821AEDD8[];
extern void fn_822C70F0(Obj_823018E8 *self, int unused, void *source);
extern void fn_82301BE8(Obj_823018E8 *self, char *resource, void *setup);

Obj_823018E8 *fn_823018E8(Obj_823018E8 *self, int unused, void *source, void *setup, Owner_823018E8 *owner)
{
    int i;
    Slot_823018E8 *slot;

    fn_822C70F0(self, unused, source);
    self->owner = owner;
    self->count = 0;
    self->vtable = lbl_821AEDD8;
    self->active = 0;
    for (i = 0; i < 4; i++) {
        self->lists[i].first = 0;
        self->lists[i].last = 0;
        self->lists[i].end = 0;
    }
    slot = self->slots;
    for (i = 0; i < 4; i++) {
        slot->item = 0;
        slot++;
    }
    self->values[0] = 0.0f;
    self->values[1] = 0.0f;
    self->values[2] = 0.0f;
    self->values[3] = 0.0f;
    self->offset = __VMXGetReg(77);
    fn_82301BE8(self, owner->resources + 0x24, setup);
    return self;
}
