typedef struct Ring_82644FE8 {
    char pad0[0xc];
    unsigned int *cursor; /* 0x0c */
    unsigned int *end;    /* 0x10 */
} Ring_82644FE8;

typedef struct Device_82644FE8 {
    char pad0[0x2b04];
    int deferred;      /* 0x2b04 */
    unsigned int lock; /* 0x2b08 */
    char pad2B0C[0x3460 - 0x2b0c];
    void *direct; /* 0x3460 */
    char pad3464[0x3500 - 0x3464];
    Ring_82644FE8 ring; /* 0x3500 */
} Device_82644FE8;

void *memcpy(void *dst, const void *src, unsigned int size);
extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
extern unsigned int *fn_82643B08(Ring_82644FE8 *ring);
extern void fn_82643C30(Ring_82644FE8 *ring, unsigned int *start, unsigned int *end);
extern unsigned int *fn_82644040(Device_82644FE8 *device, unsigned int count, int align);
extern void fn_82644568(Device_82644FE8 *device, const unsigned int *commands, unsigned int count);

static __forceinline void WriteRing(Ring_82644FE8 *ring, const unsigned int *commands, unsigned int remaining)
{
    for (;;) {
        unsigned int chunk = (ring->end - ring->cursor) & ~1;
        unsigned int size;

        if (chunk > remaining) {
            chunk = remaining;
        }
        size = chunk * 4;
        memcpy(ring->cursor, commands, size);
        remaining -= chunk;
        ring->cursor += chunk;
        commands += chunk;
        if (remaining == 0) {
            break;
        }
        fn_82643B08(ring);
    }
}

void fn_82644FE8(Device_82644FE8 *device, const unsigned int *commands, unsigned int count)
{
    if (device->direct != 0) {
        WriteRing(&device->ring, commands, count * 2);
    } else {
        int queued = 0;

        if (device->deferred != 0) {
            unsigned int dwords = count * 2;
            unsigned int *buffer = fn_82644040(device, dwords + 2, 4);
            unsigned int *marker;
            unsigned char irql;

            memcpy(buffer + 1, commands, dwords * 4);
            marker = buffer + 1 + dwords;
            *marker = 0xc0000000;
            irql = KfAcquireSpinLock(&device->lock);
            if (device->deferred != 0) {
                fn_82643C30(&device->ring, buffer, marker + 1);
                queued = 1;
            }
            KfReleaseSpinLock(&device->lock, irql);
            if (queued != 0) {
                return;
            }
        }
        fn_82644568(device, commands, count);
    }
}
