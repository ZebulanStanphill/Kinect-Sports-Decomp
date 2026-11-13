typedef unsigned char bool;


unsigned __int64 fn_828301D0(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  bool bVar8;
  
  uVar1 = param_2[2];
  if (uVar1 == param_3[2]) {
    uVar6 = param_2[3];
    uVar4 = param_3[3];
    if (uVar6 == uVar4) {
      uVar6 = (unsigned int)*(unsigned char *)(param_2 + 4);
      uVar4 = (unsigned int)*(unsigned char *)(param_3 + 4);
      if (uVar6 == uVar4) {
        uVar6 = (unsigned int)*(unsigned char *)((int)param_2 + 0x11);
        uVar4 = (unsigned int)*(unsigned char *)((int)param_3 + 0x11);
        if (uVar6 == uVar4) {
          pbVar5 = (unsigned char *)*param_3;
          uVar3 = 0;
          pbVar7 = (unsigned char *)*param_2;
          if (uVar1 != 0) {
            pbVar2 = pbVar7 + uVar1;
            do {
              uVar3 = (unsigned __int64)*pbVar7 - (unsigned __int64)*pbVar5;
              if (uVar3 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar5 = pbVar5 + 1;
            } while (pbVar7 != pbVar2);
          }
          return (uVar3 & 0xffffffff) >> 0x1f;
        }
      }
    }
    bVar8 = uVar4 <= uVar6;
  }
  else {
    bVar8 = (unsigned int)param_3[2] <= uVar1;
  }
  return -(unsigned __int64)!bVar8 & 1;
}

