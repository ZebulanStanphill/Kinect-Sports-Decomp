extern int fn_82BC23E0();
extern unsigned int lbl_8316FF50;


int fn_82BB5CB0(int param_1,unsigned char *param_2)

{
  char cVar2;
  int iVar1;
  unsigned char uVar3;
  int iVar4;
  
  cVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x14))();
  if (cVar2 == '\0') {
    cVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x18))();
    if (cVar2 != '\0') {
      for (iVar4 = *(int *)(param_1 + 0x2c); *(int *)(iVar4 + 8) != 0; iVar4 = *(int *)(iVar4 + 8))
      {
        iVar1 = fn_82BC23E0(*(unsigned int *)(iVar4 + 0x28));
        if (2 < iVar1) goto LAB_82bb5d4c;
      }
      iVar4 = 0;
LAB_82bb5d9c:
      uVar3 = 0;
      goto LAB_82bb5d44;
    }
    cVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))();
    if (cVar2 == '\0') {
      return 0;
    }
    for (iVar4 = *(int *)(param_1 + 0x2c); *(int *)(iVar4 + 8) != 0; iVar4 = *(int *)(iVar4 + 8)) {
      iVar1 = fn_82BC23E0(*(unsigned int *)(iVar4 + 0x28));
      if (iVar1 < 3) goto LAB_82bb5d9c;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(iVar4 + 8);
    while (iVar1 != 0) {
      if ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(*(int *)(iVar4 + 0x28) + 0x18) * 0x34) >> 2 & 1) != 0)
      {
        uVar3 = 0;
        goto LAB_82bb5d44;
      }
      iVar1 = fn_82BC23E0();
      if (2 < iVar1) goto LAB_82bb5d4c;
      iVar4 = *(int *)(iVar4 + 8);
      iVar1 = *(int *)(iVar4 + 8);
    }
  }
  *param_2 = 0;
  return *(int *)(param_1 + 0x2c);
LAB_82bb5d4c:
  uVar3 = 1;
LAB_82bb5d44:
  *param_2 = uVar3;
  return iVar4;
}

