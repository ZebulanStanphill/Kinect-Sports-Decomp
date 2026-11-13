extern int fn_82E32040();


int fn_82E51480(int *param_1)

{
  int lVar1;
  
  if ((int *)param_1[0x16] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[0x16] + 8))((void*)param_1[0x16]);
    param_1[0x16] = 0;
  }
  lVar1 = fn_82E32040(param_1 + 0x16);
  if (lVar1 >= 0) {
    *(unsigned short *)(param_1 + 0x17) = 0;
    if ((int *)param_1[0x18] != (int *)0x0) {
      (*(int (**)())(*(int *)param_1[0x18] + 8))((void*)param_1[0x18]);
      param_1[0x18] = 0;
    }
    (*(int (**)())(*param_1 + 0xa4))(param_1);
  }
  return lVar1;
}

