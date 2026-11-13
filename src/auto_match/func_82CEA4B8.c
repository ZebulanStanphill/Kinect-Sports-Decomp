void fn_82CEA4B8(int *param_1,int *param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  
  lVar2 = (unsigned __int64)(unsigned int)param_1[2] + 1;
  if (lVar2 != 0) {
    iVar3 = 0;
    do {
      *(unsigned int *)(iVar3 + *param_1) = 0xffffffff;
      iVar3 = iVar3 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 & 0x80000000;
  if ((uVar1 & 0x80000000) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82cea518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_2 + 8))(param_2,*param_1,((unsigned __int64)(unsigned int)param_1[2] + 1 & 0x1fffffff) << 3);
  return;
}

