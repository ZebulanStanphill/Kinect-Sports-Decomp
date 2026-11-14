extern long _InterlockedExchange(long *, long);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Block_82A77548 {
    unsigned int begin, size;
    unsigned __int64 stamp;
} Block_82A77548;

typedef struct Page_82A77548 {
    unsigned int base, data;
} Page_82A77548;

typedef struct Obj_82A77548 {
    char pad[0xb8];
    Page_82A77548 *page;
    unsigned int end;
    char gap[8];
    unsigned __int64 stamp;
    char rest[0x20];
    Block_82A77548 *free;
    unsigned int unused, ready;
} Obj_82A77548;

void fn_82A77548(Obj_82A77548 *self)
{
    Block_82A77548 *block = (Block_82A77548 *)_InterlockedExchange((long *)&self->free, 0);
    if (self->page) {
        block->begin = self->page->data;
        block->size = self->end - self->page->base;
    } else {
        block->begin = 0;
        block->size = 0;
    }
    block->stamp = self->stamp;
    __lwsync();
    self->free = block;
    self->ready = 1;
}
