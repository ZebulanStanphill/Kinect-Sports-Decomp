extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82251CE8(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int auStack_60;
  unsigned char auStack_50 [16];
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char uStack_2c;
  
  stack_pair_40.second = 0;
  stack_pair_40.first = 0xffffffff;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&auStack_60);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,auStack_50);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&stack_pair_40.first);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))(piVar1,auStack_60,&stack_pair_40.first);
  }
  return;
}

