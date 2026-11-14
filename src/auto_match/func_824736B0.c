typedef struct Slot_824736B0 { unsigned int handle; unsigned int pad; } Slot_824736B0;
typedef struct Sub_824736B0 { char pad[0x1c]; Slot_824736B0 slots[2]; } Sub_824736B0;
typedef struct Inner_824736B0 { char pad[0x18]; void *f18; } Inner_824736B0;
typedef struct Mgr_824736B0 { char pad[0x110]; void *list; } Mgr_824736B0;
typedef struct Self_824736B0 {
    const void *vt;
    char pad4[0xc];
    Sub_824736B0 sub;
    char pad3c[0x14];
    int f50;
    void *f54;
    char pad58[0x28];
    int id80;
    int id84;
    Inner_824736B0 *f88;
    char pad8c[0xc];
    void *f98;
    void *f9c;
    void *fa0;
} Self_824736B0;

extern void fn_822315A0(void *);
extern void fn_822848B8(void *);
extern void fn_8229E090(void *, int, int);
extern Mgr_824736B0 *fn_8249ABC0(void);
extern void fn_8249D980(void *, int);
extern void fn_8249DA08(void *, int);
extern void fn_82512B70(void *);
extern void fn_82554DA8(void *);
extern void fn_82BFEDD8(void *, int);
extern int fn_82F4EC30(unsigned int);
extern void fn_82F52C20(int, unsigned int, int);
extern const char lbl_821BCE54[];
extern const char lbl_821BE838[];

static __forceinline void ReleaseSlots_824736B0(Sub_824736B0 *sub)
{
    unsigned int i;
    for (i = 0; i < 2; i++) {
        if (sub->slots[i].handle != 0) {
            int port = fn_82F4EC30(i);
            fn_82F52C20(port, sub->slots[i].handle, 1);
            sub->slots[i].handle = 0;
        }
    }
}

static __forceinline void Release_824736B0(void *r)
{
    if (r != 0)
        fn_822315A0(r);
}

static __forceinline void Reset_824736B0(void **ptr, int *owned)
{
    void *r = *ptr;
    *ptr = 0;
    *owned = 0;
    Release_824736B0(r);
}

void fn_824736B0(Self_824736B0 *self)
{
    void *list;

    self->vt = lbl_821BCE54;
    list = fn_8249ABC0()->list;
    if (self->id80 != -1) {
        fn_8249D980(list, self->id80);
        self->id80 = -1;
    }
    if (self->id84 != -1) {
        fn_8249DA08(list, self->id84);
        self->id84 = -1;
    }
    if (self->f9c != 0) {
        fn_8229E090(self->f9c, 0, 0);
        self->f9c = 0;
    }
    if (self->f50 != 0) {
        Reset_824736B0(&self->f54, &self->f50);
    }
    if (self->f88 != 0) {
        if (self->f88->f18 != 0)
            fn_82BFEDD8(self->f88->f18, 0);
        fn_82554DA8(self->f88);
        self->f88 = 0;
    }
    if (self->fa0 != 0)
        fn_82512B70(self->fa0);
    if (self->f98 != 0) {
        fn_822848B8(self->f98);
        self->f98 = 0;
    }
    if (self->f54 != 0)
        fn_822315A0(self->f54);
    ReleaseSlots_824736B0(&self->sub);
    self->vt = lbl_821BE838;
}
