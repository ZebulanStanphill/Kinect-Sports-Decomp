/* Takes a 16-byte node from the heap's free list. When the list is empty it
   first commits another 64 KB of the newest chunk (or reserves a new 1 MB
   chunk and commits its first 64 KB) and threads the new nodes onto the list.
   The heap is reached through the owner every time; only the flags of the
   second commit go through a local, and the committed size is updated through
   a pointer to the field. */
typedef struct Node_82A26628 {
    struct Node_82A26628 *next; /* 0x0 */
    int pad4[3];
} Node_82A26628;

typedef struct Chunk_82A26628 {
    struct Chunk_82A26628 *next; /* 0x0 */
    unsigned long reserved;      /* 0x4 */
    unsigned long committed;     /* 0x8 */
    int padC;
} Chunk_82A26628;

typedef struct Heap_82A26628 {
    char pad0[0x48];
    Chunk_82A26628 *chunks;  /* 0x48 */
    Node_82A26628 *freeList; /* 0x4c */
    char pad50[0x590 - 0x50];
    unsigned long flags; /* 0x590 */
} Heap_82A26628;

typedef struct Owner_82A26628 {
    char pad0[0x18];
    Heap_82A26628 *heap; /* 0x18 */
} Owner_82A26628;

extern int NtAllocateVirtualMemory(void **base, unsigned long *size, unsigned long type,
                                   unsigned long protect, unsigned long flags);
extern int NtFreeVirtualMemory(void **base, unsigned long *size, unsigned long type, unsigned long flags);

Node_82A26628 *fn_82A26628(Owner_82A26628 *self)
{
    Node_82A26628 **head = &self->heap->freeList;
    Node_82A26628 *node;

    if (*head == 0) {
        Chunk_82A26628 *chunk = self->heap->chunks;
        unsigned long commit;
        unsigned long reserve;
        unsigned long flags;
        Node_82A26628 *p;
        Node_82A26628 *cur;
        Node_82A26628 **link;
        Node_82A26628 *end;

        if (chunk != 0 && chunk->committed != chunk->reserved) {
            commit = 0x10000;
            p = (Node_82A26628 *)((char *)chunk + chunk->committed);
            if (NtAllocateVirtualMemory((void **)&p, &commit, 0x60001000, 4, self->heap->flags) < 0) {
                goto fail;
            }
            {
                unsigned long *committed = &chunk->committed;

                *committed += commit;
            }
        } else {
            chunk = 0;
            reserve = 0x100000;
            if (NtAllocateVirtualMemory((void **)&chunk, &reserve, 0x60002000, 4, self->heap->flags) < 0) {
            fail:
                return 0;
            }
            commit = 0x10000;
            flags = self->heap->flags;
            if (NtAllocateVirtualMemory((void **)&chunk, &commit, 0x60001000, 4, flags) < 0) {
                NtFreeVirtualMemory((void **)&chunk, &reserve, 0x8000, self->heap->flags);
                return 0;
            }
            chunk->next = self->heap->chunks;
            self->heap->chunks = chunk;
            chunk->reserved = reserve;
            chunk->committed = commit;
            p = (Node_82A26628 *)(chunk + 1);
        }
        end = (Node_82A26628 *)((char *)chunk + chunk->committed);
        link = &self->heap->freeList;
        for (cur = p; cur < end; cur++) {
            *link = cur;
            link = &cur->next;
        }
        *link = 0;
        head = &self->heap->freeList;
    }
    node = *head;
    *head = node->next;
    return node;
}
