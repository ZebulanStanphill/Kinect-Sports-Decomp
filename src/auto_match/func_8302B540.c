extern void RtlLeaveCriticalSection(void *cs);

extern char lbl_83264EA8[];

void fn_8302B540(void)
{
    RtlLeaveCriticalSection(lbl_83264EA8);
}
