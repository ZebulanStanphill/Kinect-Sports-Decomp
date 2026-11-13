extern int fn_82776DD8();


void fn_82776E60(int param_1,int *param_2)

{
  unsigned int auStack_30 [6];
  
  if (*(int **)(param_1 + 4) != param_2) {
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      fn_82776DD8(param_1);
    }
    *(int **)(param_1 + 4) = param_2;
    *(unsigned char *)(param_1 + 0x18) = 0;
    (*(int (**)())(*param_2 + 4))(param_2,auStack_30);
    if ((auStack_30[0] & 0x60000) != 0) {
      *(unsigned char *)(param_1 + 0x18) = 1;
      (*(int (**)())(**(int **)(param_1 + 4) + 0x84))(*(int **)(param_1 + 4),param_1 + 0x10);
    }
  }
  return;
}

