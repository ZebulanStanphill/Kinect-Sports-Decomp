extern int fn_828184A8();
extern int fn_82820EF8();
extern int fn_828252D0();
extern int fn_82827750();
extern int fn_82F672D8();
extern int fn_82F67CF8();


__int64 fn_82831A80(int param_1,unsigned __int64 param_2)

{
  char *pcVar1;
  unsigned int uVar3;
  char cVar4;
  __int64 lVar2;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_1 + 0x80;
  fn_82F672D8(iVar9,0xffffffff8201f094,4);
  fn_82F672D8(param_1 + 0x84,0xffffffff8201f09c,0x10);
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(int *)(param_1 + 0xa0) = (*(int **)(param_1 + 0x388))[1] - **(int **)(param_1 + 0x388) >> 5;
  uVar5 = (*(int **)(param_1 + 0x3bc))[1] - **(int **)(param_1 + 0x3bc) >> 2;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xa4) = uVar5;
  if (*(int *)(param_1 + 0x3c4) == 0) {
    uVar3 = fn_828252D0(((unsigned __int64)uVar5 & 0x3fffffff) << 2);
    *(unsigned int *)(param_1 + 0x3c4) = uVar3;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    iVar8 = 0;
    do {
      pcVar1 = *(char **)(**(int **)(param_1 + 0x3bc) + iVar8);
      pcVar6 = pcVar1;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      iVar7 = (int)pcVar6 - (int)pcVar1;
      uVar5 = uVar5 + 1;
      *(int *)(*(int *)(param_1 + 0x3c4) + iVar8) = iVar7;
      iVar8 = iVar8 + 4;
      *(int *)(param_1 + 0xa8) = iVar7 + *(int *)(param_1 + 0xa8);
    } while (uVar5 < *(unsigned int *)(param_1 + 0xa4));
  }
  *(unsigned __int64 *)(param_1 + 0x98) = *(unsigned __int64 *)(param_1 + 0x14);
  cVar4 = fn_82827750(param_1);
  if (cVar4 != '\0') {
    fn_82820EF8(param_1 + 0x98,4);
  }
  uVar3 = fn_828184A8(iVar9,0x38);
  *(unsigned int *)(param_1 + 0x94) = uVar3;
  lVar2 = fn_82F67CF8(iVar9,0x38,1,param_2);
  return (lVar2 + -1) - (lVar2 + -2 + (unsigned __int64)(lVar2 + -1 == 0));
}

