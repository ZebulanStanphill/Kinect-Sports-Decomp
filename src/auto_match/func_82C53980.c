extern int fn_82C45138();
extern int fn_82C52ED0();
extern int fn_82C7BA80();


unsigned __int64 fn_82C53980(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  *(unsigned int *)(param_1 + 0x56ac) = *(unsigned int *)(param_1 + 0x56bc);
  uVar2 = param_3 + 0xfU & 0xfffffff0;
  *(unsigned int *)(param_1 + 0x56b0) = *(unsigned int *)(param_1 + 0x56c0);
  *(unsigned int *)(param_1 + 0x56b4) = *(unsigned int *)(param_1 + 0x56c4);
  *(unsigned int *)(param_1 + 0x56b8) = *(unsigned int *)(param_1 + 0x56c8);
  if ((*(int *)(param_1 + 0x3cb0) != 7) || (*(int *)(param_1 + 0xd50) != 1)) {
    iVar3 = fn_82C45138(param_1);
    if (iVar3 == 0) {
      *(unsigned int *)(param_1 + 0x5644) = *(unsigned int *)(param_1 + 0x9c);
      *(unsigned int *)(param_1 + 0x5648) = *(unsigned int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0x9c) = param_2;
    *(int *)(param_1 + 0xa0) = param_3;
  }
  if ((*(unsigned int *)(param_1 + 0x9c) != uVar1) || (uVar4 = 1, *(unsigned int *)(param_1 + 0xa0) != uVar2)) {
    uVar4 = 0;
  }
  *(unsigned int *)(param_1 + 0x98) = uVar4;
  *(unsigned int *)(param_1 + 0xb4) = uVar1;
  *(unsigned int *)(param_1 + 0xbc) = uVar2;
  iVar3 = fn_82C45138(param_1);
  if (iVar3 != 0) {
    *(unsigned int *)(param_1 + 0x5644) = *(unsigned int *)(param_1 + 0xb4);
    *(unsigned int *)(param_1 + 0x5648) = *(unsigned int *)(param_1 + 0xbc);
  }
  *(unsigned int *)(param_1 + 0x56bc) = uVar1;
  *(unsigned int *)(param_1 + 0xf0) = 0xffffffc1;
  iVar3 = *(int *)(param_1 + 0xbc);
  *(unsigned int *)(param_1 + 0xf4) = 0x3f;
  *(unsigned int *)(param_1 + 0x56c0) = uVar2;
  if (*(int *)(param_1 + 0xf8c) == 0) {
    iVar5 = *(int *)(param_1 + 0xb4) >> 1;
    iVar3 = iVar3 >> 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb4) >> 2;
  }
  *(int *)(param_1 + 0x56c4) = iVar5;
  *(int *)(param_1 + 0xc0) = iVar5;
  *(int *)(param_1 + 0x56c8) = iVar3;
  *(int *)(param_1 + 200) = iVar3;
  if (*(int *)(param_1 + 0x3cb0) < 7) {
    *(unsigned int *)(param_1 + 0x56ac) = uVar1;
    *(unsigned int *)(param_1 + 0x56b0) = uVar2;
    *(int *)(param_1 + 0x56b8) = iVar3;
    *(unsigned int *)(param_1 + 0x56b4) = *(unsigned int *)(param_1 + 0x56c4);
  }
  fn_82C52ED0(param_1);
  fn_82C7BA80(param_1);
  return 0;
}

