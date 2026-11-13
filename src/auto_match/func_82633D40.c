void fn_82633D40(unsigned char param_1,unsigned char param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5,
                  int param_6)

{
  unsigned int uVar1;
  
  if (param_1 != '\0') {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  uVar1 = *param_5;
  if ((uVar1 & 0x8000) == 0) {
    return;
  }
  *param_5 = uVar1 & 0xffffffc0 | *(unsigned int *)((uVar1 & 0x3f) * 4 + param_6) & 0x3f;
  return;
}

