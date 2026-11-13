void fn_8267B388(unsigned int *param_1)

{
  if (param_1[1] != 0) {
    *(unsigned char *)(param_1[1] + 0x210) = 0;
    (*(int (**)())(*param_1 + 0x30))(param_1,0);
    param_1[1] = 0;
  }
  return;
}

