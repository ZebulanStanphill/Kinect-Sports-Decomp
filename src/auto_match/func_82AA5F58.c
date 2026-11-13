extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern int fn_82AA5548();


unsigned __int64 fn_82AA5F58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int auStack_d0 [8];
  unsigned int auStack_b0 [44];
  
  auStack_d0[0] = 8;
  auStack_d0[2] = 2;
  auStack_d0[3] = 2;
  auStack_d0[4] = 2;
  auStack_d0[1] = 4;
  auStack_b0[4] = 2;
  uVar6 = 0x1f - LZCOUNT((int)param_4);
  auStack_b0[0] = 8;
  auStack_b0[1] = 8;
  iVar4 = (int)((uVar6 & 0xffffffff) << 2);
  auStack_b0[2] = 8;
  auStack_b0[3] = 4;
  uVar1 = *(unsigned int *)((int)auStack_d0 + iVar4);
  uVar11 = (unsigned __int64)uVar1;
  uVar2 = *(unsigned int *)((int)auStack_b0 + iVar4);
  uVar12 = (unsigned __int64)uVar2;
  uVar10 = param_3 - 1 & 0xfffffffc;
  trapWord(6,uVar11,0);
  trapWord(6,uVar12,0);
  uVar3 = param_1 - 1 & 0xffffffe0;
  uVar7 = param_2 - 1 &
          ~(((unsigned __int64)(unsigned int)(1 << (7U - (int)uVar6 & 0x3f)) + 0x1f & 0xffffffe0) - 1);
  uVar6 = 0;
  for (; (uVar10 & 0xffffffff) < (param_3 & 0xffffffff); uVar10 = uVar10 + 1) {
    if ((uVar7 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar8 = uVar7;
      do {
        if (uVar3 < (param_1 & 0xffffffff)) {
          uVar9 = uVar3;
          do {
            uVar5 = fn_82AA5548((uVar12 - 1) + uVar9,(uVar11 - 1) + uVar8,uVar10,
                                  (__int64)(int)(((uVar12 + param_1) - 1 & 0xffffffff) / uVar12) *
                                  (__int64)(int)uVar2,
                                  (__int64)(int)(((uVar11 + param_2) - 1 & 0xffffffff) / uVar11) *
                                  (__int64)(int)uVar1,param_4);
            if ((uVar6 & 0xffffffff) <= (uVar5 & 0xffffffff)) {
              uVar6 = uVar5;
            }
            uVar9 = uVar9 + uVar12;
          } while ((uVar9 & 0xffffffff) < (param_1 & 0xffffffff));
        }
        uVar8 = uVar8 + uVar11;
      } while ((uVar8 & 0xffffffff) < (param_2 & 0xffffffff));
    }
  }
  return uVar6;
}

