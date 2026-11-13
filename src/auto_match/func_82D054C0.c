extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE7E68();
extern int fn_82CFBE40();
extern int fn_82D04B20();
extern int fn_82D04F70();
extern int fn_82D05388();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_82D054C0(unsigned int *param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  unsigned char *puVar1;
  __int64 lVar2;
  __int64 lVar3;
  char *pcVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  __int64 lVar12;
  int iVar13;
  struct { unsigned int first; unsigned int second; } stack_pair_90;

  
  lVar2 = fn_82CFBE40(param_2);
  lVar3 = fn_82CFBE40(param_3);
  uVar9 = 0;
  if ((int)lVar2 < (int)lVar3) {
    fn_82D05388(&stack_pair_90.first,param_1);
    fn_82D04B20(param_1);
    lVar12 = 0;
    do {
      pcVar4 = strstr((char *)(stack_pair_90.first + (int)lVar12),(char *)param_2);
      if (pcVar4 == (char *)0x0) break;
      uVar6 = (unsigned __int64)stack_pair_90.first;
      lVar10 = (__int64)(int)pcVar4 - uVar6;
      if (lVar10 < 0) goto LAB_82d05570;
      uVar9 = 1;
      fn_82D04F70(param_1,uVar6 + lVar12,lVar10 - lVar12);
      fn_82D04F70(param_1,param_3,lVar3);
      lVar12 = lVar10 + lVar2;
    } while (param_4 != 0);
    uVar6 = (unsigned __int64)stack_pair_90.first;
LAB_82d05570:
    fn_82D04F70(param_1,uVar6 + lVar12,((unsigned __int64)stack_pair_90.second - lVar12) + -1);
    fn_82CE7E68(&stack_pair_90.first);
  }
  else {
    uVar11 = *param_1;
    lVar10 = 0;
    lVar12 = 0;
    iVar13 = 0;
    do {
      pcVar4 = strstr((char *)(*param_1 + (int)lVar12),(char *)param_2);
      if (pcVar4 == (char *)0x0) break;
      lVar12 = (__int64)(int)pcVar4 - (unsigned __int64)*param_1;
      if ((int)lVar12 == -1) break;
      if ((int)lVar10 < (int)lVar12) {
        lVar7 = lVar12 - lVar10;
        do {
          iVar5 = (int)lVar10;
          lVar10 = lVar10 + 1;
          *(unsigned char *)(iVar13 + uVar11) = *(unsigned char *)(iVar5 + uVar11);
          iVar13 = iVar13 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar5 = 0;
      lVar7 = lVar3;
      if (0 < (int)lVar3) {
        do {
          puVar1 = (unsigned char *)(iVar5 + param_3);
          iVar5 = iVar5 + 1;
          *(unsigned char *)(iVar13 + uVar11) = *puVar1;
          iVar13 = iVar13 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar10 = lVar10 + lVar2;
      lVar12 = lVar12 + lVar2;
    } while (param_4 != 0);
    if ((int)lVar10 < (int)(param_1[1] - 1)) {
      do {
        iVar5 = (int)lVar10;
        lVar10 = lVar10 + 1;
        *(unsigned char *)(iVar13 + uVar11) = *(unsigned char *)(iVar5 + uVar11);
        iVar13 = iVar13 + 1;
      } while ((int)lVar10 < (int)(param_1[1] - 1));
    }
    *(unsigned char *)(iVar13 + uVar11) = 0;
    uVar11 = iVar13 + 1;
    iVar5 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffff) < (int)uVar11) {
      uVar8 = (param_1[2] & 0x3fffffff) << 1;
      if ((int)uVar8 <= (int)uVar11) {
        uVar8 = uVar11;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0xc),param_1,uVar8,1);
    }
    uVar9 = 0;
    param_1[1] = uVar11;
    *(unsigned char *)(*param_1 + iVar13) = 0;
  }
  return uVar9;
}

