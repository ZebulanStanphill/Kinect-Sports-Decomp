typedef struct { int vt; char cs[0x1c]; } Lock_82F907A0;
extern void RtlLeaveCriticalSection(void *cs);
void fn_82F907A0(Lock_82F907A0 *self)
{
    RtlLeaveCriticalSection(self ? self->cs : 0);
}
