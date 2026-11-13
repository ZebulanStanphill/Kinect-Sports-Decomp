void fn_82807D10(int param_1,unsigned int *param_2)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  
  uVar4 = 0;
  pbVar7 = (unsigned char *)*param_2;
  iVar5 = 0;
  uVar6 = 0;
  if (*(unsigned short *)(param_1 + 0x1e) != 0) {
    do {
      uVar4 = (unsigned int)*pbVar7 << (uVar6 & 0x3f) | uVar4;
      uVar2 = uVar4 >> (uVar6 & 0x3f);
      uVar3 = uVar2 & 3;
      if ((uVar2 & 3) == 0) {
code_r0x82807d8c:
        pbVar7 = pbVar7 + 1;
      }
      else {
        if (uVar3 == 1) {
          uVar2 = (unsigned int)pbVar7[1] << 0x10;
code_r0x82807d88:
          pbVar7 = pbVar7 + 1;
          uVar4 = uVar2 | uVar4;
          goto code_r0x82807d8c;
        }
        if (uVar3 < 3) {
          uVar2 = (unsigned int)pbVar7[1] << 8;
          goto code_r0x82807d88;
        }
        if (uVar3 == 3) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          uVar4 = (unsigned int)*pbVar7 << 0x10 | (unsigned int)*pbVar1 << 8 | uVar4;
          goto code_r0x82807d8c;
        }
      }
      iVar5 = iVar5 + 9;
      uVar6 = uVar6 + 0x18;
    } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x1e));
  }
  *param_2 = pbVar7;
  return;
}

