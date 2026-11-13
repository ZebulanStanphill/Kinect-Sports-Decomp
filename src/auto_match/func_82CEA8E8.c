void fn_82CEA8E8(int *param_1,int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  
  lVar2 = (unsigned __int64)(unsigned int)param_1[2] + 1;
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      *(unsigned __int64 *)(iVar3 + *param_1) = 0xffffffffffffffff;
      iVar3 = iVar3 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 & 0x80000000;
  if ((uVar1 & 0x80000000) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82cea948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 8))(param_2,*param_1,((unsigned __int64)(unsigned int)param_1[2] + 1 & 0xfffffff) << 4);
  return;
}

