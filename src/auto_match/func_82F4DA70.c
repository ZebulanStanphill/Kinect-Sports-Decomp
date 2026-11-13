extern long _InterlockedExchange(long *target, long value);
extern char *lbl_8326183C;

void fn_82F4DA70(void)
{
    _InterlockedExchange((long *)(lbl_8326183C + 0x2b50), 2);
}
