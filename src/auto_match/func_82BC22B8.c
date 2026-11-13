unsigned __int64 fn_82BC22B8(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x29) == *(char *)(param_2 + 0xa4)) {
    iVar3 = 1;
    iVar2 = (**(int (***)())(*param_1 + 4))(param_1);
    if (0 < iVar2) {
      do {
        if ((*(char *)((int)param_1 + iVar3 + 0x98) != *(char *)(param_2 + 0x98 + iVar3)) ||
           (*(char *)((int)param_1 + iVar3 + 0x9e) != *(char *)(iVar3 + param_2 + 0x9e)))
        goto LAB_82bc22dc;
        iVar3 = iVar3 + 1;
        iVar2 = (**(int (***)())(*param_1 + 4))(param_1);
      } while (iVar3 <= iVar2);
    }
    uVar1 = 1;
  }
  else {
LAB_82bc22dc:
    uVar1 = 0;
  }
  return uVar1;
}

