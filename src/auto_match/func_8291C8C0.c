void fn_8291C8C0(unsigned short *param_1,unsigned short *param_2)

{
  unsigned int uVar1;
  
  *param_1 = *param_2 << 8 | *param_2 >> 8;
  uVar1 = *(unsigned int *)(param_2 + 1);
  *(unsigned int *)(param_1 + 1) =
       (uVar1 >> 24) | ((uVar1 >> 8) & 0xff00) | ((uVar1 << 8) & 0xff0000) | (uVar1 << 24);
  param_1[3] = param_2[3] << 8 | param_2[3] >> 8;
  param_1[4] = param_2[4] << 8 | param_2[4] >> 8;
  uVar1 = *(unsigned int *)(param_2 + 5);
  *(unsigned int *)(param_1 + 5) =
       (uVar1 >> 24) | ((uVar1 >> 8) & 0xff00) | ((uVar1 << 8) & 0xff0000) | (uVar1 << 24);
  return;
}

