extern int fn_82579EF0(int a, const char *name, int def);
extern unsigned int fn_82579F78(int a, const char *name);
extern void RtlInitializeCriticalSection(void *cs);

void fn_8245A620(int param_1, int param_2)
{
    int n;

    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = 0;
    *(unsigned int *)(param_1 + 8) = fn_82579F78(param_2 + 0x6c8, "ShouldSendContentData") & 0xff;
    n = fn_82579EF0(param_2 + 0x6c8, "ContentBufferChunkSizeInBytes", 0);
    if (n < 1 || n > 0x80000) {
        n = 0x80000;
    }
    *(int *)(param_1 + 0x80074) = n;
    RtlInitializeCriticalSection((void *)(param_1 + 0x8008c));
}
