extern int fn_826CC3C8();
extern int fn_826CDA28();


void fn_826CE5D0(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  (**(int (***)())(*param_1 + 0x1c))(param_1,0xffffffff821cc86c);
  uVar1 = fn_826CC3C8(param_2,param_1[0x11],0);
  if ((uVar1 == 0) || (uVar1 = -(unsigned int)((*(unsigned char *)(uVar1 + 0x35) & 2) == 0) & uVar1, uVar1 == 0)) {
    uVar1 = fn_826CDA28(param_2,param_1[0x11]);
    *(int **)(uVar1 + 0x30) = param_1;
    *(int **)(uVar1 + 0x2c) = param_1;
    *(int **)(uVar1 + 0x28) = param_1;
    *(int **)(uVar1 + 0x24) = param_1;
    *(int **)(uVar1 + 0x20) = param_1;
    *(int **)(uVar1 + 0x1c) = param_1;
    *(int **)(uVar1 + 0x18) = param_1;
    *(int **)(uVar1 + 0x14) = param_1;
    *(int **)(uVar1 + 0x10) = param_1;
    *(unsigned char *)(uVar1 + 0x34) = 0;
  }
  else {
    *(int **)(uVar1 + 0x30) = param_1;
    *(int **)(uVar1 + 0x2c) = param_1;
    *(int **)(uVar1 + 0x28) = param_1;
    *(int **)(uVar1 + 0x24) = param_1;
    *(int **)(uVar1 + 0x20) = param_1;
    *(int **)(uVar1 + 0x1c) = param_1;
    *(int **)(uVar1 + 0x18) = param_1;
    *(int **)(uVar1 + 0x14) = param_1;
    *(int **)(uVar1 + 0x10) = param_1;
  }
  *(unsigned int *)(uVar1 + 8) = param_3;
  *(unsigned char *)(uVar1 + 0x35) = *(unsigned char *)(uVar1 + 0x35) | 1;
  return;
}

