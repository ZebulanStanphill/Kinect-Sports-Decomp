extern void RtlLeaveCriticalSection(void *cs);

extern char lbl_8326440C[];

void fn_82FEC160(void)
{
    RtlLeaveCriticalSection(lbl_8326440C);
}
