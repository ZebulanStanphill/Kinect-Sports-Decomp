extern int fn_828A4ED0();
extern int fn_828DE078();


unsigned __int64 fn_828DE128(int param_1)

{
  unsigned int uVar1;
  
  if ((*(char *)(param_1 + 0xcc) != '\0') &&
     (uVar1 = fn_828A4ED0(*(unsigned int *)(param_1 + 0x88)), (uVar1 & 0xffffffff) != 0)) {
    fn_828DE078(uVar1,*(unsigned __int64 *)(param_1 + 0x80),param_1 + 0x90,param_1 + 0x98,param_1 + 0xa8
                  ,param_1 + 0xd0,param_1 + 0xe0,param_1 + 0xf0);
  }
  return 1;
}

