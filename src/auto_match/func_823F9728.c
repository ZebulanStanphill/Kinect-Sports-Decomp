void fn_823F9728(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char auStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int auStack_24 [1];
  
  (*(int (**)())(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),param_2,&uStack_2c);
  (*(int (**)())(**(int **)(param_1 + 0x20) + 0x14))(*(int **)(param_1 + 0x20),param_2,&uStack_28);
  (*(int (**)())(**(int **)(param_1 + 0x28) + 0x14))(*(int **)(param_1 + 0x28),param_2,auStack_24);
  (*(int (**)())(**(int **)(param_1 + 0x30) + 0x14))(*(int **)(param_1 + 0x30),param_2,&auStack_30);
  if (param_3 != 0) {
    *(unsigned int *)(*(int *)(param_1 + 8) + param_3) = uStack_2c;
    *(unsigned int *)(*(int *)(param_1 + 0xc) + param_3) = uStack_28;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + param_3) = auStack_24[0];
    *(unsigned char *)(*(int *)(param_1 + 0x14) + param_3) = auStack_30;
  }
  return;
}

