extern int fn_82BA8CB8();
extern int fn_82BC2EF0();


unsigned __int64 fn_82BAA230(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  iVar1 = fn_82BC2EF0(param_2,*param_1);
  if (iVar1 != 4) {
    if (iVar1 < 5) {
      return 0;
    }
    if (iVar1 < 7) {
      if (*(char *)((int)param_1 + 0x7d) == '\0') {
        if (*(int *)(*(int *)(*param_1 + 0xab0) + 0x824) == 0) {
          fn_82BA8CB8(param_1,0,2);
        }
        *(unsigned char *)((int)param_1 + 0x7d) = 1;
        return 1;
      }
      return 0;
    }
    if (8 < iVar1) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    return 0;
  }
  *(unsigned char *)(param_1 + 0x1f) = 1;
  return 1;
}

