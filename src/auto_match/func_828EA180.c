void fn_828EA180(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char bVar7;
  unsigned int uVar8;
  unsigned char *pbVar9;
  unsigned __int64 uVar10;
  
  if (0 < (int)param_3) {
    pbVar9 = (unsigned char *)(param_2 + -1);
    do {
      uVar2 = *param_1;
      uVar4 = 8;
      uVar6 = 0;
      uVar8 = 0;
      if ((uVar2 == 0) || (uVar2 + 8 < 8)) {
LAB_828ea1f0:
        uVar10 = (unsigned __int64)(uVar4 >> 3);
        uVar3 = param_1[2];
        uVar4 = uVar4 - (uVar4 & 0xfffffff8);
        do {
          uVar5 = param_1[1] + 1;
          bVar7 = *(unsigned char *)(param_1[1] + uVar3);
          param_1[1] = uVar5;
          uVar6 = (unsigned int)bVar7 << (uVar8 & 0x3f) | uVar6;
          bVar7 = (unsigned char)uVar6;
          uVar8 = uVar8 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      else {
        uVar8 = 8 - uVar2;
        uVar3 = param_1[2];
        uVar5 = param_1[1] + 1;
        uVar4 = 8 - uVar8;
        bVar7 = *(unsigned char *)(param_1[1] + uVar3);
        param_1[1] = uVar5;
        bVar7 = bVar7 >> (uVar2 & 0x3f);
        uVar6 = (unsigned int)bVar7;
        *param_1 = 0;
        if (7 < (int)uVar4) goto LAB_828ea1f0;
      }
      if (0 < (int)uVar4) {
        uVar2 = *param_1;
        bVar1 = *(unsigned char *)(uVar5 + uVar3);
        *param_1 = uVar2 + uVar4;
        bVar7 = (unsigned char)(((unsigned int)(bVar1 >> (uVar2 & 0x3f)) & ~(-1 << (uVar4 & 0x3f))) << (uVar8 & 0x3f)
                      ) | bVar7;
      }
      param_3 = param_3 + -1;
      pbVar9 = pbVar9 + 1;
      *pbVar9 = bVar7;
    } while (0 < param_3);
  }
  return;
}

