#define __lwsync() __emit(0x7C2004AC)

typedef struct Obj_82BFE3B0 {
    int pad0[7];
    void *buf1;          /* 0x1c */
    int pad20;
    void *buf2;          /* 0x24 */
    unsigned char sub[0x14]; /* 0x28 */
    unsigned int value;  /* 0x3c */
    long magic;          /* 0x40 */
    unsigned int f44;    /* 0x44 */
    unsigned int handle; /* 0x48 */
} Obj_82BFE3B0;

long _InterlockedExchange(long volatile *target, long value);
extern void fn_82A1E0B8(void *p);
extern void fn_82BFBAF0(unsigned int handle, void *sub, unsigned int *value);
extern void fn_82BFB8C0(unsigned int handle, unsigned int f44, unsigned int *value);

void fn_82BFE3B0(Obj_82BFE3B0 *self)
{
    unsigned int value;
    if (self != 0) {
        if (_InterlockedExchange(&self->magic, 0) == 0x4c665175) {
            if (self->buf1 != 0)
                fn_82A1E0B8(self->buf1);
            if (self->buf2 != 0)
                fn_82A1E0B8(self->buf2);
            value = self->value;
            fn_82BFBAF0(self->handle, self->sub, &value);
            fn_82BFB8C0(self->handle, self->f44, &value);
            __lwsync();
        }
    }
}
