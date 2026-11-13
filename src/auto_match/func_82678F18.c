typedef struct Obj_82678F18 {
    int pad0[4];
    unsigned char active;
    unsigned char pad11[0xd8 - 0x11];
    void *handle;
    unsigned char padDC[0x25c - 0xdc];
    int value;
} Obj_82678F18;

extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);
extern void fn_82677DD0(Obj_82678F18 *self);
extern void fn_82647460(void *p);

int fn_82678F18(Obj_82678F18 *self)
{
    if (self->active) {
        fn_8263CBB0(self->handle, 0, 0, 0x80000000);
        fn_8263CBB0(self->handle, 1, 0, 0x40000000);
        fn_82677DD0(self);
        fn_82647460(self->handle);
        self->handle = 0;
        self->value = 0;
        self->active = 0;
    }
    return 1;
}
