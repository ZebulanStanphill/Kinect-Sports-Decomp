extern unsigned char fn_82813AE0(void *self, void *out);
extern void fn_82813680(void *self, void *node);
extern void fn_82813720(void *self);
extern char *fn_82813CB8(void *self, unsigned int size);
extern void fn_82813428(void *operation);
extern long _InterlockedIncrement(long *value);
#define __lwsync() __emit(0x7C2004AC)

typedef struct Operation_82813ED8 {
    unsigned __int64 value;        /* 0x00 */
    void *node;                    /* 0x08 */
    unsigned __int64 *destination; /* 0x0c */
} Operation_82813ED8;

typedef struct NodeState_82813ED8 {
    int value;       /* 0x00 */
    long references; /* 0x04 */
} NodeState_82813ED8;

static __forceinline void Initialize_82813ED8(NodeState_82813ED8 *state)
{
    state->value = 0;
    _InterlockedIncrement(&state->references);
}

static __forceinline unsigned char IsSynchronous_82813ED8(char *self)
{
    if (*(__int64 *)(self + 0x10) == 0) {
        return 1;
    }
    return 0;
}

void fn_82813ED8(char *self)
{
    struct {
        unsigned char item[16];
        Operation_82813ED8 operation;
    } frame;

    unsigned __int64 *head;
    char *oldHead;
    char *node;

    while (fn_82813AE0(self, frame.item)) {
    }
    oldHead = *(char **)(self + 0x20);
    head = (unsigned __int64 *)(self + 0x20);
    _InterlockedIncrement((long *)(oldHead + 0xc));
    fn_82813680(self, oldHead);
    fn_82813720(self);
    node = fn_82813CB8(self, 16);
    if (node != 0) {
        Initialize_82813ED8((NodeState_82813ED8 *)(node + 8));
    }
    frame.operation.destination = head;
    frame.operation.node = node;
    frame.operation.value = *head;
    fn_82813428(&frame.operation);
    frame.operation.destination = (unsigned __int64 *)(self + 0x28);
    frame.operation.value = *(unsigned __int64 *)(self + 0x28);
    frame.operation.node = node;
    fn_82813428(&frame.operation);
    if (IsSynchronous_82813ED8(self)) {
        __lwsync();
    }
}
