extern int fn_82A4F4E0();
extern int fn_82F68CC0();


unsigned __int64 fn_82A77E00(int param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  puVar1 = *(unsigned int **)(param_1 + 0xb8);
  uVar2 = *(unsigned int *)(param_1 + 0xbc);
  uVar6 = (((unsigned __int64)puVar1[5] + (unsigned __int64)puVar1[4]) - (unsigned __int64)uVar2) + (unsigned __int64)*puVar1;
  if ((uVar6 & 0xffffffff) < (param_2 & 0xffffffff)) {
    if (*param_3 == 0) {
      *param_3 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x214);
    }
    fn_82F68CC0(*param_3,*(unsigned int *)(param_1 + 0xbc),uVar6);
    uVar5 = *(unsigned int *)(param_1 + 0xbc) + uVar6;
    param_2 = uVar6;
  }
  else {
    if (*param_3 == 0) {
      *param_3 = uVar2;
    }
    else {
      fn_82F68CC0(*param_3,(unsigned __int64)uVar2,param_2);
    }
    uVar5 = *(unsigned int *)(param_1 + 0xbc) + param_2;
  }
  puVar1 = *(unsigned int **)(param_1 + 0xb8);
  *(int *)(param_1 + 0xbc) = (int)uVar5;
  *(unsigned __int64 *)(param_1 + 200) = (param_2 & 0xffffffff) + *(__int64 *)(param_1 + 200);
  if ((uVar5 & 0xffffffff) ==
      ((unsigned __int64)puVar1[5] + (unsigned __int64)puVar1[4] + (unsigned __int64)*puVar1 & 0xffffffff)) {
    if (*(int *)(param_1 + 0x108) != 0) {
      if ((*param_3 + param_2 & 0xffffffff) == (uVar5 & 0xffffffff)) {
        fn_82F68CC0(*(unsigned int *)(*(int *)(param_1 + 4) + 0x214),(unsigned __int64)*param_3,param_2);
        *param_3 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x214);
      }
      piVar3 = *(int **)(param_1 + 0x108);
      if (piVar3 != (int *)0x0) {
        (**(int (***)())(*piVar3 + 0x28))
                  (piVar3,*(unsigned int *)(*(int *)(param_1 + 0xb8) + 4),
                   *(unsigned int *)(*(int *)(param_1 + 0xb8) + 8));
      }
      if ((*(unsigned int *)(*(int *)(param_1 + 0xb8) + 8) & 0x80) != 0) {
        if (*(int **)(param_1 + 0x108) != (int *)0x0) {
          (**(int (***)())(**(int **)(param_1 + 0x108) + 0xc))();
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0xb8);
    if ((*(unsigned int *)(iVar4 + 8) & 0x40) != 0) {
      *(unsigned __int64 *)(param_1 + 200) = 0;
    }
    if (*(int *)(iVar4 + 0x24) == 0) {
      fn_82A4F4E0();
    }
    else {
      *(unsigned int *)(iVar4 + 0x24) = 0;
    }
    *(unsigned int *)(param_1 + 0xb8) = 0;
    *(unsigned int *)(param_1 + 0xbc) = 0;
  }
  return param_2;
}

