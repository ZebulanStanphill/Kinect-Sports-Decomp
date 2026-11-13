extern int fn_8265C990();


void fn_82AABFE0(__int64 param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  __int64 lVar3;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(int *)(iVar2 + 0xe0) + 0x30) != 0) {
    iVar4 = 100;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(iVar2 + 0xe0));
      if (iVar1 != 0) {
        fn_8265C990(iVar1,0x24870000);
      }
      iVar4 = iVar4 + -4;
    } while (0x5b < iVar4);
  }
  fn_8265C990(*(unsigned int *)(iVar2 + 0x6c),0x24870000);
  fn_8265C990(*(unsigned int *)(iVar2 + 0xcc),0x24870000);
  fn_8265C990(*(unsigned int *)(iVar2 + 200),0x24870000);
  lVar3 = (unsigned __int64)*(unsigned short *)(iVar2 + 0x5c) - 1;
  if (-1 < lVar3) {
    param_1 = ((unsigned __int64)*(unsigned short *)(iVar2 + 0x5c) + 0x1f) * 4 + param_1;
    do {
      param_1 = param_1 + -4;
      fn_8265C990(*(unsigned int *)param_1,0x24870000);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  fn_8265C990(*(unsigned int *)(iVar2 + 0x74),0x24870000);
  fn_8265C990(*(unsigned int *)(iVar2 + 0x70),0x24870000);
  if (*(int *)(*(int *)(iVar2 + 0xe0) + 0x38) != 0) {
    fn_8265C990(*(unsigned int *)(iVar2 + 0xc4),0x24870000);
  }
  fn_8265C990(*(unsigned int *)(iVar2 + 0xc0),0x24870000);
  return;
}

