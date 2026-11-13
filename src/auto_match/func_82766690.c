#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_82766690(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  
  pbVar4 = (unsigned char *)(*(int *)*param_1 + param_2);
  bVar1 = *pbVar4;
  if ((bVar1 & 3) == 0) {
    uVar3 = (unsigned int)(bVar1 >> 2);
    uVar2 = 1;
  }
  else {
    if ((bVar1 & 3) == 1) {
      uVar2 = 2;
      uVar3 = (unsigned int)pbVar4[1] << 6;
    }
    else {
      if ((bVar1 & 3) < 3) {
        uVar3 = (unsigned int)pbVar4[2];
        uVar2 = 3;
      }
      else {
        uVar2 = 4;
        uVar3 = (unsigned int)CONCAT11(pbVar4[3],pbVar4[2]);
      }
      uVar3 = (uVar3 << 8 | (unsigned int)pbVar4[1]) << 6;
    }
    uVar3 = uVar3 | bVar1 >> 2;
  }
  *param_3 = uVar3;
  return uVar2;
}

