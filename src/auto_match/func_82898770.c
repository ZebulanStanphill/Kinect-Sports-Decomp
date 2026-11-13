void fn_82898770(int param_1,unsigned int param_2,char param_3)

{
  unsigned char bVar1;
  int iVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar2 == 0)) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      return;
    }
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    if (iVar2 == 0) {
      return;
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
      goto LAB_82898824;
    }
  }
  else if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    iVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
    goto LAB_82898824;
  }
  iVar2 = 0;
LAB_82898824:
  iVar2 = iVar2 + ((int)param_2 >> 3) + (unsigned int)((int)param_2 < 0 && (param_2 & 7) != 0);
  bVar1 = (unsigned char)(1 << (param_2 + (((int)param_2 >> 3) +
                                 (unsigned int)((int)param_2 < 0 && (param_2 & 7) != 0)) * -8 & 0x3f));
  if (param_3 == '\0') {
    *(unsigned char *)(iVar2 + 4) = *(unsigned char *)(iVar2 + 4) & ~bVar1;
  }
  else {
    *(unsigned char *)(iVar2 + 4) = bVar1 | *(unsigned char *)(iVar2 + 4);
  }
  return;
}

