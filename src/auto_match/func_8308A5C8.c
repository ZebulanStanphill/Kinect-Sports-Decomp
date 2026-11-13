void fn_8308A5C8(unsigned __int64 param_1,unsigned short *param_2,unsigned short *param_3,unsigned short param_4)

{
  unsigned short *puVar1;
  unsigned int uVar2;
  
  uVar2 = (int)param_3 - (int)param_2;
  while (0x40 < (int)(uVar2 & 0xfffffffc)) {
    puVar1 = param_2 + ((int)uVar2 >> 3) * 2;
    if (*puVar1 < param_4) {
      param_2 = puVar1;
      puVar1 = param_3;
    }
    param_3 = puVar1;
    uVar2 = (int)puVar1 - (int)param_2;
  }
  if (param_4 <= *param_2) {
    return;
  }
  do {
    param_2 = param_2 + 2;
  } while (*param_2 < param_4);
  return;
}

