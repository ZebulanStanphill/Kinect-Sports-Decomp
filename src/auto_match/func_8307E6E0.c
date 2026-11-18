#define __eieio() __emit(0x7C0006AC)
#define YieldProcessor() __emit(0x7FFFFB78)

void __storewordbytereverse(unsigned int value, int offset, void *base);
unsigned __int64 __mftb(void);
extern unsigned __int64 KeQueryPerformanceFrequency(void);

typedef struct Device_8307E6E0 {
    unsigned int count; /* 0x0 */
    unsigned int flags; /* 0x4 */
} Device_8307E6E0;

extern int fn_8307DF10(Device_8307E6E0 *dev);
extern void fn_8307E3C8(Device_8307E6E0 *dev, unsigned int index);

int fn_8307E6E0(Device_8307E6E0 *dev)
{
    unsigned __int64 start = __mftb();
    unsigned __int64 elapsed;
    unsigned int i;

    while (fn_8307DF10(dev) == 0) {
        elapsed = __mftb() - start;
        if (elapsed > KeQueryPerformanceFrequency() / 8) {
            __storewordbytereverse(0, 0, (void *)0x7fea1804);
            __eieio();
            __storewordbytereverse(3, 0, (void *)0x7fea1804);
            __eieio();
            fn_8307DF10(dev);
            for (i = 0; i < dev->count; i++) {
                fn_8307E3C8(dev, i);
            }
            dev->flags |= 0x80000;
            return 1;
        }
        YieldProcessor();
    }
    return 0;
}
