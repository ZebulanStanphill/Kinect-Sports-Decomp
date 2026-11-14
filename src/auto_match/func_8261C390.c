typedef struct Obj_8261C390 {
    unsigned char pad0[0x304];
    void *handle;
    unsigned char pad308[4];
    unsigned char block30c[8];
    int unk314;
    unsigned char pad318[4];
    void *handle31c;
} Obj_8261C390;

void fn_82A1E658(void *handle);
void XMemSet(void *dst, int value, unsigned int size);

void fn_8261C390(Obj_8261C390 *self)
{
    if (self->handle31c != 0) {
        fn_82A1E658(self->handle31c);
    }
    XMemSet(self->block30c, 0, 0x14);
    self->unk314 = 0;
    if (self->handle != (void *)-1) {
        fn_82A1E658(self->handle);
        self->handle = 0;
    }
}
