extern void RtlEnterCriticalSection(void *cs);

void fn_82D80CD0(char *self)
{
    void *cs = *(void **)(self + 0xb8);
    if (cs != 0) {
        RtlEnterCriticalSection(cs);
    }
}
