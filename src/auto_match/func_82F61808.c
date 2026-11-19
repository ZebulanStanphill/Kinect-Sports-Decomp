long _InterlockedIncrement(long volatile *addend);
long _InterlockedDecrement(long volatile *addend);

typedef struct Request_82F61808 {
    unsigned int arg0;  /* 0x0 */
    unsigned int arg1;  /* 0x4 */
    unsigned int arg2;  /* 0x8 */
    unsigned int pad;   /* 0xc */
    unsigned int index; /* 0x10 */
} Request_82F61808;

typedef struct Slot_82F61808 {
    unsigned int word0; /* 0x0 */
    unsigned int word1; /* 0x4 */
    unsigned int word2; /* 0x8 */
    unsigned int word3; /* 0xc */
    unsigned int word4; /* 0x10 */
} Slot_82F61808;

typedef struct Queue_82F61808 {
    char pad0[0x24];
    void *event; /* 0x24 */
    char pad28[0x2c - 0x28];
    long pending; /* 0x2c */
    void *pool;   /* 0x30 */
    void *list;   /* 0x34 */
    char pad38[0x40 - 0x38];
    Slot_82F61808 *slots; /* 0x40 */
} Queue_82F61808;

extern int fn_82F611D8(void **pool, Request_82F61808 **out);
extern int fn_82BFE128(void *list, Request_82F61808 *request);
extern void fn_82BFE9D8(void *pool, Slot_82F61808 *slot);
extern int SetEvent(void *event);

int fn_82F61808(Queue_82F61808 *self, unsigned int arg0, unsigned int arg1, unsigned int arg2,
                unsigned int *index)
{
    int result = 0;
    Request_82F61808 *request = 0;
    Slot_82F61808 *slot;
    int status;

    status = fn_82F611D8(&self->pool, &request);
    if (status == 0) {
        request->arg0 = arg0;
        request->arg1 = arg1;
        request->arg2 = arg2;
        _InterlockedIncrement(&self->pending);
        status = fn_82BFE128(self->list, request);
        if (status == 0) {
            if (index != 0) {
                *index = request->index;
            }
        } else {
            _InterlockedDecrement(&self->pending);
            slot = &self->slots[request->index];
            slot->word0 = 0;
            slot->word1 = 0;
            slot->word2 = 0;
            slot->word3 = 0;
            fn_82BFE9D8(self->pool, slot);
            result = status;
        }
        SetEvent(self->event);
    } else {
        result = status;
    }
    return result;
}
