extern int fn_8267C498();
extern int memcpy();


int * fn_82681BF8(double param_1, int *param_2, int *param_3, int param_4, char param_5, unsigned __int64 param_6, char param_7, int *param_8, unsigned short in_stack_00000056, char in_stack_0000005f, unsigned char in_stack_00000067)

{



  
  *param_2 = 0;
  memcpy(param_2 + 1,param_6,0x20);
  param_2[9] = *param_8;
  param_2[10] = param_8[1];
  param_2[0xb] = param_8[2];
  param_2[0xc] = param_8[3];
  param_2[0xd] = param_8[4];
  param_2[0xe] = param_8[5];
  param_2[0x11] = *param_3;
  *(unsigned char *)((int)param_2 + 0x4b) = 0;
  param_2[0xf] = (int)(float)param_1;
  if (param_7 != '\0') {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 4;
  }
  if (param_5 != '\0') {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 8;
  }
  if (in_stack_0000005f != '\0') {
    *(unsigned char *)((int)param_2 + 0x4b) = *(unsigned char *)((int)param_2 + 0x4b) | 0x80;
  }
  param_2[0x10] = param_4;
  param_2[0x11] = *param_3;
  *(unsigned char *)((int)param_2 + 0x4a) = in_stack_00000067;
  *(unsigned short *)(param_2 + 0x12) = in_stack_00000056;
  if (*param_2 != 0) {
    fn_8267C498();
  }
  *param_2 = 0;
  return param_2;
}

