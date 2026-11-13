extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82D94630();


void fn_82DF3C10(int param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int auStack_30;
  
  fn_82D94630();
  piVar6 = (int *)(param_1 + 0x44);
  iVar3 = fn_82CE5410();
  uVar2 = *(unsigned int *)(param_1 + 0x4c) & 0x3fffffff;
  piVar1 = *(int **)(iVar3 + 0x10);
  if ((int)uVar2 < *(int *)(param_2 + 0x48)) {
    if ((*(unsigned int *)(param_1 + 0x4c) & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*piVar6,uVar2,4);
    }
    auStack_30 = *(unsigned int *)(param_2 + 0x48);
    iVar3 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_30,4);
    *piVar6 = iVar3;
    *(unsigned int *)(param_1 + 0x4c) = auStack_30;
  }
  uVar2 = *(unsigned int *)(param_2 + 0x48);
  uVar4 = (unsigned __int64)uVar2;
  puVar5 = (unsigned int *)*piVar6;
  *(unsigned int *)(param_1 + 0x48) = uVar2;
  if (0 < (int)uVar2) {
    iVar3 = *(int *)(param_2 + 0x44) - (int)puVar5;
    do {
      *puVar5 = *(unsigned int *)(iVar3 + (int)puVar5);
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

