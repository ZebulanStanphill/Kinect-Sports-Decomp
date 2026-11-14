#define __lwsync() __emit(0x7C2004AC)

typedef struct Obj_82BFE830 {
    int pad0[5];
    void *buf1;          /* 0x14 */
    int pad18;
    void *buf2;          /* 0x1c */
    unsigned char sub[0x14]; /* 0x20 */
    unsigned int value;  /* 0x34 */
    long magic;          /* 0x38 */
    unsigned int f3c;    /* 0x3c */
    unsigned int handle; /* 0x40 */
} Obj_82BFE830;

long _InterlockedExchange(long volatile *target, long value);
extern void fn_82A1E658(void *p);
extern void fn_82BFBAF0(unsigned int handle, void *sub, unsigned int *value);
extern void fn_82BFB8C0(unsigned int handle, unsigned int f3c, unsigned int *value);

void fn_82BFE830(Obj_82BFE830 *self)
{
    unsigned int value;
    if (self != 0) {
        if (_InterlockedExchange(&self->magic, 0) == 0x4c665374) {
            if (self->buf1 != 0)
                fn_82A1E658(self->buf1);
            if (self->buf2 != 0)
                fn_82A1E658(self->buf2);
            value = self->value;
            fn_82BFBAF0(self->handle, self->sub, &value);
            fn_82BFB8C0(self->handle, self->f3c, &value);
            __lwsync();
        }
    }
}
