extern void RtlLeaveCriticalSection(void *cs);

void fn_82D80D00(char *self)
{
    void *cs = *(void **)(self + 0xb8);
    if (cs != 0) {
        RtlLeaveCriticalSection(cs);
    }
}
