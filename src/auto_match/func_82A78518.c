extern int fn_82A77860();


__int64 fn_82A78518(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int *piVar4;
  __int64 lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = *(unsigned int *)(iVar1 + 4);
  uVar3 = *(unsigned int *)(iVar1 + 8);
  iVar6 = (int)param_2;
  *(int *)(iVar1 + 4) = iVar6;
  iVar1 = *(int *)(param_1 + 0x78);
  if (**(short **)(param_1 + 0x78) == 2) {
    trapWord(6,(unsigned __int64)*(unsigned short *)(iVar1 + 0x12),0);
    iVar6 = (int)(((__int64)(int)(unsigned int)*(unsigned short *)(iVar1 + 0xc) * (__int64)iVar6 & 0xffffffffU) /
                 (unsigned __int64)*(unsigned short *)(iVar1 + 0x12));
  }
  else {
    iVar6 = (unsigned int)*(unsigned short *)(iVar1 + 0xc) * iVar6;
  }
  *(int *)(iVar1 + 8) = iVar6;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 8) + 0x24))();
  }
  (**(int (***)())(**(int **)(param_1 + 0xfc) + 0x24))();
  lVar5 = fn_82A77860(param_1);
  if (-1 < lVar5) {
    piVar4 = *(int **)(param_1 + 0x108);
    lVar5 = 0;
    if (piVar4 != (int *)0x0) {
      lVar5 = (**(int (***)())(*piVar4 + 0x10))(piVar4,param_2);
    }
    if (-1 < (int)lVar5) {
      return lVar5;
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 0x78) + 4) = uVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x78) + 8) = uVar3;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 8) + 0x24))();
  }
  (**(int (***)())(**(int **)(param_1 + 0xfc) + 0x24))();
  fn_82A77860(param_1);
  return lVar5;
}

