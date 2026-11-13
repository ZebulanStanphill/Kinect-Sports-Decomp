int * fn_82644B28(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2a9c);
  uVar2 = *(unsigned int *)(param_1 + 0x2a90);
  uVar3 = *(unsigned int *)(param_1 + 0x3b1c) & 3 | *(unsigned int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0x3468) = *(unsigned int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0x346c) = *(unsigned int *)(param_1 + 0x3b1c);
  *(unsigned int *)(param_2 + 4) = 0xc0003b00;
  *(unsigned int *)(param_2 + 8) = 0x7fff;
  if ((*(unsigned char *)(param_1 + 0x2ac0) & 0x80) == 0) {
    *(unsigned int *)(param_2 + 0xc) = 0xc0001000;
    *(unsigned int *)(param_2 + 0x10) = 0x77777777;
  }
  else {
    *(unsigned int *)(param_2 + 0xc) = 0x5c8;
    *(unsigned int *)(param_2 + 0x10) = 0x20000;
    *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) & 0x7fffffffffffffff;
    *(unsigned char *)(param_1 + 0x2abf) = *(unsigned char *)(param_1 + 0x2abf) & 0xfc;
    *(unsigned char *)(param_1 + 0x2ac0) = *(unsigned char *)(param_1 + 0x2ac0) & 0x7f;
  }
  *(unsigned int *)(param_2 + 0x14) = 0xc0025800;
  *(unsigned int *)(param_2 + 0x18) = 3;
  *(unsigned int *)(param_2 + 0x1c) = ((uVar2 + 4 >> 0x14) + 0x200 & 0x1000) + (uVar2 + 4 & 0x1fffffff) | 2;
  *(unsigned int *)(param_2 + 0x20) = uVar3;
  *(unsigned int *)(param_2 + 0x24) = 0xc0025800;
  *(unsigned int *)(param_2 + 0x28) = 3;
  *(unsigned int *)(param_2 + 0x2c) = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff) | 2;
  *(int *)(param_2 + 0x30) = iVar1;
  if ((*(int *)(param_1 + 0x54f4) == 0) && ((*(unsigned char *)(param_1 + 0x2abd) & 2) != 0)) {
    **(int **)(param_1 + 0x2a90) = iVar1;
    *(unsigned int *)(*(int *)(param_1 + 0x2a90) + 4) = uVar3;
  }
  *(int *)(param_1 + 0x2a9c) = iVar1 + 2;
  return (int *)(param_2 + 0x30);
}

