extern int fn_82E85448();
extern int fn_82E859B0();
extern int fn_82EAA718();
extern int fn_82F0F9A0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000034;


void fn_82EC7BB0(int param_1,unsigned int param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned int param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned int uStack0000001c;
  unsigned int uStack00000034;
  
  uVar2 = *(int *)(param_1 + 0x31c) >> 2;
  uVar3 = *(int *)(param_1 + 800) >> 2;
  uVar4 = uVar2 + 0xf & 0xfffffff0;
  uVar7 = uVar3 + 0xf & 0xfffffff0;
  *(unsigned int *)(param_1 + 0x54c) = uVar4 + 0x20;
  *(unsigned int *)(param_1 + 0x31c) = uVar2;
  *(unsigned int *)(param_1 + 800) = uVar3;
  *(unsigned int *)(param_1 + 0x548) = uVar4;
  *(unsigned int *)(param_1 + 0x564) = uVar4 + 0x40;
  *(unsigned int *)(param_1 + 0x330) = uVar4;
  *(unsigned int *)(param_1 + 0x550) = uVar7;
  *(unsigned int *)(param_1 + 0x338) = uVar7;
  *(int *)(param_1 + 0x2d0) = (int)(uVar2 + 0xf) >> 4;
  *(int *)(param_1 + 0x2d4) = (int)(uVar3 + 0xf) >> 4;
  *(unsigned int *)(param_1 + 0x56c) = uVar7 + 0x40;
  *(unsigned int *)(param_1 + 0x574) = (uVar4 + 0x41) * 0x20;
  if ((uVar4 != uVar2) || (uVar8 = 1, uVar7 != uVar3)) {
    uVar8 = 0;
  }
  *(unsigned int *)(param_1 + 0x340) = uVar8;
  *(int *)(param_1 + 0x330) = ((int)(uVar2 + 1) >> 1) << 1;
  *(int *)(param_1 + 0x338) = ((int)(uVar3 + 1) >> 1) << 1;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x658)) {
    do {
      uVar2 = *(unsigned int *)(param_1 + 0x658);
      iVar9 = iVar10 * 0x3c8 + param_1;
      iVar6 = iVar10 + 1;
      *(int *)(iVar9 + 0xbd0) =
           (int)(((__int64)*(int *)(param_1 + 0x550) * (__int64)iVar10 & 0xffffffffU) /
                (unsigned __int64)uVar2);
      trapWord(6,(unsigned __int64)uVar2,0);
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      *(int *)(iVar9 + 0xbd4) =
           (int)(((__int64)iVar6 * (__int64)*(int *)(param_1 + 0x550) & 0xffffffffU) /
                (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      *(int *)(iVar9 + 0xbe0) =
           (int)(((__int64)*(int *)(param_1 + 800) * (__int64)iVar10 & 0xffffffffU) /
                (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      *(int *)(iVar9 + 0xbe4) =
           (int)(((__int64)iVar6 * (__int64)*(int *)(param_1 + 800) & 0xffffffffU) /
                (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
      trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      *(int *)(iVar9 + 0xbe8) =
           (int)(((__int64)(*(int *)(param_1 + 0x550) * iVar10) *
                  (__int64)*(int *)(param_1 + 0x564) & 0xffffffffU) /
                (unsigned __int64)*(unsigned int *)(param_1 + 0x658)) + *(int *)(param_1 + 0x574);
      if (iVar10 == 0) {
        *(unsigned int *)(param_1 + 0xc28) = 0;
        *(unsigned int *)(param_1 + 0xc30) = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x2d4);
        uVar2 = *(unsigned int *)(param_1 + 0x658);
        *(unsigned int *)(iVar9 + 0xc30) = *(unsigned int *)(iVar9 + 0x86c);
        trapWord(6,(unsigned __int64)uVar2,0);
        *(int *)(iVar9 + 0xc28) =
             (int)(((__int64)iVar10 * (__int64)iVar1 & 0xffffffffU) / (unsigned __int64)uVar2);
      }
      uVar2 = *(unsigned int *)(param_1 + 0x658);
      if (iVar10 == uVar2 - 1) {
        *(int *)(iVar9 + 0xc2c) = *(int *)(param_1 + 0x2d4);
        *(unsigned int *)(iVar9 + 0xc34) = *(unsigned int *)(param_1 + 0x2d4);
        uVar8 = *(unsigned int *)(param_1 + 0x2d0);
      }
      else {
        trapWord(6,(unsigned __int64)uVar2,0);
        uVar2 = (unsigned int)(((__int64)iVar6 * (__int64)*(int *)(param_1 + 0x2d4) & 0xffffffffU) /
                      (unsigned __int64)uVar2);
        *(unsigned int *)(iVar9 + 0xc2c) = uVar2;
        *(unsigned int *)(iVar9 + 0xc34) = uVar2 & 0xfffffffe;
        uVar8 = (unsigned int)
                (((__int64)iVar6 * (__int64)*(int *)(param_1 + 0x2d0) & 0xffffffffU) /
                (unsigned __int64)*(unsigned int *)(param_1 + 0x658));
        trapWord(6,(unsigned __int64)*(unsigned int *)(param_1 + 0x658),0);
      }
      *(unsigned int *)(iVar9 + 0xe2c) = uVar8;
      iVar10 = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x658));
  }
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94);
  iVar10 = 0;
  uStack0000001c = param_2;
  uStack00000034 = param_5;
  if (0 < *(int *)(param_1 + 800)) {
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
    do {
      fn_82F68CC0(uVar11,param_3,uVar5);
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
      iVar10 = iVar10 + 1;
      uVar11 = uVar11 + *(unsigned int *)(param_1 + 0x564);
      param_3 = uVar5 + param_3;
    } while (iVar10 < *(int *)(param_1 + 800));
  }
  *(unsigned int *)(param_1 + 0x344) = 0;
  *(int *)(param_1 + 0x4ed8) = *(int *)(param_1 + 0x4a94) - *(int *)(param_1 + 0x574);
  fn_82F0F9A0(param_1,0x17);
  if ((param_4 & 0xffffffff) == 0) {
    *(unsigned int *)(param_1 + 0xaf0) = 1;
  }
  else {
    fn_82EAA718(param_1);
    iVar10 = 0;
    lVar12 = (__int64)*(int *)(param_1 + 0x56c) * (__int64)*(int *)(param_1 + 0x564);
    lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + lVar12;
    if (0 < *(int *)(param_1 + 800)) {
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
      do {
        fn_82F68CC0(lVar13,param_4,uVar11);
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
        iVar10 = iVar10 + 1;
        lVar13 = lVar13 + (unsigned __int64)*(unsigned int *)(param_1 + 0x564);
        param_4 = uVar11 + param_4;
      } while (iVar10 < *(int *)(param_1 + 800));
    }
    *(unsigned int *)(param_1 + 0x344) = 0;
    iVar10 = (int)lVar12;
    *(int *)(param_1 + 0x4ed8) = (*(int *)(param_1 + 0x4a94) - *(int *)(param_1 + 0x574)) + iVar10;
    fn_82F0F9A0(param_1,0x17);
    *(unsigned int *)(param_1 + 0xaf0) = 2;
    iVar10 = (*(int *)(param_1 + 0x4a94) - *(int *)(param_1 + 0x574)) + iVar10;
    *(int *)(param_1 + 0x1e7c) = iVar10;
    *(int *)(param_1 + 0x1e88) = iVar10 + *(int *)(param_1 + 0x574);
  }
  iVar10 = *(int *)(param_1 + 0x4a94) - *(int *)(param_1 + 0x574);
  *(unsigned int *)(param_1 + 0x588) = 8;
  *(unsigned int *)(param_1 + 0x4b1c) = 0x80;
  *(int *)(param_1 + 0x14) = iVar10;
  *(unsigned int *)(param_1 + 0x6d80) = 0;
  *(unsigned int *)(param_1 + 0x1abc) = uStack0000001c;
  *(int *)(param_1 + 0x310) = iVar10 + *(int *)(param_1 + 0x574);
  *(unsigned int *)(param_1 + 0x6d8c) = 0;
  *(unsigned int *)(param_1 + 0x6d54) = 0;
  *(unsigned int *)(param_1 + 0x7b38) = 0;
  fn_82E85448(param_1,0,0);
  *(unsigned int *)(param_1 + 0x860) = 4;
  fn_82E859B0(param_1,0);
  iVar10 = *(int *)(param_1 + 0x588) * *(int *)(param_1 + 0x588);
  *(int *)(param_1 + 0x6f18) = iVar10;
  *(int *)(param_1 + 0x6f14) = iVar10;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_1 + 0x690),0xffffffffffffffff,
               ((__int64)(int)(((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 0x1f & 0xffffffff) >> 5) *
                (__int64)*(int *)(param_1 + 0x2d4) & 0x3fffffffU) << 2);
}

