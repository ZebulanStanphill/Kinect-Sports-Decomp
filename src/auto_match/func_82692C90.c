#include <string.h>

typedef struct Block_82692C90 {
    char pad0[0xc];
    unsigned short sizeClass; /* 0xc */
} Block_82692C90;

typedef struct Heap_82692C90 {
    char pad0[0xc];
    unsigned int granularityShift; /* 0x0c */
    unsigned int alignMask;        /* 0x10 */
    unsigned int largeBlocks;      /* 0x14 */
} Heap_82692C90;

extern const int lbl_82005F20[8];

extern void *fn_8270C3A8(unsigned int *large, Block_82692C90 *block, void *ptr, unsigned int size,
                         unsigned int *oldSize);
extern int fn_8270C668(unsigned int *large, Block_82692C90 *block, void *ptr, unsigned int oldSize);
extern void *fn_82692370(Heap_82692C90 *heap, unsigned int size, unsigned int alignment);
extern void fn_82692538(Heap_82692C90 *heap, Block_82692C90 *block, void *ptr);
extern void *fn_82692988(Heap_82692C90 *heap, Block_82692C90 *block, void *ptr, unsigned int size);

static __forceinline void *MoveBlock(Heap_82692C90 *heap, Block_82692C90 *block, void *ptr,
                                     unsigned int newSize, unsigned int oldSize, unsigned int alignment)
{
    void *newPtr;

    newPtr = fn_82692370(heap, newSize, alignment);
    if (newPtr != 0) {
        memcpy(newPtr, ptr, oldSize < newSize ? oldSize : newSize);
        fn_82692538(heap, block, ptr);
    }
    return newPtr;
}

void *fn_82692C90(Heap_82692C90 *heap, Block_82692C90 *block, void *ptr, unsigned int size)
{
    unsigned int oldSize;
    unsigned int newSize;
    unsigned int sizeClass;
    void *newPtr;

    oldSize = 0;
    if (size < 0x10) {
        size = 0x10;
    }
    newSize = (heap->alignMask + size) & ~heap->alignMask;
    sizeClass = block->sizeClass;
    if (sizeClass <= 7) {
        oldSize = (sizeClass + 1) << heap->granularityShift;
        if (newSize <= oldSize) {
            return ptr;
        }
        return MoveBlock(heap, block, ptr, newSize, oldSize,
                         1 << (lbl_82005F20[sizeClass] + heap->granularityShift));
    }
    if (sizeClass == 10) {
        newPtr = fn_8270C3A8(&heap->largeBlocks, block, ptr, newSize, &oldSize);
        if (newPtr != 0) {
            return newPtr;
        }
        return MoveBlock(heap, block, ptr, newSize, oldSize,
                         1 << fn_8270C668(&heap->largeBlocks, block, ptr, oldSize));
    }
    return fn_82692988(heap, block, ptr, newSize);
}
