extern int fn_8249D310();
extern unsigned int iStack_40;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82458220(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  iStack_40 = param_1[1];
  uStack_3c = *(unsigned int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 4) == *param_1) {
    uStack_30 = *(unsigned int *)(param_2 + 0x18);
    uStack_38 = *(unsigned int *)(param_2 + 0x10);
    uStack_34 = *(unsigned int *)(param_2 + 0x14);
    fn_8249D310(param_1 + 6,&iStack_40);
    if (*(int *)(param_2 + 0x10) == 3) {
      param_1[10] = param_1[10] + 1;
      param_1[0x1e] = param_1[0x1e] + 1;
    }
    if (*(int *)(param_2 + 0x10) == 8) {
      param_1[0x34] = 0;
    }
    else {
      param_1[0x34] = param_1[0x34] + 1;
    }
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    if (*(int *)(param_2 + 0x10) != 8) {
      iVar1 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x14) + 0xc & 0xffffffff) << 2);
      iVar2 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x14) + 0x20 & 0xffffffff) << 2);
      *(int *)((int)param_1 + iVar1 + 8) = *(int *)((int)param_1 + iVar1 + 8) + 1;
      *(int *)((int)param_1 + iVar2 + 8) = *(int *)((int)param_1 + iVar2 + 8) + 1;
      iVar1 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0x10 & 0xffffffff) << 2);
      iVar2 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 8) + 0x24 & 0xffffffff) << 2);
      *(int *)((int)param_1 + iVar1 + 8) = *(int *)((int)param_1 + iVar1 + 8) + 1;
      *(int *)((int)param_1 + iVar2 + 8) = *(int *)((int)param_1 + iVar2 + 8) + 1;
    }
  }
  else {
    uStack_34 = *(unsigned int *)(param_2 + 0x14);
    piVar3 = param_1 + 2;
    uStack_30 = *(unsigned int *)(param_2 + 0x18);
    uStack_38 = *(unsigned int *)(param_2 + 0x10);
    fn_8249D310(piVar3,&iStack_40);
    iVar1 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) + 0x12 & 0xffffffff) << 2);
    iVar2 = (int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x10) + 0x26 & 0xffffffff) << 2);
    *(int *)(iVar1 + (int)piVar3) = *(int *)(iVar1 + (int)piVar3) + 1;
    *(int *)(iVar2 + (int)piVar3) = *(int *)(iVar2 + (int)piVar3) + 1;
    if (*(int *)(param_2 + 0x10) == 8) {
      param_1[0xd] = param_1[0xd] + 1;
      param_1[0x21] = param_1[0x21] + 1;
      param_1[0x36] = 0;
      param_1[0x35] = param_1[0x35] + 1;
    }
    else {
      param_1[0x35] = 0;
      param_1[0x36] = param_1[0x36] + 1;
    }
    param_1[0x34] = 0;
    if (*(int *)(param_2 + 0x10) == 4) {
      param_1[0x37] = 0;
    }
  }
  return;
}

