#include <new>
extern "C" {
void __dcbf(int, const void *);
void *fn_82C53960(unsigned int, int);
void *memset(void *, int, unsigned int);
void RtlInitializeCriticalSection(void *);
}

struct Lock_82C44D10 {
    void *p;

    __forceinline Lock_82C44D10()
    {
        void *block = fn_82C53960(28, 0);
        if (block)
            memset(block, 0, 28);
        p = block;
        if (block)
            RtlInitializeCriticalSection(block);
    }
};

struct Obj_82C44D10 {
    void *begin, *current;
    unsigned int size, flags;
    Lock_82C44D10 lock;
};

extern "C" int fn_82C44D10(Obj_82C44D10 *self, void *buffer, unsigned int size, unsigned int flags)
{
    unsigned int i;
    self->flags = flags;
    for (i = 0; i < size; i += 128)
        __dcbf(i, buffer);
    if (size)
        __dcbf(size - 1, buffer);
    self->current = buffer;
    self->begin = buffer;
    self->size = size;
    if (!buffer)
        self->lock.p = 0;
    else {
        new (&self->lock) Lock_82C44D10;
        if (!self->lock.p)
            return -9;
    }
    return 0;
}
