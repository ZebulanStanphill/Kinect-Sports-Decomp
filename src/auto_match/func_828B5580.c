void fn_828B5580(unsigned short *param_1,unsigned short *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_2 + 3);
  *(unsigned char *)((int)param_1 + 7) = *(unsigned char *)((int)param_2 + 7);
  return;
}

