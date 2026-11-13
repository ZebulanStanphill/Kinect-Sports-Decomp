extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


unsigned int fn_82FB9430(int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char *pbVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  
  uVar8 = param_2 + (unsigned __int64)(unsigned int)param_1[2];
  iVar5 = fn_82FA5060(lbl_831BC768,(uVar8 + (uVar8 & 0x7fffffff) * 2 & 0x3fffffff) << 2);
  uVar4 = 0;
  if (iVar5 != 0) {
    uVar1 = (param_1[1] - *param_1) / 0xc;
    if (*param_1 != 0) {
      if (uVar1 != 0) {
        lVar6 = (__int64)(int)uVar1;
        pbVar7 = (unsigned char *)(iVar5 + 6);
        do {
          if (pbVar7 != (unsigned char *)0x6) {
            pbVar7[-0xffffffff00000002] = 0;
            pbVar7[-0xffffffff00000001] = 0;
            *pbVar7 = *pbVar7 & 0x3f;
            pbVar7[2] = 0;
            pbVar7[3] = 0;
            pbVar7[4] = 0;
            pbVar7[5] = 0;
          }
          iVar2 = *param_1;
          pbVar3 = pbVar7 + (-6 - iVar5);
          lVar6 = lVar6 + -1;
          *(unsigned int *)(pbVar7 + -6) = *(unsigned int *)(pbVar3 + iVar2);
          *(unsigned int *)(pbVar7 + -2) = *(unsigned int *)(pbVar3 + iVar2 + 4);
          *(unsigned int *)(pbVar7 + 2) = *(unsigned int *)(pbVar3 + iVar2 + 8);
          pbVar7 = pbVar7 + 0xc;
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar5;
    param_1[2] = (int)uVar8;
    uVar4 = 1;
    param_1[1] = (int)(((__int64)(int)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0xffffffff) <<
                      2) + iVar5;
  }
  return uVar4;
}

