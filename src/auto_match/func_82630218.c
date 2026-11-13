typedef struct Obj_82630218 {
    char pad0[0x18];
    unsigned int size;
    unsigned int base;
} Obj_82630218;

extern int fn_8262F8D8(void *, int, int, unsigned int, int, unsigned int, unsigned int, int, int);

void fn_82630218(Obj_82630218 *self, int unused1, int unused2, int flags)
{
    fn_8262F8D8(self, 0xc, 0, self->size, 0, self->size, self->base, flags | 2, 0);
}
