typedef struct Device_827F0748 Device_827F0748;

typedef struct DeviceVtbl_827F0748 {
    void *slot0;
    void *slot4;
    int (*GetHeaderSize)(Device_827F0748 *self); /* 0x8 */
} DeviceVtbl_827F0748;

struct Device_827F0748 {
    DeviceVtbl_827F0748 *vt;
};

typedef struct Slot_827F0748 {
    unsigned short index; /* 0x0 */
    unsigned short pad2;
} Slot_827F0748;

typedef struct Layout_827F0748 {
    int pad0;
    Device_827F0748 *device; /* 0x4 */
    char pad8[0x18];
    Slot_827F0748 slots[32];  /* 0x20 */
    void *elements[16];       /* 0xa0 */
    unsigned short slotCount; /* 0xe0 */
    unsigned short pade2;
    unsigned short columns; /* 0xe4 */
    unsigned short rows;    /* 0xe6 */
} Layout_827F0748;

extern unsigned int fn_827F3AB0(void *element);
extern int fn_827F3A60(Layout_827F0748 *self);

int fn_827F0748(Layout_827F0748 *self)
{
    int i;
    unsigned int largest;
    unsigned int size;
    int stride;

    if (self->slotCount == 0) {
        return 0;
    }
    largest = 0;
    for (i = self->slotCount - 1; i >= 0; i--) {
        size = fn_827F3AB0(self->elements[self->slots[i].index]);
        if (size > largest) {
            largest = size;
        }
    }
    stride = ((self->device->vt->GetHeaderSize(self->device) + 15) & ~15) + largest;
    return fn_827F3A60(self) * (self->rows - 1) + self->columns * stride;
}
