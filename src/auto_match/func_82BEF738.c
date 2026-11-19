/* Adds a subscriber: rejects a null subscriber, a second subscriber of a dynamic MAO and a duplicate
   name (fn_82BEF6C0), appends a list node for it, links it back (fn_830B4CB8) and, while the request
   waits in state 2, moves it on to 0x12 when the target is ready or 0x10 otherwise. */
typedef struct Subscriber_82BEF738 {
    int pad0;
    const char *name; /* 0x4 */
} Subscriber_82BEF738;

typedef struct Source_82BEF738 {
    int pad0[2];
    void *first;  /* 0x8 */
    void *second; /* 0xc */
} Source_82BEF738;

typedef struct Target_82BEF738 {
    char pad0[0x38];
    Source_82BEF738 *source; /* 0x38 */
} Target_82BEF738;

typedef struct Request_82BEF738 {
    char pad0[0x10];
    int status;       /* 0x10 */
    const char *name; /* 0x14 */
    char pad18[4];
    char list[0xc];          /* 0x1c */
    void *subscribers;       /* 0x28 */
    Target_82BEF738 *target; /* 0x2c */
    Target_82BEF738 *ready;  /* 0x30 */
    int kind;                /* 0x34 */
} Request_82BEF738;

extern char lbl_82196582[];
extern int fn_82BE5240();
extern void *fn_82BE56B0(unsigned int size);
extern void *fn_82BEB628(void *mem, Subscriber_82BEF738 *subscriber);
extern int fn_82BE52B8(void *list, void *node);
extern void *fn_82BEF6C0(Request_82BEF738 *self, Subscriber_82BEF738 *subscriber);
extern void fn_830B4CB8(Subscriber_82BEF738 *subscriber, Request_82BEF738 *request);

int fn_82BEF738(Request_82BEF738 *self, Subscriber_82BEF738 *subscriber)
{
    void *mem;
    void *node;
    Target_82BEF738 *target;

    if (subscriber == 0)
        return fn_82BE5240(self, 500, lbl_82196582);
    if (self->kind == 0x10 && self->subscribers != 0)
        return fn_82BE5240(self, 0x1f5,
                           "Cannot add more than one subscriber to each instance of a dynamic MAO: %s",
                           self->name);
    if (fn_82BEF6C0(self, subscriber) != 0)
        return fn_82BE5240(self, 0x1f5, "Name: %s", subscriber->name);
    mem = fn_82BE56B0(0xc);
    if (mem != 0) {
        node = fn_82BEB628(mem, subscriber);
    } else {
        node = 0;
    }
    if (node == 0) {
        self->status = 0;
        return fn_82BE5240(self, 0x65,
                           "Failed to append subscriber \"%s\" to subscriber list due to failed "
                           "CMassiveListNode allocation",
                           subscriber->name);
    }
    fn_82BE52B8(self->list, node);
    fn_830B4CB8(subscriber, self);
    if (self->status == 2) {
        target = self->target;
        if (target != 0 && (int)target->source != 0 && target->source->first != 0 &&
            target->source->second != 0) {
            self->ready = target;
            self->status = 0x12;
        } else {
            self->status = 0x10;
        }
    }
    return 0;
}
