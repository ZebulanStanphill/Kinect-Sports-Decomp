extern int fn_82CF9B00();


void fn_82CF9C60(int *param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_1[2] != *param_1) {
      fn_82CF9B00();
    }
  }
  *(unsigned char *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2 + param_3;
  param_1[3] = param_2 + param_3 + -0x20;
  return;
}

