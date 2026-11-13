void fn_82AA9058(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned int *param_5)

{
  unsigned short uVar1;
  
  *param_3 = 0;
  if ((param_2 == *(unsigned short *)(param_1 + 0x34) - 1) && ((*(unsigned short *)(param_1 + 0x16) & 0x1000) != 0))
  {
    *param_3 = 1;
  }
  *param_5 = 0;
  if (((unsigned int)*(unsigned short *)(param_1 + 0x14) & 1 << (param_2 & 0x3f)) != 0) {
    *param_5 = 1;
  }
  *param_4 = 0;
  if (*(unsigned short *)(param_1 + 0x34) < 3) {
    return;
  }
  uVar1 = *(unsigned short *)(param_1 + 0x16) >> 4 & 0xf;
  if ((((uVar1 == 1) || (uVar1 == 2)) && (0 < (int)param_2)) && ((int)param_2 < 3)) {
    *param_4 = 1;
  }
  if ((*(unsigned short *)(param_1 + 0x16) & 0xf0) != 0x30) {
    return;
  }
  if ((int)param_2 < 1) {
    return;
  }
  if (3 < (int)param_2) {
    return;
  }
  *param_4 = 1;
  return;
}

