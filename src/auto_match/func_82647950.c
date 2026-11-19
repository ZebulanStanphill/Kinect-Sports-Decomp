/* XDK ppcintrinsics.h: __eieio() is __emit(0x7C0006AC), __sync() is __emit(0x7C0004AC). */
void __emit(unsigned int);
#define __eieio() __emit(0x7C0006AC)
#define __sync() __emit(0x7C0004AC)

extern unsigned __int64 __mftb(void);

typedef struct Fence_82647950 {
    unsigned int value; /* 0x0 */
    unsigned int time;  /* 0x4 */
} Fence_82647950;

typedef struct Stats_82647950 {
    unsigned int frame;     /* 0x0 */
    unsigned int processed; /* 0x4 */
    unsigned int reserved;  /* 0x8 */
} Stats_82647950;

typedef struct Ring_82647950 {
    char pad0[4];
    unsigned int value; /* 0x4 */
} Ring_82647950;

typedef struct Device_82647950 {
    char pad0[0x2a94];
    Ring_82647950 *ring; /* 0x2a94 */
    char pad2a98[0x4174 - 0x2a98];
    void (*callback)(Stats_82647950 *stats); /* 0x4174 */
    unsigned int frame;                      /* 0x4178 */
    unsigned int frameTime;                  /* 0x417c */
    char pad4180[4];
    unsigned int lastTime; /* 0x4184 */
    char pad4188[8];
    unsigned int processed;    /* 0x4190 */
    Fence_82647950 fences[16]; /* 0x4194 */
    unsigned int read;         /* 0x4214 */
    unsigned int write;        /* 0x4218 */
    char pad421c[4];
    unsigned int lock; /* 0x4220 */
    char pad4224[0x5584 - 0x4224];
    int elapsed; /* 0x5584 */
    char pad5588[0x5c2c - 0x5588];
    unsigned int fenceTime; /* 0x5c2c */
} Device_82647950;

extern unsigned char KfAcquireSpinLock(unsigned int *lock);
extern void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
extern void fn_82A1E968(__int64 *time);

void fn_82647950(Device_82647950 *self)
{
    unsigned char irql;
    Fence_82647950 *fence;
    unsigned int value;

    irql = KfAcquireSpinLock(&self->lock);
    self->frame++;
    self->frameTime = (unsigned int)__mftb();
    while (self->read != self->write) {
        fence = &self->fences[self->read & 15];
        value = fence->value;
        if (fence->time > self->frame) {
            break;
        }
        self->processed++;
        self->lastTime = self->frameTime;
        if (value == 0) {
            self->ring->value = 0;
        } else {
            *(volatile unsigned int *)0x7fc86110 = value;
            __eieio();
            __sync();
        }
        self->fenceTime = (unsigned int)__mftb();
        self->read++;
    }
    if (self->callback != 0) {
        Stats_82647950 stats;

        stats.processed = self->processed;
        stats.frame = self->frame;
        stats.reserved = 0;
        self->callback(&stats);
    }
    {
        __int64 time;

        fn_82A1E968(&time);
        self->elapsed = (int)(time >> 10);
    }
    KfReleaseSpinLock(&self->lock, irql);
}
