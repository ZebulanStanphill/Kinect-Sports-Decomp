typedef struct Message_82A33EC8 {
    int type;            /* 0x0 */
    int handle;          /* 0x4 */
    void *event;         /* 0x8 */
    int size;            /* 0xc */
    unsigned int offset; /* 0x10 */
    int buffer;          /* 0x14 */
    __int64 *result;     /* 0x18 */
    long *status;        /* 0x1c */
    char pad20[0x40];
} Message_82A33EC8;

typedef struct Request_82A33EC8 {
    int handle; /* 0x0 */
    int buffer; /* 0x4 */
    char pad8[0x8];
    int size;           /* 0x10 */
    void *event;        /* 0x14 */
    unsigned int flags; /* 0x18 */
    char pad1c[0x1c];
    char lock[0x1c]; /* 0x38 */
} Request_82A33EC8;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern long NtWaitForSingleObjectEx(void *handle, int mode, int alertable, void *timeout);
extern int fn_82A37680(void *queue, Message_82A33EC8 *message);
extern __int64 fn_82A37E70(void *cache, int size, int buffer);

long fn_82A33EC8(char *self, Request_82A33EC8 *request, __int64 *result)
{
    long status;
    Message_82A33EC8 message;

    status = 0;
    if ((request->flags & 0x80000000) == 0) {
        return 0xc0000022;
    }
    *result = fn_82A37E70(self + 0x8c, request->size, request->buffer);
    if (*result == -1) {
        *(int *)result = -1;
        message.type = 1;
        message.offset = 0xffffffff;
        message.handle = request->handle;
        message.size = request->size;
        message.event = request->event;
        message.buffer = request->buffer;
        message.result = result;
        message.status = &status;
        RtlEnterCriticalSection(request->lock);
        if (fn_82A37680(self + 0xc4, &message) != 0) {
            status = NtWaitForSingleObjectEx(request->event, 1, 0, 0);
        } else {
            status = 0xc0000017;
        }
        RtlLeaveCriticalSection(request->lock);
    }
    return status;
}
