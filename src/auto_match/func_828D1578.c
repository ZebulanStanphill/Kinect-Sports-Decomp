extern int fn_828A4ED0();
extern int fn_828B1BE0();


unsigned __int64 fn_828D1578(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = fn_828A4ED0(*(unsigned int *)(param_1 + 0xa4));
  if ((uVar1 & 0xffffffff) != 0) {
    fn_828B1BE0(uVar1,*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(param_1 + 0x88),
                      *(unsigned int *)(param_1 + 0x8c),*(unsigned int *)(param_1 + 0x90),
                      *(unsigned int *)(param_1 + 0xa0),*(unsigned __int64 *)(param_1 + 0x98),
                      *(unsigned char *)(param_1 + 0xc4));
  }
  return 1;
}

