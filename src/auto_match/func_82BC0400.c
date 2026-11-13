extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0110();
extern int fn_82BC01C0();


void fn_82BC0400(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  
  uVar1 = (*(int (**)())param_1[4])(param_2);
  iVar4 = (*param_1 - 1 & uVar1) * 4;
  if (*(int *)(param_1[2] + iVar4) == 0) {
    uVar1 = param_1[5];
    puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
    puVar5 = puVar2 + 1;
    *puVar2 = uVar1;
    if (puVar5 == (unsigned int *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      fn_82BA03B8(puVar5,param_1[5]);
    }
    *(unsigned int **)(param_1[2] + iVar4) = puVar5;
  }
  iVar4 = *(int *)(param_1[2] + iVar4);
  puVar3 = (unsigned int *)fn_82BC0110(iVar4,0);
  *puVar3 = (int)param_2;
  if (*param_1 < *(unsigned int *)(iVar4 + 4)) {
    fn_82BC01C0(param_1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

