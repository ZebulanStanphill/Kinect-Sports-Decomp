extern unsigned int *auStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82241578(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int auStack_28;
  
  (**(int (***)())(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),param_2,&auStack_28);
  (**(int (***)())(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),param_2,&uStack_2c);
  (**(int (***)())(**(int **)(param_1 + 0x78) + 0x14))(*(int **)(param_1 + 0x78),param_2,&uStack_30);
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x60) + 4))
              (*(int **)(param_1 + 0x60),auStack_28,uStack_2c,uStack_30);
  }
  return;
}

