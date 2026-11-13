extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C2A470();
extern int fn_82C2AA40();


void fn_82C2AEC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 *puVar6;
  unsigned __int64 * apuStack_40;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  apuStack_40 = (unsigned __int64 *)0x0;
  if (param_2 < *(unsigned __int64 *)(iVar1 + 0x28)) {
    iVar3 = -0x7faffff8;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 4);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      lVar5 = *(__int64 *)(iVar3 + 8);
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar3 + 4);
    }
    if (uVar4 + lVar5 < (param_3 & 0xffffffff) + param_2) {
      iVar3 = -0x7fafff2c;
    }
    else {
      iVar3 = fn_82C10AD0(*(unsigned int *)(iVar1 + 0x30),0x1f,0x30,&apuStack_40);
      if (iVar3 < 0) goto LAB_82c2b004;
      puVar6 = apuStack_40 + -1;
      lVar5 = 6;
      do {
        puVar6 = puVar6 + 1;
        *puVar6 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *apuStack_40 = param_2;
      *(int *)((int)apuStack_40 + 0x1c) = (int)param_3;
      *(unsigned int *)(apuStack_40 + 4) = *(unsigned int *)((int)apuStack_40 + 0x1c);
      *(unsigned int *)(apuStack_40 + 3) = 0;
      iVar3 = fn_82C10AD0(*(unsigned int *)(iVar1 + 0x30),0x1f,
                                *(unsigned int *)((int)apuStack_40 + 0x1c),
                                (int)apuStack_40 + 0x2c);
      if (((iVar3 < 0) || (iVar3 = fn_82C2A470(param_1,apuStack_40), iVar3 < 0)) ||
         (iVar3 = fn_82C2AA40(param_1,param_2,param_3,apuStack_40), iVar3 < 0))
      goto LAB_82c2b004;
      *param_4 = apuStack_40;
    }
  }
  if (-1 < iVar3) {
    return;
  }
LAB_82c2b004:
  do {
    iVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1f,&apuStack_40);
  } while (iVar3 < 0);
  return;
}

