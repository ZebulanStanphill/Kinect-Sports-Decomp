extern int fn_83023090();
extern int fn_830230D0();
extern int fn_83023E60();


unsigned __int64 fn_83024258(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(short *)(*param_2 + 0xe) != 0) {
    *(unsigned int *)(param_1 + 0x108) = 0x2d;
    if (*(int *)(param_1 + 0x70) == 2) {
      fn_83023E60();
    }
    *(unsigned int *)(param_1 + 0x70) = 1;
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 4) != 3) {
      if (*(int *)(iVar1 + 4) != 0x3f) {
        return 0x2e;
      }
      fn_830230D0(param_1 + 0x80,iVar1,param_1 + 0x100);
      return 1;
    }
    fn_83023090(param_1 + 0x80,iVar1,param_1 + 0x100);
  }
  return 1;
}

