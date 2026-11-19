typedef struct Message_82A33E20 {
    int type;     /* 0x0 */
    int handle;   /* 0x4 */
    void *event;  /* 0x8 */
    int size;     /* 0xc */
    int offset;   /* 0x10 */
    int buffer;   /* 0x14 */
    int param;    /* 0x18 */
    long *status; /* 0x1c */
    char pad20[0x40];
} Message_82A33E20;

typedef struct Request_82A33E20 {
    int handle; /* 0x0 */
    int buffer; /* 0x4 */
    char pad8[0x8];
    int size;    /* 0x10 */
    void *event; /* 0x14 */
    char pad18[0x20];
    char lock[0x1c]; /* 0x38 */
} Request_82A33E20;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern long NtWaitForSingleObjectEx(void *handle, int mode, int alertable, void *timeout);
extern int fn_82A37680(void *queue, Message_82A33E20 *message);

long fn_82A33E20(char *self, Request_82A33E20 *request, int param)
{
    long status;
    Message_82A33E20 message;

    message.type = 0;
    message.offset = 0;
    message.handle = request->handle;
    message.size = request->size;
    message.buffer = request->buffer;
    message.param = param;
    message.status = &status;
    message.event = request->event;
    RtlEnterCriticalSection(request->lock);
    if (fn_82A37680(self + 0xc4, &message) != 0) {
        status = NtWaitForSingleObjectEx(request->event, 1, 0, 0);
    } else {
        status = 0xc0000017;
    }
    RtlLeaveCriticalSection(request->lock);
    return status;
}
