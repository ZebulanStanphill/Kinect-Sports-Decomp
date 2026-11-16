typedef struct Node_8267BC98 {
    struct Node_8267BC98 *previous; /* 0x0 */
    struct Node_8267BC98 *next;     /* 0x4 */
    int padding8;
    int references; /* 0xc */
    char padding10[0x28];
    struct Node_8267BC98 *parent; /* 0x38 */
    char padding3c[0xc];
    char lock[0x1c]; /* 0x48 */
} Node_8267BC98;

extern char *lbl_831E7E60;
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_8267BB48(void *, Node_8267BC98 *);

void fn_8267BC98(Node_8267BC98 *self)
{
    Node_8267BC98 *parent;
    do {
        void *lock;
        parent = self->parent;
        if (parent != 0) {
            void *globalLock;
            lock = parent->lock;
            RtlEnterCriticalSection(lock);
            globalLock = lbl_831E7E60 + 0x2c4;
            RtlEnterCriticalSection(globalLock);
            if (--self->references == 0) {
                self->previous->next = self->next;
                self->next->previous = self->previous;
                fn_8267BB48(lbl_831E7E60, self);
            } else {
                parent = 0;
            }
            RtlLeaveCriticalSection(globalLock);
        } else {
            lock = lbl_831E7E60 + 0x2c4;
            RtlEnterCriticalSection(lock);
            self->references--;
        }
        RtlLeaveCriticalSection(lock);
        if (parent != 0) {
            self = parent;
        }
    } while (parent != 0);
}
