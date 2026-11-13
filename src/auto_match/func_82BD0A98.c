extern int fn_82BC0088();
extern int fn_82BD06C0();
extern int fn_82BD0850();
extern int fn_82BD0948();
extern int fn_82BD0998();
extern unsigned int iStack_60;
extern unsigned int lbl_83223EC4;


void fn_82BD0A98(int *param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *piVar3;
  unsigned char cVar4;
  unsigned int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_60;
  int aiStack_5c;
  
  iVar5 = *(int *)(param_3 + 4);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar5 + 4)) {
    piVar3 = (int *)(*(int *)(iVar5 + 8) + (int)param_2 * 4);
  }
  else {
    piVar3 = (int *)fn_82BC0088(iVar5,param_2);
  }
  iVar5 = param_1[2];
  iVar1 = *piVar3;
  if (iVar5 == 0) {
    param_1[2] = *(int *)(iVar1 + 8);
  }
  else {
    while (piVar3 = (int *)(iVar5 + 0x1c), *piVar3 != 0) {
      iVar5 = *piVar3;
    }
    *piVar3 = *(int *)(iVar1 + 8);
  }
  fn_82BD06C0(param_1,&iStack_60,&aiStack_5c);
  iVar5 = *(int *)(param_3 + 4);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar5 + 4)) {
    piVar3 = (int *)(*(int *)(iVar5 + 8) + (int)param_2 * 4);
  }
  else {
    piVar3 = (int *)fn_82BC0088(iVar5,param_2);
  }
  iVar5 = *piVar3;
  iVar8 = -1;
  iVar6 = 0;
  iVar7 = *(int *)(iVar5 + 8);
  if (0 < *(int *)(iVar5 + 4)) {
    do {
      iVar8 = iVar8 + 1;
      if (iVar8 == 7) {
        iVar7 = *(int *)(iVar7 + 0x1c);
        iVar8 = 0;
      }
      uVar2 = *(unsigned int *)(iVar8 * 4 + iVar7);
      cVar4 = fn_82BD0948(param_3,*(unsigned int *)(*param_1 * 4 + lbl_83223EC4),uVar2);
      if (cVar4 == '\0') {
        fn_82BD0850(param_1,&iStack_60,&aiStack_5c,*(unsigned int *)(param_3 + 8));
        *(unsigned int *)(iStack_60 * 4 + aiStack_5c) = uVar2;
        fn_82BD0998(param_3,*(unsigned int *)(*param_1 * 4 + lbl_83223EC4),uVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar5 + 4));
  }
  *(unsigned int *)(iVar1 + 4) = 0;
  *(unsigned int *)(iVar1 + 8) = 0;
  return;
}

