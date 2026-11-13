extern int fn_82422E78();
extern unsigned int lbl_82191C98;
extern unsigned int uStack_54;


unsigned __int64 fn_82422D88(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uStack_54;
  int aiStack_50 [20];
  
  puVar3 = &uStack_54;
  lVar2 = param_3 + 0x24;
  lVar6 = 10;
  do {
    lVar2 = lVar2 + 4;
    puVar3 = puVar3 + 1;
    *puVar3 = (unsigned int)LZCOUNT(*(unsigned int *)lVar2) >> 5;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = 1;
  lVar2 = 0;
  *(unsigned int *)((int)aiStack_50 + (int)((param_2 & 0xffffffff) << 2)) = 1;
  do {
    iVar5 = *(int *)(&lbl_82191C98 + (int)((param_2 * 6 + lVar2 & 0xffffffff) << 2));
    if (-1 < iVar5) {
      if ((aiStack_50[iVar5] == 0) && (*(int *)((iVar5 + 10) * 4 + (int)param_3) != 0)) {
        aiStack_50[iVar5] = (int)uVar1;
        fn_82422E78(param_1,iVar5,aiStack_50,param_3);
      }
    }
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 6);
  iVar5 = 0;
  piVar4 = aiStack_50;
  do {
    if (*piVar4 == 0) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 10);
  return 1;
}

