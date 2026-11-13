extern int fn_8251E5A0();
extern int fn_82572B80();


void fn_825716B8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == (unsigned __int64)param_3)) {
    *(unsigned short *)(param_1 + 4) = 0;
    param_1[1] = *param_1;
    param_1[6] = param_1[5];
    *(unsigned short *)(param_1 + 9) = 0;
  }
  if (param_1[10] != 0) {
    fn_82572B80(param_1[10],param_2);
  }
  uVar1 = param_1[1];
  for (uVar2 = *param_1; uVar2 < uVar1; uVar2 = uVar2 + 0xd0) {
    if ((*(unsigned int *)(uVar2 + 0x98) != 0) &&
       ((unsigned __int64)*(unsigned int *)(uVar2 + 0x98) == (param_2 & 0xffffffff))) {
      fn_8251E5A0(param_1 + 5,
                      (__int64)((int)(uVar2 - *param_1) / (int)(unsigned int)*(unsigned short *)(param_1 + 3)) *
                      (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 8) + (unsigned __int64)param_1[5]);
      fn_8251E5A0(param_1,uVar2);
      uVar2 = uVar2 - 0xd0;
      uVar1 = uVar1 - 0xd0;
    }
  }
  return;
}

