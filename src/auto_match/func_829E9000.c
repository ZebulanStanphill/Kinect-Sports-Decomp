typedef struct Obj_829E9000 {
    char pad0[0x8];
    unsigned char active;           /* 0x08 */
    void *handle;                   /* 0x0c */
    void *buffer;                   /* 0x10 */
    char pad14[0x4];
    __int64 position;               /* 0x18 */
    char pad20[0x4];
    int count;                      /* 0x24 */
} Obj_829E9000;

extern char lbl_83218B78[];
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_829EC590(void *handle);
extern void fn_8265C990(void *p, unsigned int flags);

void fn_829E9000(Obj_829E9000 *self)
{
    self->active = 0;
    if (self->handle != 0) {
        RtlEnterCriticalSection(lbl_83218B78);
        if (fn_829EC590(self->handle) == 0 && self->buffer != 0) {
            fn_8265C990(self->buffer, 0x209d0000);
        }
        RtlLeaveCriticalSection(lbl_83218B78);
    }
    self->buffer = 0;
    self->handle = 0;
    self->position = 0;
    self->count = 0;
}
