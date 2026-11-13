typedef struct Lockable_82BD47E0 {
    char pad[0xf0];
    char lock[0x1c];
} Lockable_82BD47E0;

extern void RtlEnterCriticalSection(void *cs);
extern int RtlTryEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

int fn_82BD47E0(Lockable_82BD47E0 *self, unsigned int op)
{
    int hr = 0;
    switch (op) {
    case 0:
        RtlEnterCriticalSection(self->lock);
        break;
    case 1:
        hr = RtlTryEnterCriticalSection(self->lock) == 1 ? 0 : 0x80004004;

        break;
    case 2:
        RtlLeaveCriticalSection(self->lock);
        break;
    default:
        hr = 0x80070057;
        break;
    }
    return hr;
}
