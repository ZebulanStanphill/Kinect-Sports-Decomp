extern int fn_82695608();
extern int fn_826957D0();
extern int fn_82697700();
extern int fn_827A2850();


void fn_82723BF8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar6 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar6 == 4)) {
    iVar6 = *(int *)(param_1 + 8) + -0x68;
    if (*(int *)(param_1 + 8) == 0) {
      iVar6 = 0;
    }
    iVar6 = *(int *)(*(int *)(iVar6 + 0xa0) + 0x114);
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar6 + 8);
      uVar7 = (unsigned __int64)(*(unsigned short *)(iVar6 + 0x68) >> 2) & 1;
      uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c);
      if ((unsigned __int64)*(unsigned int *)(iVar1 + 0x20) <= (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c)) {
        uVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x20);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c);
      if ((unsigned __int64)*(unsigned int *)(iVar1 + 0x1c) <= (unsigned __int64)*(unsigned int *)(iVar1 + 0x20)) {
        uVar5 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x20);
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        uVar7 = fn_82695608(uVar3,uVar2);
      }
      if (1 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,1);
        uVar4 = fn_82697700(uVar3,uVar2);
      }
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,2);
        uVar5 = fn_82697700(uVar3,uVar2);
      }
      fn_827A2850(iVar6,uVar4,uVar5,uVar7);
    }
  }
  return;
}

