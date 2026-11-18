extern unsigned long __gregister_get(unsigned int);
extern unsigned __int64 __mftb(void);

typedef struct Queue_82643D58 {
    unsigned int value;    /* 0x0 */
    unsigned int position; /* 0x4 */
} Queue_82643D58;

typedef struct Object_82643D58 {
    char pad0000[0x2a90];
    Queue_82643D58 *queue; /* 0x2a90 */
} Object_82643D58;

typedef struct Thread_82643D58 {
    char pad00[0x58];
    unsigned int field58; /* 0x58 */
} Thread_82643D58;

typedef struct Wait_82643D58 {
    Object_82643D58 *owner; /* 0x0 */
    unsigned int type;      /* 0x4 */
    unsigned int value;     /* 0x8 */
    unsigned int start;     /* 0xc */
    unsigned int last;      /* 0x10 */
    unsigned int time;      /* 0x14 */
} Wait_82643D58;

extern int fn_82646F48(Wait_82643D58 *);
extern void fn_82646E80(Wait_82643D58 *);

static __forceinline int KeepWaiting(Wait_82643D58 *wait)
{
    if (fn_82646F48(wait) == 0) {
        return 0;
    }
    return 1;
}

static __forceinline Thread_82643D58 *CurrentThread(void)
{
    return *(Thread_82643D58 **)(__gregister_get(13) + 0x100);
}

void fn_82643D58(Object_82643D58 *self, unsigned int minimum, unsigned int position)
{
    Queue_82643D58 *queue = self->queue;
    unsigned int current = queue->position;
    unsigned int state = (position - current) & 3;

    if (state != 0 && (state != 1 || minimum > (current & ~3U))) {
        Wait_82643D58 wait;
        Thread_82643D58 *thread = CurrentThread();
        unsigned int value = queue->value;
        unsigned int start;

        wait.owner = self;
        wait.type = 2;
        start = thread->field58;
        wait.value = value;
        wait.start = start;
        wait.last = start;
        wait.time = (unsigned int)__mftb();
        for (;;) {
            if (!KeepWaiting(&wait)) {
                break;
            }
            current = self->queue->position;
            state = (position - current) & 3;
            if (state == 0 || (state == 1 && minimum <= (current & ~3U))) {
                break;
            }
        }
        fn_82646E80(&wait);
    }
}
