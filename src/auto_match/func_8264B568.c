typedef struct Target_8264B568 {
    char pad0[0x74];
    unsigned int address;       /* 0x74 */
} Target_8264B568;

typedef struct Device_8264B568 {
    char pad0[0x2abd];
    unsigned char flags;        /* 0x2abd */
    char pad2ABE[0x35a0 - 0x2abe];
    Target_8264B568 *target;    /* 0x35a0 */
    char pad35A4[0x35b0 - 0x35a4];
    unsigned int *last;         /* 0x35b0 */
    unsigned int *cursor;       /* 0x35b4 */
    unsigned int *end;          /* 0x35b8 */
    char pad35BC[0x4230 - 0x35bc];
    unsigned int *fallback;     /* 0x4230 */
} Device_8264B568;

extern unsigned int *fn_82644040(Device_8264B568 *device, int count, int align);
extern void fn_8264D6C0(unsigned int start, unsigned int end, int flags);

unsigned int *fn_8264B568(Device_8264B568 *device)
{
    unsigned int *last = device->last;
    unsigned int *buffer = fn_82644040(device, 0x22, 0x80);
    unsigned int address;

    if ((device->flags & 0x20) != 0) {
        buffer = device->fallback;
    } else {
        device->last = buffer;
        buffer[0] = 0;
        address = ((((unsigned int)buffer >> 20) + 0x200) & 0x1000) + ((unsigned int)buffer & 0x1fffffff) - 0x40000000;
        if (last == 0) {
            device->target->address = address;
        } else {
            last[0] = address;
            last[1] = ((int)device->cursor - (int)last - 8) >> 3;
        }
        fn_8264D6C0(address, address + 0x88, 0);
    }
    device->cursor = buffer + 2;
    device->end = buffer + 0x22;
    return device->cursor;
}
