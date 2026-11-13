extern unsigned int lbl_8320A898;


void fn_825474F8(void)

{
  *(unsigned int *)(lbl_8320A898 + 0x35f0) = 0x80000000;
  *(unsigned int *)(lbl_8320A898 + 0x2efc) = *(unsigned int *)(lbl_8320A898 + 0x2efc) & 0xc07fffff | 0x32000000;
  return;
}

