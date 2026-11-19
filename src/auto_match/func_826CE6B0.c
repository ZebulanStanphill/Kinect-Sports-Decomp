typedef struct Owner_826CE6B0 Owner_826CE6B0;

typedef struct OwnerVtbl_826CE6B0 {
    void *slots[7];
    void (*print)(Owner_826CE6B0 *self, const char *text); /* 0x1c */
} OwnerVtbl_826CE6B0;

struct Owner_826CE6B0 {
    OwnerVtbl_826CE6B0 *vt; /* 0x00 */
    char pad04[0x44 - 0x04];
    unsigned int id; /* 0x44 */
};

typedef struct Entry_826CE6B0 {
    char pad00[0x08];
    unsigned int value; /* 0x08 */
    char pad0c[0x10 - 0x0c];
    Owner_826CE6B0 *handlers[9]; /* 0x10 */
    unsigned char active;        /* 0x34 */
    unsigned char flags;         /* 0x35 */
} Entry_826CE6B0;

extern Entry_826CE6B0 *fn_826CC3C8(void *table, unsigned int id, int create);
extern Entry_826CE6B0 *fn_826CDA28(void *table, unsigned int id);
extern unsigned short fn_826F6520(Owner_826CE6B0 *self);

static __forceinline void SetFlag(unsigned char *flags, unsigned char bit)
{
    *flags |= bit;
}

void fn_826CE6B0(Owner_826CE6B0 *self, void *table, unsigned int value)
{
    Entry_826CE6B0 *entry;
    unsigned short id;

    self->vt->print(self, "\n");
    id = fn_826F6520(self);
    entry = fn_826CC3C8(table, id, 0);
    if (entry != 0)
        entry = (entry->flags & 2) == 0 ? entry : 0;
    if (entry == 0) {
        entry = fn_826CDA28(table, id);
        entry->active = 0;
    }
    entry->handlers[8] = self;
    entry->handlers[7] = self;
    entry->handlers[6] = self;
    entry->handlers[5] = self;
    entry->handlers[4] = self;
    entry->handlers[3] = self;
    entry->handlers[2] = self;
    entry->handlers[1] = self;
    entry->handlers[0] = self;
    entry->value = value;
    SetFlag(&entry->flags, 1);
}
