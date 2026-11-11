extern void RtlEnterCriticalSection(void *cs);

void fn_82D80CB8(char *self)
{
    void *cs = *(void **)(self + 0xb8);
    if (cs != 0) {
        RtlEnterCriticalSection(cs);
    }
}
