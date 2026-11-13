#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8226C7C0();
extern int fn_82279CA0();
extern int fn_82281868();
extern int fn_822819E0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82196288;
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_82281C20(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar5;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar7;
  int aiStack_40 [2];
  unsigned __int64 uStack_38;
  unsigned __int64 uStack_30;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      puVar1 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 0x18) + -8) + 0x10);
      for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
        iVar7 = puVar2[2];
        if ((unsigned __int64)*(unsigned int *)(iVar7 + 0x10) == (param_2 & 0xffffffff)) goto LAB_82281dfc;
      }
      iVar7 = 0;
LAB_82281dfc:
      fn_82279CA0(*(unsigned int *)(*(int *)(param_1 + 0x18) + -8),1);
      piVar5 = (int *)(iVar7 + 0x5c);
      if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
        piVar5 = (int *)0x0;
      }
      piVar3 = (int *)(iVar7 + 0x60);
      if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
        piVar3 = (int *)0x0;
      }
      if (piVar5 == (int *)0x0) {
        piVar5 = &lbl_82196288;
      }
      aiStack_40[0] = *piVar5;
      puVar1 = *(unsigned int **)(param_1 + 0x40);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,param_2,aiStack_40,piVar3,iVar7 + 100);
      }
      if (aiStack_40[0] != 0) {
        fn_822819E0(param_1,aiStack_40);
      }
    }
  }
  else {
    if (*(int *)(iVar7 + 0x6c) == 0) {
      if ((*(int *)(iVar7 + 0x44) == 1) || (*(int *)(iVar7 + 0x44) == 0)) {
        piVar5 = (int *)(iVar7 + 0x4c);
      }
      else {
        piVar5 = (int *)(iVar7 + 0x54);
      }
      iVar7 = *piVar5;
    }
    else {
      iVar7 = *(int *)(iVar7 + 100);
    }
    for (puVar1 = (unsigned int *)**(unsigned int **)(iVar7 + 0x10);
        puVar1 != *(unsigned int **)(iVar7 + 0x10); puVar1 = (unsigned int *)*puVar1) {
      iVar6 = puVar1[2];
      if ((unsigned __int64)*(unsigned int *)(iVar6 + 0x10) == (param_2 & 0xffffffff)) goto LAB_82281ca4;
    }
    iVar6 = 0;
LAB_82281ca4:
    fn_82279CA0(iVar7,1);
    piVar5 = (int *)(iVar6 + 0x5c);
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      piVar5 = (int *)0x0;
    }
    piVar3 = (int *)(iVar6 + 0x60);
    if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) {
      piVar3 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      piVar5 = &lbl_82196288;
    }
    aiStack_40[0] = *piVar5;
    puVar1 = *(unsigned int **)(param_1 + 0x40);
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,param_2,aiStack_40,piVar3,iVar6 + 100);
    }
    uVar4 = *(unsigned __int64 *)(iVar6 + 0x230);
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)uVar4 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uStack_38 = ((((unsigned __int64)(uStack_38)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)((unsigned __int64)*(unsigned __int64 *)(iVar6 + 0x228) >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x7c);
    uStack_38 = ((((unsigned __int64)(uStack_38)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)*(unsigned __int64 *)(iVar6 + 0x228))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_30 = ((((unsigned __int64)(uStack_30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((float)uVar4)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uStack_38 = CONCAT44((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) * lbl_8218E8E8 + (((unsigned __int64)(uStack_38) >> 0) & 0xFFFFFFFF),
                         (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF) * lbl_8218E8E8 + (((unsigned __int64)(uStack_38) >> 32) & 0xFFFFFFFF));
    if (iVar7 == 0) {
      uStack_30 = uStack_38;
    }
    else {
      uStack_30 = uVar4;
      fn_8226C7C0(iVar7,&uStack_38,&uStack_30,1);
    }
    if (aiStack_40[0] != 0) {
      fn_82281868(param_1,aiStack_40,&uStack_30);
    }
  }
  return;
}

