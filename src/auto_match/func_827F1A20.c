typedef struct Child_827F1A20 Child_827F1A20;

typedef struct ChildVtbl_827F1A20 {
    void *pad0;
    void (*update)(Child_827F1A20 *self, float dt); /* 0x4 */
} ChildVtbl_827F1A20;

struct Child_827F1A20 {
    ChildVtbl_827F1A20 *vt;
};

typedef struct Group_827F1A20 {
    char pad0[0x60];
    unsigned int values[16];      /* 0x60 */
    Child_827F1A20 *children[18]; /* 0xa0 */
    unsigned short count;         /* 0xe8 */
    unsigned short flagsPad : 14; /* 0xea */
    unsigned short active : 1;
    unsigned short valid : 1;
    unsigned short padEC;        /* 0xec */
    unsigned short disabled[77]; /* 0xee */
    unsigned char updated;       /* 0x188 */
} Group_827F1A20;

extern unsigned int fn_827F4010(Child_827F1A20 *child);
extern void fn_827F15D0(Group_827F1A20 *self);

static __forceinline int IsDisabled(Group_827F1A20 *self, unsigned short index)
{
    return self->disabled[index >> 4] >> (index & 15) & 1;
}

void fn_827F1A20(Group_827F1A20 *self, float dt)
{
    int i;

    for (i = self->count - 1; i >= 0; i--) {
        if (!IsDisabled(self, (unsigned short)i)) {
            self->children[i]->vt->update(self->children[i], dt);
        }
    }
    if (self->valid) {
        for (i = self->count - 1; i >= 0; i--) {
            if (fn_827F4010(self->children[i]) != self->values[i]) {
                self->valid = 0;
                break;
            }
        }
    }
    if (!(unsigned char)self->active || !(unsigned char)self->valid) {
        fn_827F15D0(self);
    }
    self->updated = 1;
}
