long _InterlockedExchange(long volatile *target, long value);

typedef struct Obj_82580CF8 {
    int unk0;
    void *event;   /* 0x04 */
    int unk8;
    long done;     /* 0x0c */
} Obj_82580CF8;

extern void fn_82BFE128(void *event);

int fn_82580CF8(Obj_82580CF8 *self, int unused, int mark)
{
    int result;

    if (self->done == 0) {
        result = 0;
        if (mark != 0) {
            _InterlockedExchange(&self->done, 1);
        }
        fn_82BFE128(self->event);
    } else {
        result = 1;
    }
    return result;
}
