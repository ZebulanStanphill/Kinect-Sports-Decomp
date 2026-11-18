typedef struct MultiThreadCheck_82CEF908 {
    unsigned int threadId;       /* 0x0 */
    short markCount;             /* 0x4 */
    unsigned short markBitStack; /* 0x6 */
} MultiThreadCheck_82CEF908;

extern void RtlEnterCriticalSection(void *section);
extern void RtlLeaveCriticalSection(void *section);
extern unsigned __int64 fn_82D00728(void);
extern void *lbl_8323B46C;

/* Pushes a write mark (a one bit) and records the owning thread. */
void fn_82CEF908(MultiThreadCheck_82CEF908 *self)
{
    void *section;
    unsigned int threadId;

    if (self->threadId != -0x2f) {
        section = lbl_8323B46C;
        RtlEnterCriticalSection(section);
        threadId = (unsigned int)fn_82D00728();
        self->markBitStack = (self->markBitStack << 1) | 1;
        self->markCount++;
        if (self->threadId == -0xf) {
            self->threadId = threadId;
        }
        RtlLeaveCriticalSection(section);
    }
}
