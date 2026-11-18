typedef struct MultiThreadCheck_82CEF858 {
    unsigned int threadId;       /* 0x0 */
    short markCount;             /* 0x4 */
    unsigned short markBitStack; /* 0x6 */
} MultiThreadCheck_82CEF858;

extern void *lbl_8323B46C;
extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);

/* Pushes a read mark (a zero bit); threadId holds a marker value while no writer owns the check. */
void fn_82CEF858(MultiThreadCheck_82CEF858 *self, int mode)
{
    unsigned int marker;

    switch (self->threadId) {
    case -47:
        return;
    case -31:
    case -63:
    case -15:
        RtlEnterCriticalSection(lbl_8323B46C);
        marker = mode == 1 ? -31 : -63;
        self->threadId = marker;
        break;
    default:
        RtlEnterCriticalSection(lbl_8323B46C);
        break;
    }
    self->markBitStack <<= 1;
    self->markCount++;
    RtlLeaveCriticalSection(lbl_8323B46C);
}
