extern int fn_825089A0();
extern int fn_82F622A8();


unsigned __int64 fn_828D0F58(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    if (0x14e5e0a < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    piVar2 = (int *)fn_825089A0();
    iVar3 = (**(int (***)())(*piVar2 + 0x24))(piVar2,param_2 * 0xc4,1);
    uVar1 = 1;
    *param_1 = iVar3;
    param_1[1] = iVar3;
    param_1[2] = (int)(param_2 * 0xc4) + iVar3;
  }
  return uVar1;
}

