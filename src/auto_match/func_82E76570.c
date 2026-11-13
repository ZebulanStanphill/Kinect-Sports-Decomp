extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F68CC0();


unsigned __int64 fn_82E76570(int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((param_2 & 0xffff) < (unsigned int)*(unsigned short *)(param_1 + 1)) {
    iVar4 = (param_2 & 0xffff) * 0x1a;
    fn_82E4FE40(*(unsigned int *)(iVar4 + *param_1 + 0x12));
    *(unsigned int *)(iVar4 + *param_1 + 0x12) = 0;
    *(unsigned int *)(iVar4 + *param_1 + 0x16) = 0;
    if ((param_4 & 0xffffffff) != 0) {
      uVar3 = fn_82E4FE08(param_4);
      *(unsigned int *)(iVar4 + *param_1 + 0x12) = uVar3;
      iVar1 = *(int *)(iVar4 + *param_1 + 0x12);
      if (iVar1 == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(iVar1,param_3,param_4);
      *(int *)(iVar4 + *param_1 + 0x16) = (int)param_4;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

