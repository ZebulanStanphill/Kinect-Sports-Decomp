extern int fn_826CC3C8();
extern int fn_826CDA28();
extern int fn_826F66D8();
extern int fn_826F6828();


void fn_826CE770(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned short uVar3;
  char cVar4;
  unsigned int uVar1;
  int iVar2;
  unsigned char bStack_40;
  unsigned char abStack_3f;
  
  (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  uVar3 = fn_826F66D8(param_1);
  cVar4 = fn_826F6828(param_1);
  uVar1 = fn_826CC3C8(param_2,uVar3,0);
  if ((uVar1 == 0) || (uVar1 = -(unsigned int)((*(unsigned char *)(uVar1 + 0x35) & 2) == 0) & uVar1, uVar1 == 0)) {
    iVar2 = fn_826CDA28(param_2,uVar3);
    *(char *)(iVar2 + 0x34) = cVar4;
    *(int **)(iVar2 + 0x30) = param_1;
    *(int **)(iVar2 + 0x2c) = param_1;
    *(int **)(iVar2 + 0x28) = param_1;
    *(int **)(iVar2 + 0x24) = param_1;
    *(int **)(iVar2 + 0x20) = param_1;
    *(int **)(iVar2 + 0x1c) = param_1;
    *(int **)(iVar2 + 0x18) = param_1;
    *(int **)(iVar2 + 0x14) = param_1;
    *(int **)(iVar2 + 0x10) = param_1;
    *(unsigned int *)(iVar2 + 8) = param_3;
    return;
  }
  if (cVar4 == '\x01') {
    (**(int (***)())(*param_1 + 0x28))(&abStack_3f,param_1);
    if ((abStack_3f & 4) != 0) {
      *(int **)(uVar1 + 0x14) = param_1;
    }
    if ((abStack_3f & 8) != 0) {
      *(int **)(uVar1 + 0x18) = param_1;
    }
    if ((abStack_3f & 0x20) != 0) {
      *(int **)(uVar1 + 0x1c) = param_1;
    }
    if ((abStack_3f & 0x80) != 0) {
      *(int **)(uVar1 + 0x20) = param_1;
    }
    if ((abStack_3f & 1) != 0) {
      *(int **)(uVar1 + 0x24) = param_1;
    }
    if ((abStack_3f & 0x40) != 0) {
      *(int **)(uVar1 + 0x28) = param_1;
    }
    if ((abStack_3f & 0x10) != 0) {
      *(int **)(uVar1 + 0x2c) = param_1;
    }
    if ((abStack_3f & 2) == 0) {
      return;
    }
    *(int **)(uVar1 + 0x30) = param_1;
    return;
  }
  if (cVar4 == '\x02') {
    if (*(char *)(uVar1 + 0x34) != '\0') {
      *(unsigned char *)(uVar1 + 0x34) = 2;
    }
    (**(int (***)())(*param_1 + 0x28))(&bStack_40,param_1);
    if ((bStack_40 & 4) != 0) {
      *(int **)(uVar1 + 0x14) = param_1;
    }
    if ((bStack_40 & 8) != 0) {
      *(int **)(uVar1 + 0x18) = param_1;
    }
    if ((bStack_40 & 0x20) != 0) {
      *(int **)(uVar1 + 0x1c) = param_1;
    }
    if ((bStack_40 & 0x80) != 0) {
      *(int **)(uVar1 + 0x20) = param_1;
    }
    if ((bStack_40 & 1) != 0) {
      *(int **)(uVar1 + 0x24) = param_1;
    }
    if ((bStack_40 & 0x40) != 0) {
      *(int **)(uVar1 + 0x28) = param_1;
    }
    if ((bStack_40 & 0x10) != 0) {
      *(int **)(uVar1 + 0x2c) = param_1;
    }
    if ((bStack_40 & 2) == 0) goto LAB_826ce864;
  }
  else {
    *(int **)(uVar1 + 0x2c) = param_1;
    *(int **)(uVar1 + 0x28) = param_1;
    *(int **)(uVar1 + 0x24) = param_1;
    *(int **)(uVar1 + 0x20) = param_1;
    *(int **)(uVar1 + 0x1c) = param_1;
    *(int **)(uVar1 + 0x18) = param_1;
    *(int **)(uVar1 + 0x14) = param_1;
    *(int **)(uVar1 + 0x10) = param_1;
  }
  *(int **)(uVar1 + 0x30) = param_1;
LAB_826ce864:
  *(unsigned int *)(uVar1 + 8) = param_3;
  return;
}

