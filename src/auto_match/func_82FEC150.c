extern void RtlEnterCriticalSection(void *cs);

extern char lbl_8326440C[];

void fn_82FEC150(void)
{
    RtlEnterCriticalSection(lbl_8326440C);
}
