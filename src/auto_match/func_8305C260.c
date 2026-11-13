extern int fn_82810BE8();
extern int fn_83066770();
extern unsigned int iStack_40;
extern unsigned int lbl_821344F4;
extern unsigned int lbl_82139D38;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_8305C260(unsigned __int64 param_1,int param_2,char param_3,int *param_4,int *param_5)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  double dVar4;
  int iStack_40;
  int aiStack_3c [15];
  
  if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + 1;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = *param_5 + 1;
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = 0;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != param_2)) && (*(int *)(iVar1 + 0x24) != param_2))
  {
    lVar3 = 1;
  }
  if ((*(int *)(param_2 + 0x20) != 0) || (*(int *)(param_2 + 0x24) != 0)) {
    fn_83066770(param_2);
    dVar4 = (double)fn_82810BE8();
    if ((dVar4 < (double)lbl_821344F4) || ((double)lbl_82139D38 < dVar4)) {
      lVar3 = lVar3 + 1;
    }
  }
  if (param_3 != '\0') {
    iVar1 = *(int *)(param_2 + 0x20);
    if (param_5 == (int *)0x0) {
      if (iVar1 != 0) {
        lVar2 = fn_8305C260(param_1,iVar1,1,param_4,0);
        lVar3 = lVar2 + lVar3;
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        lVar2 = fn_8305C260(param_1,*(int *)(param_2 + 0x24),1,param_4,0);
        lVar3 = lVar2 + lVar3;
      }
    }
    else {
      iStack_40 = *param_5;
      aiStack_3c[0] = iStack_40;
      if (iVar1 != 0) {
        lVar2 = fn_8305C260(param_1,iVar1,1,param_4,&iStack_40);
        lVar3 = lVar2 + lVar3;
      }
      if (*(int *)(param_2 + 0x24) != 0) {
        lVar2 = fn_8305C260(param_1,*(int *)(param_2 + 0x24),1,param_4,aiStack_3c);
        lVar3 = lVar2 + lVar3;
      }
      if (iStack_40 < aiStack_3c[0]) {
        iStack_40 = aiStack_3c[0];
      }
      *param_5 = iStack_40;
    }
  }
  return lVar3;
}

