typedef struct Record_82A37E70 {
    unsigned int id;
    unsigned short words;
    unsigned short pad6;
    char data[1];
} Record_82A37E70;

typedef struct Queue_82A37E70 {
    void *owner;
    Record_82A37E70 *begin;
    Record_82A37E70 *end;
    unsigned int count;
    char pad10[0x2c - 0x10];
    void *event;
    long pending;
} Queue_82A37E70;

extern long _InterlockedDecrement(long *);
extern long NtSetEvent(void *event, long *previous);
extern void fn_82A37B08(Queue_82A37E70 *self);
extern int fn_82A34678(void *owner, void *data, int arg);

int fn_82A37E70(Queue_82A37E70 *self, unsigned int id, int arg)
{
    int result = -1;
    Record_82A37E70 *r;

    if (self->count > 0) {
        fn_82A37B08(self);
        for (r = self->begin; r != self->end; r = (Record_82A37E70 *)((unsigned int *)r + r->words)) {
            if (r->id == id) {
                break;
            }
        }
        if (r != self->end) {
            result = fn_82A34678(self->owner, r->data, arg);
        }
        if (_InterlockedDecrement(&self->pending) == 0) {
            NtSetEvent(self->event, 0);
        }
    }
    return result;
}
