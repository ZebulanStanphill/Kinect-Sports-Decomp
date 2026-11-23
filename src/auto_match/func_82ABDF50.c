#include <string.h>

typedef struct Block_82ABDF50 {
    struct Block_82ABDF50 *next;
} Block_82ABDF50;

typedef struct Page_82ABDF50 {
    int f00;
    struct Page_82ABDF50 *next; /* 0x4 */
    char data[0x1000];          /* 0x8 */
} Page_82ABDF50;

typedef struct Heap_82ABDF50 {
    Block_82ABDF50 *freeLists[0x22]; /* by size / 4 - 1 */
    Page_82ABDF50 *last;             /* 0x88 */
    Page_82ABDF50 *page;             /* 0x8c */
    char *cur;                       /* 0x90 */
} Heap_82ABDF50;

extern Page_82ABDF50 *fn_82AA68E0(Heap_82ABDF50 *heap);

void *fn_82ABDF50(Heap_82ABDF50 *heap, unsigned int size)
{
    unsigned int s;
    unsigned int rest;
    int idx;
    Block_82ABDF50 *b;
    Block_82ABDF50 *tail;
    char *p;

    for (s = size + 4; s <= 0x84; s += 4) {
        idx = (s >> 2) - 1;
        b = heap->freeLists[idx];
        if (b != 0) {
            heap->freeLists[idx] = b->next;
            if (s > size) {
                tail = (Block_82ABDF50 *)((char *)b + size);
                idx = ((s - size) >> 2) - 1;
                tail->next = heap->freeLists[idx];
                heap->freeLists[idx] = tail;
            }
            memset(b, 0, size);
            return b;
        }
    }
    rest = (char *)heap->page - heap->cur + 0x1000;
    if (rest != 0) {
        tail = (Block_82ABDF50 *)heap->cur;
        idx = (rest >> 2) - 1;
        tail->next = heap->freeLists[idx];
        heap->freeLists[idx] = tail;
    }
    heap->page = heap->page->next;
    if (heap->page == 0) {
        heap->page = fn_82AA68E0(heap);
        if (heap->last != 0)
            heap->last->next = heap->page;
        heap->last = heap->page;
    }
    p = heap->page->data;
    heap->cur = p + size;
    return p;
}
