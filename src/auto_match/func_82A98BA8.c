extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82547CF0();


unsigned __int64 fn_82A98BA8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int auStack_a0 [8];
  unsigned int auStack_80 [32];
  
  auStack_a0[0] = 8;
  auStack_a0[1] = 8;
  auStack_a0[2] = 8;
  auStack_a0[4] = 2;
  auStack_a0[3] = 4;
  auStack_80[0] = 8;
  uVar5 = 0x1f - LZCOUNT((int)param_3);
  auStack_80[2] = 2;
  auStack_80[3] = 2;
  iVar3 = (int)((uVar5 & 0xffffffff) << 2);
  auStack_80[4] = 2;
  auStack_80[1] = 4;
  uVar1 = *(unsigned int *)((int)auStack_a0 + iVar3);
  uVar10 = (unsigned __int64)uVar1;
  uVar2 = param_1 - 1 & 0xffffffe0;
  uVar9 = param_2 - 1 &
          ~(((unsigned __int64)(unsigned int)(1 << (7U - (int)uVar5 & 0x3f)) + 0x1f & 0xffffffe0) - 1);
  uVar7 = (unsigned __int64)*(unsigned int *)((int)auStack_80 + iVar3);
  trapWord(6,uVar10,0);
  uVar5 = 0;
  if ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff)) {
    lVar6 = uVar9 + uVar7 + -1;
    do {
      if (uVar2 < (param_1 & 0xffffffff)) {
        uVar8 = uVar2;
        do {
          uVar4 = fn_82547CF0((uVar10 - 1) + uVar8,lVar6,
                               (__int64)(int)(((uVar10 + param_1) - 1 & 0xffffffff) / uVar10) *
                               (__int64)(int)uVar1,param_3);
          if ((uVar5 & 0xffffffff) <= (uVar4 & 0xffffffff)) {
            uVar5 = uVar4;
          }
          uVar8 = uVar8 + uVar10;
        } while ((uVar8 & 0xffffffff) < (param_1 & 0xffffffff));
      }
      uVar9 = uVar9 + uVar7;
      lVar6 = lVar6 + uVar7;
    } while ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  return uVar5;
}

