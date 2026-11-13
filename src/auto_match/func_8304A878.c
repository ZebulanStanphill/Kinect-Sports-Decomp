extern unsigned int *auStack_20;
extern int fn_83049F40();
extern int fn_8304A420();
extern unsigned int iStack_1c;


void fn_8304A878(int param_1,int param_2)

{
  int iVar1;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x20))();
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
      *(unsigned int *)(param_1 + 0x5c) = 0;
      *(unsigned char *)(param_1 + 0x7c) = 0;
      fn_8304A420(param_1);
      fn_83049F40(param_1);
      iVar1 = *(int *)(param_1 + 0x54);
      (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x28))(*(int **)(param_1 + 0x2c),iVar1,0,auStack_20)
      ;
      *(int *)(param_1 + 0x30) = iVar1 - iStack_1c;
    }
  }
  return;
}

