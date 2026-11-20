/* Takes the next free item of a locked pool: 0 when the cursor is at the end
   or the slot is empty (an empty slot also closes the pool by moving the
   cursor to the end). */
typedef struct Pool_829D6C98 {
    char lock[0x1c]; /* 0x0 */
    int pad1c;
    unsigned int next; /* 0x20 */
    int pad24;
    unsigned __int64 items[0x100]; /* 0x28 */
} Pool_829D6C98;

extern void RtlEnterCriticalSection(void *lock);
extern void RtlLeaveCriticalSection(void *lock);

unsigned __int64 fn_829D6C98(Pool_829D6C98 *self)
{
    unsigned __int64 item;
    unsigned int i;

    RtlEnterCriticalSection(self->lock);
    i = self->next;
    if (i >= 0x100) {
        RtlLeaveCriticalSection(self->lock);
        return 0;
    }
    if (self->items[i] != 0) {
        item = self->items[i];
        self->next = i + 1;
        RtlLeaveCriticalSection(self->lock);
        return item;
    }
    self->next = 0x100;
    RtlLeaveCriticalSection(self->lock);
    return 0;
}
