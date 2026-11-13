/* Caches the byte-swapped XMA context base address from the XMA hardware register block
   (0x7FEA1800) into lbl_83219DC8, which fn_82A45180 subtracts from context physical addresses. */
extern unsigned int lbl_83219DC8;

unsigned long __cdecl _byteswap_ulong(unsigned long v);

void fn_82A45120(void)
{
    lbl_83219DC8 = _byteswap_ulong(*(unsigned long *)0x7FEA1800);
}
