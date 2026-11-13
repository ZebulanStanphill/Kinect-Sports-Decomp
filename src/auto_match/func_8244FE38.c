extern int fn_82437130();
extern int fn_82508078();


void fn_8244FE38(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xfc) = 1;
  iVar1 = **(int **)(param_1 + 0x40);
  if ((*(int *)(iVar1 + 0xa0) != 0) && (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) == 1)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(int *)(iVar2 + 0x10c) != 0) {
    uVar4 = 0xffffffff821ba104;
    goto LAB_8244fef8;
  }
  if (*(int *)(iVar2 + 0x110) != 0) {
    uVar3 = *(unsigned int *)(iVar1 + 0xa4);
    uVar4 = 0xffffffff821b9298;
    goto LAB_8244ff08;
  }
  iVar2 = *(int *)(iVar2 + 0x100);
  if (iVar2 == 1) {
    uVar4 = 0xffffffff821ba118;
LAB_8244fef8:
    uVar3 = *(unsigned int *)(iVar1 + 0xa4);
  }
  else {
    if (iVar2 == 2) {
      uVar4 = 0xffffffff821ba124;
      goto LAB_8244fef8;
    }
    uVar3 = *(unsigned int *)(iVar1 + 0xa4);
    if (iVar2 == 3) {
      uVar4 = 0xffffffff821ba130;
    }
    else {
      uVar4 = 0xffffffff821ba13c;
    }
  }
  uVar4 = fn_82437130(param_1,uVar4);
LAB_8244ff08:
  fn_82508078(uVar3,uVar4,0);
  return;
}

