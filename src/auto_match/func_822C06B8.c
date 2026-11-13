extern int fn_8288B760();
extern int fn_828AAF70();
extern int fn_828BD3E8();


void fn_822C06B8(int param_1)

{
  int *piVar1;
  char cVar5;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  double dVar6;
  
  piVar1 = *(int **)(param_1 + 0x168);
  if (piVar1 != (int *)0x0) {
    cVar5 = fn_8288B760(piVar1);
    if (cVar5 == '\0') {
      iVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
      uVar4 = (**(int (***)())(*(int *)(iVar3 + 0x240) + 0x3c))();
      *(unsigned int *)(param_1 + 0x7ac) = uVar4 & 0xff;
      iVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
      uVar4 = (**(int (***)())(*(int *)(iVar3 + 0x294) + 0x3c))();
      *(unsigned int *)(param_1 + 0x7b0) = uVar4 & 0xff;
      iVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
      uVar4 = (**(int (***)())(*(int *)(iVar3 + 0x2e8) + 0x3c))();
      *(unsigned int *)(param_1 + 0x7a8) = uVar4 & 0xff;
      iVar3 = (**(int (***)())(*piVar1 + 8))(piVar1);
      dVar6 = (double)(**(int (***)())(*(int *)(iVar3 + 0x1ec) + 0x3c))();
      *(float *)(param_1 + 0x4e8) = (float)dVar6;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x7ac);
      lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar2 + 0x240,iVar3 != 0);
      iVar3 = *(int *)(param_1 + 0x7b0);
      lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar2 + 0x294,iVar3 != 0);
      iVar3 = *(int *)(param_1 + 0x7a8);
      lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar2 + 0x2e8,iVar3 != 0);
      dVar6 = (double)(*(float *)(param_1 + 0x4e8) / *(float *)(param_1 + 0x4e0));
      lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828BD3E8(dVar6,lVar2 + 0x1ec);
      iVar3 = *(int *)(param_1 + 0x7a4);
      lVar2 = (**(int (***)())(*piVar1 + 8))(piVar1);
      fn_828AAF70(lVar2 + 0x33c,iVar3 != 0);
    }
  }
  return;
}

