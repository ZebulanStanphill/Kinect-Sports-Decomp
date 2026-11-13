typedef struct { char pad[0x2c]; void *bits; } Target_8285C608;
typedef struct {
    char pad0[0x48];
    void **items;
    unsigned short count;
    char pad4e[0x60 - 0x4e];
    unsigned int size;
} Obj_8285C608;

extern Target_8285C608 *fn_8285A830(Obj_8285C608 *self);
extern void fn_828600E0(void *item, void *arg);
void *memset(void *dst, int c, unsigned int n);

void fn_8285C608(Obj_8285C608 *self, void *arg)
{
    Target_8285C608 *target;
    unsigned short i;

    target = fn_8285A830(self);
    memset(target->bits, 0xff, self->size);
    for (i = 0; i < self->count; i++) {
        fn_828600E0(self->items[i], arg);
    }
}
