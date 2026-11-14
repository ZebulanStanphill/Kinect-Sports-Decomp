typedef struct Random_8306BD90 {
    int f0;
    unsigned int seed;
    char pad8[0x3f8 - 8];
    unsigned char locked;
} Random_8306BD90;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern char lbl_83265098[];

unsigned int fn_8306BD90(Random_8306BD90 *self)
{
    unsigned int seed;
    unsigned int lo;
    int hi;
    if (self->locked)
        RtlEnterCriticalSection(lbl_83265098);
    seed = self->seed;
    lo = seed & 0xffff;
    hi = (int)seed >> 16;
    self->seed = seed * 0x41c64e6d + 0x3039;
    if (self->locked)
        RtlLeaveCriticalSection(lbl_83265098);
    return ((lo * 0x4e6d + 0x3039) >> 16) + lo * 0x41c6 + hi * 0x41c64e6d;
}
