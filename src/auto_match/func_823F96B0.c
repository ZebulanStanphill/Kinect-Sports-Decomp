extern unsigned int *auStack_2c;
extern unsigned int uStack_30;


void fn_823F96B0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uStack_30;
  unsigned int auStack_2c;
  
  (*(int (**)())(**(int **)(param_1 + 0x10) + 0x14))(*(int **)(param_1 + 0x10),param_2,&uStack_30);
  (*(int (**)())(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&auStack_2c);
  if (param_3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 8) + param_3) = uStack_30;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + param_3) = auStack_2c;
  }
  return;
}

