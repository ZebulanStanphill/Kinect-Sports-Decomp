extern void fn_82F63BD8(int, unsigned, int);
__declspec(noreturn) extern void KeBugCheck(unsigned int code);

void fn_82F63C78(void)
{
    fn_82F63BD8(2, 0xc0000417, 1);
    KeBugCheck(0x1e);
}
