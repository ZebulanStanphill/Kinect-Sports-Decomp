extern int fn_82C4E5E8();
extern int fn_82CABF20();
extern int fn_82CAD600();


unsigned __int64 fn_82CAC2E0(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 *param_3)

{
  unsigned char bVar1;
  __int64 lVar2;
  unsigned char *pbVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  uVar8 = (unsigned __int64)(unsigned int)param_2[7];
  uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
  iVar9 = 0;
  uVar7 = uVar5 + 0x10;
  if (uVar8 < 0x21) {
    if (uVar8 == 0) {
      iVar9 = 0;
    }
    else {
      iVar4 = 0;
      if ((uVar7 & 0xffffffff) < uVar8) {
        do {
          iVar9 = iVar4;
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar7;
          *(int *)(param_3 + 1) = (int)(uVar5 - uVar7);
          iVar9 = ((int)(*param_3 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
          *param_3 = *param_3 << (uVar7 & 0x7f);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(param_3);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(param_3 + 1);
          uVar7 = uVar5 + 0x10;
          iVar4 = iVar9;
        } while ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      *(int *)(param_3 + 1) = (int)(uVar5 - uVar8);
      iVar9 = (int)(*param_3 >> (0x40 - uVar8 & 0x7f)) + iVar9;
      *param_3 = *param_3 << (uVar8 & 0x7f);
      if ((__int64)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(param_3);
      }
    }
  }
  else {
    iVar9 = 0;
  }
  iVar9 = (param_2[1] + 1 >> 1) * iVar9 + param_2[8];
  if (param_2[9] == iVar9) {
    uVar5 = 0;
  }
  else {
    param_2[9] = iVar9;
    iVar4 = 0;
    if (0 < (int)param_2[1]) {
      iVar6 = 0;
      pbVar3 = (unsigned char *)(iVar9 + -1);
      do {
        iVar4 = iVar4 + 2;
        pbVar3 = pbVar3 + 1;
        bVar1 = *pbVar3;
        *(unsigned int *)(iVar6 + param_2[0xc] + 4) =
             *(unsigned int *)(iVar6 + param_2[0xc] + 4) & 0xffffffc0 | (bVar1 & 0xf) + 1;
        iVar9 = iVar6 + 4 + param_2[0xc];
        *(unsigned int *)(iVar9 + 4) = *(unsigned int *)(iVar9 + 4) & 0xffffffc0 | (bVar1 >> 4) + 1;
        iVar6 = iVar6 + 8;
      } while (iVar4 < (int)param_2[1]);
    }
    uVar5 = fn_82CABF20(param_2[0xc],param_2[1]);
    if ((int)uVar5 == 0) {
      lVar2 = fn_82CAD600(param_1,param_2[0xb],*(unsigned int *)*param_2,param_2[0xc],6);
      uVar5 = -(unsigned __int64)(lVar2 != 0) & 0xfffffffffffffff7;
    }
  }
  return uVar5;
}

