extern long NtWaitForSingleObjectEx(void *handle, char waitMode, unsigned char alertable, __int64 *timeout);
extern void *memcpy(void *, const void *, unsigned int);
extern long _InterlockedDecrement(long *);

typedef struct Queue_82A37768 {
    char *base;
    char *read;
    char *write;
    char lock[28];
    void *event;
    int capacity;
    long count;
    int remaining;
    int pad38;
    int taken;
    int requests;
} Queue_82A37768;

int fn_82A37768(Queue_82A37768 *q, void *dest)
{
    long *count;
    q->requests++;
    if (q->remaining == 0)
        NtWaitForSingleObjectEx(q->event, 1, 0, 0);
    count = &q->count;
    if (*count == 0)
        return 0;
    memcpy(dest, q->read, 0x60);
    q->read += 0x60;
    if (q->read == q->capacity * 0x60 + q->base)
        q->read = q->base;
    q->taken++;
    q->remaining = _InterlockedDecrement(count);
    return 1;
}
