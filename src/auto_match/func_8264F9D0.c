typedef struct Device_8264F9D0 {
    char pad0[0x5588];
    int format;                 // 0x5588
    char pad558C[0x44];
    char state[0x38];           // 0x55d0
    char buffer[0x600];         // 0x5608
    int dirty;                  // 0x5c08
} Device_8264F9D0;

extern void *memset(void *dst, int value, unsigned int size);
extern void fn_8264DC48(Device_8264F9D0 *self, char *buffer);
extern void fn_82647DE8(Device_8264F9D0 *self, int format);
extern void fn_82645110(Device_8264F9D0 *self);

int fn_8264F9D0(Device_8264F9D0 *self)
{
    memset(self->state, 0, sizeof(self->state));
    memset(self->buffer, 0, sizeof(self->buffer));
    if (self->format != 0x28280106) {
        memset(self->buffer, 0, sizeof(self->buffer));
        self->dirty = 1;
        fn_8264DC48(self, self->buffer);
        fn_82647DE8(self, 0x28280106);
        fn_82645110(self);
    }
    return 0;
}
