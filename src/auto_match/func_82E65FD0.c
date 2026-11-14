long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);

typedef struct Obj_82E65FD0 {
    char pad[0x24];
    void *event;    /* 0x24 */
} Obj_82E65FD0;

extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);
extern int fn_82A1E658(void *handle);
extern int fn_82A1F470(void);

int fn_82E65FD0(Obj_82E65FD0 *self)
{
    if (self->event == 0) {
        void *created = fn_82A1E6A0(0, 1, 0, 0);
        if (created == 0) {
            int err = fn_82A1F470();
            return err > 0 ? (int)((err & 0xffff) | 0x80070000) : err;
        }
        if ((void *)_InterlockedCompareExchange((long volatile *)&self->event, (long)created, 0) != 0)
            fn_82A1E658(created);
    }
    return 0;
}
