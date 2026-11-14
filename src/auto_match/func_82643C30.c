#define __eieio() __emit(0x7C0006AC)

typedef struct Ring_82643C30 {
    char pad0[0x4];
    unsigned int *head;         /* 0x04 */
    char pad8[0x4];
    unsigned int *tail;         /* 0x0c */
} Ring_82643C30;

extern void fn_8264D6C0(unsigned int start, unsigned int end, int flags);

static __forceinline unsigned int GpuAddress(void *p)
{
    unsigned int a = (unsigned int)p;

    return (((a >> 20) + 0x200) & 0x1000) + (a & 0x1fffffff) - 0x40000000;
}

void fn_82643C30(Ring_82643C30 *ring, unsigned int *start, unsigned int *end)
{
    unsigned int *prev = ring->tail;
    unsigned int endAddress = GpuAddress(end);
    unsigned int startAddress;
    unsigned int prevAddress;

    start[0] = endAddress;
    startAddress = GpuAddress(start);
    ring->head = start;
    prevAddress = GpuAddress(prev);
    ring->tail = end - 1;
    __eieio();
    fn_8264D6C0(startAddress, endAddress, 0);
    prev[0] = startAddress;
    __eieio();
    fn_8264D6C0(prevAddress, prevAddress + 0x10, 0);
}
