typedef struct { int vt; char cs[0x1c]; } Lock_82F90710;
extern void RtlEnterCriticalSection(void *cs);
void fn_82F90710(Lock_82F90710 *self)
{
    RtlEnterCriticalSection(self ? self->cs : 0);
}
