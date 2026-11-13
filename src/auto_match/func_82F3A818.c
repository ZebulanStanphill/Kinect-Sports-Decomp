extern unsigned int *auStack_40;
extern int fn_82EE3128();
extern int fn_82F39FE0();
extern unsigned int lbl_82162C1C;
extern unsigned int lbl_831B9FE8;


__int64 fn_82F3A818(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [16];
  
  uVar4 = param_1 & 0xffffffff;
  uVar2 = 0;
  uVar5 = param_1;
  while ((iVar1 = (int)uVar5, uVar4 != 0 &&
         ((unsigned __int64)*(unsigned int *)(iVar1 + 4) <= (param_2 & 0xffffffff)))) {
    if ((param_2 & 0xffffffff) < (unsigned __int64)(*(unsigned int *)(iVar1 + 4) + 0x14)) goto LAB_82f3a8e8;
    uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x121c);
    uVar2 = uVar5;
    uVar5 = uVar4;
  }
  auStack_40[0] = 0;
  if ((param_1 & 0xffffffff) == 0) {
    *(unsigned char ***)(param_3 + 0x14) = &lbl_82162C1C;
    if (*(int *)(param_3 + 0x18) == 0) {
      fn_82EE3128(param_3 + 0x14,0);
    }
    lVar3 = -0x7fff0001;
  }
  else {
    lVar3 = (**(int (***)())*(unsigned int *)param_1)(param_1,auStack_40);
    if (lVar3 < 0) {
      *(unsigned char ***)(param_3 + 0x14) = &lbl_82162C1C;
      if (*(int *)(param_3 + 0x18) == 0) {
        fn_82EE3128(param_3 + 0x14,0);
      }
    }
    else {
      *(int *)(auStack_40[0] + 4) = (int)((param_2 & 0xffffffff) / 0x14) * 0x14;
      if ((uVar2 & 0xffffffff) != 0) {
        *(unsigned int *)((int)uVar2 + 0x121c) = auStack_40[0];
      }
      *(int *)(auStack_40[0] + 0x121c) = iVar1;
      uVar5 = (unsigned __int64)auStack_40[0];
LAB_82f3a8e8:
      param_2 = param_2 - *(unsigned int *)((int)uVar5 + 4);
      iVar1 = (int)((param_2 & 0xffffffff) >> 3) + (int)uVar5;
      *(unsigned char *)(iVar1 + 0xe8) = (&lbl_831B9FE8)[(unsigned int)param_2 & 7] | *(unsigned char *)(iVar1 + 0xe8);
      fn_82F39FE0(param_2 * 0xdc + uVar5 + 0xec,param_3);
      *(unsigned char ***)(param_3 + 0x14) = &lbl_82162C1C;
      if (*(int *)(param_3 + 0x18) == 0) {
        fn_82EE3128(param_3 + 0x14,0);
      }
      lVar3 = 0;
    }
  }
  return lVar3;
}

