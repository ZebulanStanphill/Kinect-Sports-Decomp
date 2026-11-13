typedef unsigned char bool;
#define true 1
extern int fn_82A1E650();
extern int fn_82A1E7D8();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B498;
extern unsigned int lbl_8326B4A8;
extern unsigned int lbl_8326B4AC;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


void fn_825477C8(void)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  uVar10 = lbl_8326B498;
  do {
    do {
      do {
        lbl_8326B498 = uVar10;
        fn_82A1E650(lbl_8326B4A8,0xffffffffffffffff);
        iVar3 = fn_82A1E650(lbl_8326B4AC,0x85);
        uVar2 = lbl_8320A898;
        uVar10 = lbl_8326B498;
      } while (iVar3 != 0x102);
      uVar10 = storeDoubleWordConditionalIndexed(0,0,0xffffffff8326b498);
    } while (lbl_8326B498 == 0);
    uVar8 = lbl_8326B498 >> 0x20;
    lVar4 = (unsigned __int64)lbl_8320A898 + 0x5ea0;
    uVar9 = *(unsigned __int64 *)(lbl_8320A898 + 0x5ea0);
    lbl_8326B498 = uVar10;
    while( true ) {
      uVar7 = uVar9 & ~(1L << (((uVar9 & 0xffffffff) - uVar8) + 0x20 & 0x7f));
      puVar5 = (unsigned __int64 *)lVar4;
      uVar10 = uVar9;
      if (uVar7 == uVar9) break;
      uVar6 = *puVar5;
      if (uVar6 == uVar9) {
        uVar10 = storeDoubleWordConditionalIndexed(uVar7,0,lVar4);
        *puVar5 = uVar10;
      }
      else {
        uVar10 = storeDoubleWordConditionalIndexed(uVar6,0,lVar4);
        *puVar5 = uVar10;
      }
      uVar10 = uVar7;
      if (uVar9 == uVar6) break;
      uVar9 = *puVar5;
    }
    if (*(int *)(uVar2 + 0x5e8c) == 0) {
      do {
        uVar8 = 0xffffffff80000000;
        uVar9 = LZCOUNT((int)(uVar10 >> 0x20)) + ((uVar10 & 0xffffffff) - 0x20);
        if ((uVar9 & 0x80000000) == 0) {
          uVar8 = uVar9 & 0x7fffffff;
        }
        uVar7 = uVar9 & 0x7fffffff;
        if ((uVar9 & 0x80000000) == 0) {
          uVar7 = 0xffffffff80000000;
        }
        *(unsigned __int64 *)(*(int *)(uVar2 + 0x5e90) + 0x220) = uVar8 << 0x20 | uVar7 & 0xffffffff;
        sync(0);
        if (*(int *)(uVar2 + 0x5e8c) != 0) {
          *(unsigned __int64 *)(*(int *)(uVar2 + 0x5e90) + 0x220) = 0xffffffffffffffff;
          break;
        }
        bVar1 = *puVar5 != uVar10;
        uVar10 = *puVar5;
      } while (bVar1);
    }
    fn_82A1E7D8(lbl_8326B4A8);
    uVar10 = lbl_8326B498;
  } while( true );
}

