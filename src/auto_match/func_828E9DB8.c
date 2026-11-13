unsigned __int64 fn_828E9DB8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  
  uVar2 = 1;
  if (param_3 == 0) {
    return uVar2;
  }
  uVar3 = *param_1;
  uVar6 = param_1[1];
  if (param_1[3] < (uVar3 + param_3 + 7 >> 3) + uVar6) {
    uVar2 = 0;
  }
  else {
    if ((uVar3 != 0) && (7 < uVar3 + param_3)) {
      uVar5 = 8 - uVar3;
      uVar4 = (1 << (uVar5 & 0x3f)) - 1;
      param_3 = param_3 - uVar5;
      uVar1 = (unsigned int)param_2;
      *(unsigned char *)(param_1[2] + uVar6) =
           *(unsigned char *)(param_1[2] + uVar6) & ~(unsigned char)(uVar4 << (uVar3 & 0x3f));
      param_2 = (unsigned __int64)(uVar1 >> (uVar5 & 0x3f));
      *(unsigned char *)(param_1[2] + param_1[1]) =
           (unsigned char)((uVar4 & uVar1) << (*param_1 & 0x3f)) | *(unsigned char *)(param_1[2] + param_1[1]);
      *param_1 = 0;
      param_1[1] = param_1[1] + 1;
    }
    uVar3 = (unsigned int)param_2;
    if (7 < (int)param_3) {
      uVar7 = (unsigned __int64)(param_3 >> 3);
      param_3 = param_3 - (param_3 & 0xfffffff8);
      do {
        uVar3 = (unsigned int)((param_2 & 0xffffffff) >> 8);
        *(char *)(param_1[2] + param_1[1]) = (char)param_2;
        param_1[1] = param_1[1] + 1;
        uVar7 = uVar7 - 1;
        param_2 = (param_2 & 0xffffffff) >> 8;
      } while (uVar7 != 0);
    }
    if (0 < (int)param_3) {
      uVar6 = (1 << (param_3 & 0x3f)) - 1;
      *(unsigned char *)(param_1[2] + param_1[1]) =
           *(unsigned char *)(param_1[2] + param_1[1]) & ~(unsigned char)(uVar6 << (*param_1 & 0x3f));
      *(unsigned char *)(param_1[2] + param_1[1]) =
           (unsigned char)((uVar6 & uVar3) << (*param_1 & 0x3f)) | *(unsigned char *)(param_1[2] + param_1[1]);
      *param_1 = *param_1 + param_3;
      return uVar2;
    }
  }
  return uVar2;
}

