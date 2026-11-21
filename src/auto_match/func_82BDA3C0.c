typedef struct Device_82BDA3C0 {
    char pad000[0x114];
    int dirty; /* 0x114 */
} Device_82BDA3C0;

typedef struct State_82BDA3C0 {
    int pad00[2];
    Device_82BDA3C0 *device; /* 0x08 */
    int pad0C[6];
    unsigned int values[1]; /* 0x24, count unknown */
} State_82BDA3C0;

extern void fn_82BD9BA0(State_82BDA3C0 *self);

void fn_82BDA3C0(State_82BDA3C0 *self, int index, unsigned int value)
{
    if (value != self->values[index]) {
        self->values[index] = value;
        self->device->dirty = 1;
    }
    fn_82BD9BA0(self);
}
