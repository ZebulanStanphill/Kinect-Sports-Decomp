typedef struct ListEntry_82A2D0C8 {
    struct ListEntry_82A2D0C8 *next; /* 0x00 */
    struct ListEntry_82A2D0C8 *prev; /* 0x04 */
} ListEntry_82A2D0C8;

typedef struct StackLocation_82A2D0C8 {
    unsigned char major;   /* 0x00 */
    unsigned char minor;   /* 0x01 */
    unsigned char flags;   /* 0x02 */
    unsigned char control; /* 0x03 */
} StackLocation_82A2D0C8;

typedef struct Request_82A2D0C8 {
    char pad0[0x30];
    ListEntry_82A2D0C8 link; /* 0x30 */
    char pad38[0x18];
    StackLocation_82A2D0C8 *stack; /* 0x50 */
} Request_82A2D0C8;

typedef struct Device_82A2D0C8 {
    char pad0[0x18];
    void *context; /* 0x18 */
} Device_82A2D0C8;

typedef struct Worker_82A2D0C8 {
    void *thread;             /* 0x00 */
    unsigned int lock;        /* 0x04 */
    ListEntry_82A2D0C8 queue; /* 0x08 */
    int event[4];             /* 0x10 */
    unsigned int quit;        /* 0x20 */
} Worker_82A2D0C8;

typedef int (*Dispatch_82A2D0C8)(void *context, Request_82A2D0C8 *request);

extern Worker_82A2D0C8 lbl_83219CE0;
extern Dispatch_82A2D0C8 lbl_8315D344[];

unsigned char KfAcquireSpinLock(unsigned int *lock);
void KfReleaseSpinLock(unsigned int *lock, unsigned char irql);
int KeSetEvent(void *event, int increment, unsigned char wait);

int fn_82A2D0C8(Device_82A2D0C8 *device, Request_82A2D0C8 *request)
{
    void *thread;
    unsigned char irql;
    ListEntry_82A2D0C8 *tail;

    thread = *(void **)(__gregister_get(13) + 0x100);
    if (lbl_83219CE0.quit != 0) {
        return 0xc000026e;
    }
    request->stack->control |= 1;
    if (thread == lbl_83219CE0.thread) {
        lbl_8315D344[request->stack->major](device->context, request);
    } else {
        irql = KfAcquireSpinLock(&lbl_83219CE0.lock);
        tail = lbl_83219CE0.queue.prev;
        request->link.next = &lbl_83219CE0.queue;
        request->link.prev = tail;
        tail->next = &request->link;
        lbl_83219CE0.queue.prev = &request->link;
        KfReleaseSpinLock(&lbl_83219CE0.lock, irql);
        KeSetEvent(lbl_83219CE0.event, 1, 0);
    }
    return 0x103;
}
