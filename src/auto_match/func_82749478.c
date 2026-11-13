extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_82696BC8();
extern int fn_826972E0();


void fn_82749478(int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  double dVar4;
  
  if ((*(int **)(param_1 + 8) != (int *)0x0) &&
     (iVar3 = (**(int (***)())(**(int **)(param_1 + 8) + 8))(), iVar3 == 0x12)) {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      *(unsigned int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
    }
    fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar3);
    if (7 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,0);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x30) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,1);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x38) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,2);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x40) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,3);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x48) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,4);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x34) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,5);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x3c) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,6);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x44) = (float)dVar4;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = fn_826957D0(param_1,7);
      dVar4 = (double)fn_826972E0(uVar2,uVar1);
      *(float *)(iVar3 + 0x4c) = (float)dVar4;
    }
    if (iVar3 != 0) {
      fn_826824B0(iVar3);
    }
  }
  return;
}

