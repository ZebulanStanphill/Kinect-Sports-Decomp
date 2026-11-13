extern int fn_82F691F0();


unsigned __int64 fn_829E5718(unsigned int *param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    if ((*(char *)(param_1 + 2) != '\0') && (param_4 == param_1[4] * param_1[3])) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      param_1[1] = uVar1;
      *param_1 = uVar2;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,100);
    }
    uVar3 = 0xffffffff8000ffff;
  }
  return uVar3;
}

