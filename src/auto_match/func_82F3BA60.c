typedef struct Obj_82F3BA60 {
    char pad0[0xc];
    void *device;
    char pad10[0x4c - 0x10];
    unsigned int flags;
    char pad50[0x6c - 0x50];
    unsigned int count;
    void *buffer;
} Obj_82F3BA60;

extern void fn_82E4FE40(void *p);
extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);

int fn_82F3BA60(Obj_82F3BA60 *self, unsigned int count)
{
    if (self->device == 0) {
        return 0xc00d36b6;
    }
    if ((self->flags & 1) != 0 && count > self->count) {
        if (self->buffer != 0) {
            fn_82E4FE40(self->buffer);
        }
        self->buffer = 0;
        self->count = 0;
        self->buffer = fn_82E50BE8(count * 6, 0, 0, 0, 0);
        if (self->buffer == 0) {
            return 0x8007000e;
        }
    }
    self->count = count;
    return 0;
}
