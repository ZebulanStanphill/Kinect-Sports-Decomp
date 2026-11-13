extern int fn_8295A330();


unsigned int fn_8295D280(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar3 = fn_8295A330(param_1,param_2 | param_3);
  uVar3 = (int)uVar3 >> 0x1f & uVar3;
  if (-1 < (int)uVar3) {
    if (((param_2 | param_3) & 0x2000) != 0) {
      iVar1 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      uVar3 = *(unsigned int *)(iVar1 + 0x10);
      uVar2 = *(unsigned int *)(iVar1 + 0xc) & 0x7ff;
      uVar4 = uVar2 | 0xb0000000;
      if (uVar3 != 0) {
        if (uVar3 == 1) {
          uVar4 = uVar2 | 0xb0550000;
        }
        else if (uVar3 < 3) {
          uVar4 = uVar2 | 0xb0aa0000;
        }
        else if (uVar3 == 3) {
          uVar4 = uVar2 | 0xb0ff0000;
        }
      }
      fn_8295A330(param_1,uVar4);
    }
    uVar3 = 0;
  }
  return uVar3;
}

