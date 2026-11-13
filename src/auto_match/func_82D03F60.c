extern int fn_82CE63B0();
extern int fn_82CFBEB8();


void fn_82D03F60(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  if (param_1[1] == (param_1[2] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(param_1[3],param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  puVar3 = (unsigned int *)(iVar1 * 0xc + *param_1);
  uVar2 = fn_82CFBEB8(param_2,param_1[3]);
  *puVar3 = uVar2;
  puVar3[2] = param_3;
  puVar3[1] = param_4;
  return;
}

