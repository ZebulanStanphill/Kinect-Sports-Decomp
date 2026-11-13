extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_826D6290();


unsigned char * fn_82759838(unsigned char *param_1,unsigned char *param_2)

{
  if (((*param_2 & 0x10) != 0) && (*(unsigned int *)(param_2 + 4) != 0)) {
    fn_8267C4C8(*(unsigned int *)(param_2 + 4));
  }
  if (((*param_1 & 0x10) != 0) && (*(unsigned int *)(param_1 + 4) != 0)) {
    fn_8267C4F0(*(unsigned int *)(param_1 + 4));
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  fn_826D6290(param_1 + 8,param_2 + 8);
  *(float *)(param_1 + 0x10) = *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x14) = *(float *)(param_2 + 0x14);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x1c) = *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0x20) = *(float *)(param_2 + 0x20);
  *(float *)(param_1 + 0x24) = *(float *)(param_2 + 0x24);
  return param_1;
}

