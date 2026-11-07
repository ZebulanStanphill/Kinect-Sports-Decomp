extern "C" int fn_829EA3B0(int p);
extern "C" void *fn_82A28568(int heap, int flags, unsigned int size);
extern "C" void *memset(void *dst, int c, unsigned int n);
extern "C" unsigned int lbl_832179FC;

__forceinline void *operator new[](unsigned int size, int heap)
{
    return fn_82A28568(heap, 0, size);
}

__forceinline void operator delete[](void *p, int heap)
{
}

struct Obj_829EAB30 {
    int f0;
    int sub4[4];
    unsigned int *buf14;
};

extern "C" int fn_829EAB30(Obj_829EAB30 *self, int unused, unsigned int count)
{
    int hr;

    hr = fn_829EA3B0((int)&self->sub4);
    if (hr == 0) {
        self->buf14 = new (*(int *)(lbl_832179FC + 0x8f4cc)) unsigned int[count];
        if (self->buf14 != 0) {
            memset(self->buf14, 0, count * 4);
        } else {
            hr = 0x8007000e;
        }
    }
    return hr;
}
