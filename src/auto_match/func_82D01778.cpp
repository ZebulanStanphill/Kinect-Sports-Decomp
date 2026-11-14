#include <havok/hkBaseTypes.h>

struct Block_82D01778 {
    Block_82D01778 *next;
    int pad4;
    char *start;
    int count;
};

struct FreeList_82D01778 {
    int pad0;
    hk_size_t elementSize;
};

typedef void (HK_CALL *hkMemoryWalkCallback)(void *start, hk_size_t size, hkBool allocated, int pool, void *param);

extern "C" void fn_82D01778(FreeList_82D01778 *self, Block_82D01778 *block, hkMemoryWalkCallback callback, int pool, void *param)
{
    for (; block != HK_NULL; block = block->next) {
        char *p = block->start;
        char *end = p + block->count * self->elementSize;
        for (; p < end; p += self->elementSize) {
            callback(p, self->elementSize, false, pool, param);
        }
    }
}
