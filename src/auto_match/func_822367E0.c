extern unsigned int *auStack_30;
extern unsigned int *auStack_3c;
extern unsigned int uStack_40;


void fn_822367E0(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned int uStack_40;
  unsigned int auStack_3c;
  unsigned char auStack_30 [16];
  
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&auStack_3c);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_40);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,auStack_30);
  piVar1 = *(int **)(param_3 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 4))(piVar1,auStack_3c,uStack_40);
  }
  return;
}

