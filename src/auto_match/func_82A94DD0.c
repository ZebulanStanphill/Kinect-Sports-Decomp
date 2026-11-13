extern unsigned int uStack_a0;


void fn_82A94DD0(int param_1,int param_2,unsigned int *param_3,unsigned int param_4,unsigned int *param_5,
                  unsigned int *param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uStack_a0;
  unsigned int uVar9;
  
  uVar7 = param_3[4];
  lVar1 = -LZCOUNT(param_4);
  uStack_a0 = 0;
  uVar8 = 0xffffffffffffffff;
  uVar9 = 0xffffffff;
  if (uVar7 < param_3[5]) {
    uVar6 = param_3[3];
    do {
      if (param_3[1] < uVar6) {
        uVar10 = param_3[1];
        do {
          uVar2 = (unsigned __int64)(uVar10 >> 3) + (unsigned __int64)(uVar7 >> 2) & 1;
          if ((unsigned __int64)*param_3 < (unsigned __int64)param_3[2]) {
            uVar3 = (unsigned __int64)*param_3;
            do {
              uVar6 = ((unsigned int)uVar3 & 7) + (uVar10 & 6) * 4 << ((unsigned int)(lVar1 + 0x1fU) & 0x3f);
              uVar4 = ((((uVar3 & 0xffffffff) >> 5) +
                        (__int64)
                        (int)((uVar10 >> 4) + (uVar7 >> 2) * (param_2 + 0x1fU >> 4 & 0xffffffe)) *
                        (__int64)(int)(param_1 + 0x1fU >> 5) & 0xffffffff) <<
                      (lVar1 + 0x27U & 0x7f)) + ((unsigned __int64)uVar6 & 0x7ffffff0) * 2 +
                      ((unsigned __int64)uVar6 & 0xf) +
                      (((unsigned __int64)uVar10 & 1) * 0x10 +
                       (unsigned __int64)((uVar7 & 3) << ((int)lVar1 + 0x25U & 0x3f)) & 0xffffffff);
              uVar5 = ((uVar4 * 2 & 0xfffffffffffffc00) + (uVar4 & 0x1c0)) * 4 +
                      (((uVar3 >> 3 & 0x1fffffff) + uVar2 * 2) * 0x40 & 0xc0) + (uVar4 & 0x3f) +
                      uVar2 * 0x800 >> (lVar1 + 0x1fU & 0x7f);
              uVar4 = uVar5 & 0xffffffff;
              if (uVar4 < (uVar8 & 0xffffffff)) {
                uVar8 = uVar4;
              }
              if (uStack_a0 < uVar4) {
                uStack_a0 = (unsigned int)uVar5;
              }
              uVar3 = uVar3 + 1;
            } while ((uVar3 & 0xffffffff) < (unsigned __int64)param_3[2]);
          }
          uVar6 = param_3[3];
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
      uVar9 = (unsigned int)uVar8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_3[5]);
  }
  *param_5 = uVar9;
  *param_6 = uStack_a0;
  return;
}

