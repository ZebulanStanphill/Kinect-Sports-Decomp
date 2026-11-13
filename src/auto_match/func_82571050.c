extern unsigned int *auStack_28;
extern int fn_82A1EFC0();


int fn_82571050(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_28 [16];
  
  if (param_4 == 0) {
    if (param_2 != 0) {
      for (uVar2 = *(unsigned int *)(param_1 + 0x758); uVar2 < *(unsigned int *)(param_1 + 0x75c);
          uVar2 = uVar2 + 0x3f0) {
        if (param_2 == *(int *)(uVar2 + 0xd4)) goto LAB_825710a4;
      }
      uVar2 = 0;
LAB_825710a4:
      param_4 = uVar2 + 0x2d0;
      if (uVar2 != 0) goto LAB_825710b4;
    }
    param_4 = param_1 + 0x380;
  }
LAB_825710b4:
  if (param_4 == param_1 + 0x380) {
    iVar1 = *(int *)(param_1 + 0x444);
    if (iVar1 == -3) {
                    /* WARNING: Subroutine does not return */
      fn_82A1EFC0(auStack_28,0,8);
    }
  }
  else {
    iVar1 = *(int *)(param_4 + 0xc4);
  }
  return iVar1;
}

