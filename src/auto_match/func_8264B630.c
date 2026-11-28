typedef struct RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;

typedef struct Device_8264B630 {
    char pad0[0x3b50];
    char lock[0x1c]; /* 0x3b50 */
} Device_8264B630;

typedef struct Resource_8264B630 {
    char pad0[0x6c];
    unsigned int flags; /* 0x6c */
    char pad70[0x98 - 0x70];
    unsigned int base; /* 0x98 */
    unsigned int size; /* 0x9c */
    char padA0[0xa4 - 0xa0];
    void *context; /* 0xa4 */
    char padA8[0xb0 - 0xa8];
    void (*release)(void *context); /* 0xb0 */
} Resource_8264B630;

extern int KeGetCurrentProcessType(void);
extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);
extern Device_8264B630 **__imp_VdGlobalDevice;
extern Device_8264B630 **__imp_VdGlobalXamDevice;
extern void fn_8264D6C0(unsigned int start, unsigned int end, int flags);
extern void fn_8265C990(int address, int flags);

static __forceinline unsigned int GpuAddress_8264B630(unsigned int address)
{
    return (((address >> 20) + 0x200) & 0x1000) + (address & 0x1fffffff) - 0x40000000;
}

void fn_8264B630(Resource_8264B630 *self)
{
    if (self->base == 0) {
        Device_8264B630 *device;

        if (KeGetCurrentProcessType() == 2) {
            device = *__imp_VdGlobalXamDevice;
        } else {
            device = *__imp_VdGlobalDevice;
        }
        RtlEnterCriticalSection(device->lock);
        self->release(self->context);
        RtlLeaveCriticalSection(device->lock);
    } else {
        if (self->size != 0) {
            fn_8264D6C0(GpuAddress_8264B630(self->base), GpuAddress_8264B630(self->base + self->size - 1), 0);
        }
        if (!(self->flags & 0x10000)) {
            fn_8265C990((int)self->base, (int)0xb1800000);
        }
    }
}
