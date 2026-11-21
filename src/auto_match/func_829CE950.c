typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int DAT_832178dc;
extern unsigned int DAT_8321501c;
extern unsigned int DAT_83215020;
extern unsigned int DAT_832154a8;
extern unsigned int DAT_832154c0;
extern unsigned int DAT_832154c4;
extern unsigned int DAT_832154c8;
extern unsigned int DAT_832154cc;
extern unsigned int DAT_832154d0;
extern unsigned int DAT_832154d4;
extern unsigned int DAT_832154d8;
extern unsigned int DAT_83215510;
extern unsigned int DAT_832155b4;
extern unsigned int DAT_832155b8;
extern unsigned int DAT_832155bc;
extern unsigned int DAT_832155c0;
extern unsigned int DAT_832155e4;
extern unsigned int DAT_832155e8;
extern unsigned int lbl_83214FF4;

/* WARNING: Inlined function: __savegprlr_22 */

void fn_829CE950(void)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int auStack_70 [2];
  int iStack_68;
  unsigned int uStack_64;
  
  uVar11 = (unsigned __int64)DAT_832154c8;
  if ((DAT_832154d8 == 0) || (bVar2 = true, lbl_83214FF4 != 0)) {
    bVar2 = false;
  }
  if (DAT_83215020 == 0) {
    auStack_70[0] = 0;
    iStack_68 = 0;
    uStack_64 = 0;
    fn_82648B08(DAT_8321501c,0,auStack_70);
    DAT_83215020 = iStack_68;
  }
  uVar4 = fn_82648AC8(DAT_8321501c);
  iVar7 = fn_82639358(DAT_8321501c);
  uVar5 = uVar4;
  if (iVar7 != -0x80000000) {
    uVar5 = fn_82648AD0(DAT_8321501c);
  }
  if (DAT_832154a8 == 0) goto LAB_829ce91c;
  uVar6 = KfAcquireSpinLock(0xffffffff832155b0);
  uVar9 = (unsigned __int64)DAT_83215510;
  uVar12 = (unsigned int)uVar5;
  if (bVar2) {
    DAT_832154d4 = 1;
LAB_829ce6c8:
    if ((uVar11 != 0) && ((uVar4 & 0xffffffff) != 0)) {
      uVar8 = uVar5 - uVar11;
      if ((uVar11 - uVar5 & 0xffffffff) < (uVar5 - uVar11 & 0xffffffff)) {
        uVar8 = uVar11 - uVar5;
      }
      trapWord(6,uVar9,0);
      uVar10 = uVar8 - (__int64)(int)((uVar8 & 0xffffffff) / uVar9) * (__int64)(int)DAT_83215510;
      if (((uVar10 & 0xffffffff) < 50000) || ((uVar9 - 50000 & 0xffffffff) < (uVar10 & 0xffffffff)))
      {
        DAT_832154d4 = 0;
        uVar4 = uVar5;
        DAT_832154cc = uVar12;
        DAT_832154d0 = uVar12 - (DAT_83215510 >> 1);
      }
      else {
        uVar1 = DAT_83215510 >> 1;
        trapWord(6,uVar9,0);
        uVar8 = uVar1 + uVar8;
        uVar8 = uVar8 - (__int64)(int)((uVar8 & 0xffffffff) / (unsigned __int64)DAT_83215510) *
                        (__int64)(int)DAT_83215510;
        if (((uVar8 & 0xffffffff) < 50000) || ((uVar9 - 50000 & 0xffffffff) < (uVar8 & 0xffffffff)))
        {
          uVar4 = uVar5 - uVar1;
          DAT_832154d4 = 0;
          DAT_832154cc = (unsigned int)uVar4;
          DAT_832154d0 = uVar12;
        }
        else {
          DAT_832154d0 = (int)uVar4 - uVar1;
          uVar4 = (unsigned __int64)DAT_832154cc;
          DAT_832154d4 = 0;
        }
      }
      goto LAB_829ce790;
    }
  }
  else {
    if (DAT_832154d4 != 0) goto LAB_829ce6c8;
    uVar4 = (unsigned __int64)DAT_832154cc;
LAB_829ce790:
    if (bVar2) {
      uVar4 = ((unsigned __int64)DAT_832155e4 & 0x1fffffff) << 3;
      if (DAT_832155b4 == 0) {
        uVar4 = uVar4 ^ 8;
      }
      uVar9 = ((unsigned __int64)DAT_832155e8 & 0x1fffffff) << 3;
      if (DAT_832155b8 == 0) {
        uVar9 = uVar9 ^ 8;
      }
      fn_829CAD30(0xffffffff83215488,uVar4 - 0x7cdeaa3c,uVar9 - 0x7cdeaa2c);
      uVar9 = (unsigned __int64)DAT_83215510;
      uVar4 = (unsigned __int64)DAT_832154cc;
    }
    DAT_832154d8 = lbl_83214FF4;
    if (iVar7 == -0x80000000) {
      uVar11 = uVar4;
    }
    uVar8 = uVar5 - uVar11;
    if ((uVar11 - uVar5 & 0xffffffff) < (uVar5 - uVar11 & 0xffffffff)) {
      uVar8 = uVar11 - uVar5;
    }
    uVar11 = uVar8 - (__int64)(int)((uVar8 & 0xffffffff) / uVar9) * (__int64)(int)uVar9;
    trapWord(6,uVar9,0);
    uVar1 = uVar12;
    uVar3 = uVar12;
    if ((199999 < (uVar11 & 0xffffffff)) && ((uVar11 & 0xffffffff) <= (uVar9 - 200000 & 0xffffffff))
       ) {
      uVar8 = (uVar9 >> 1) + uVar8;
      trapWord(6,uVar9,0);
      uVar8 = uVar8 - (__int64)(int)((uVar8 & 0xffffffff) / uVar9) * (__int64)(int)uVar9;
      uVar3 = DAT_832154cc;
      if ((((uVar8 & 0xffffffff) < 200000) ||
          (uVar1 = DAT_832154c0, (uVar9 - 200000 & 0xffffffff) < (uVar8 & 0xffffffff))) &&
         (uVar1 = (unsigned int)uVar4, DAT_832154d0 = uVar12,
         (uVar9 + (uVar9 & 0x3fffffff) * 4 & 0xffffffff) >> 2 < (uVar5 - uVar4 & 0xffffffff))) {
        uVar1 = uVar12;
        uVar3 = uVar12;
        DAT_832154d0 = (unsigned int)uVar4;
      }
    }
    DAT_832154cc = uVar3;
    DAT_832154c0 = uVar1;
    if ((DAT_832155b4 != 0) && (DAT_832155bc == 0)) {
      DAT_832155bc = DAT_832155b4;
      DAT_832155e4 = DAT_832155e4 ^ 1;
      DAT_832155b4 = 0;
    }
    DAT_832154c4 = uVar12;
    if ((DAT_832155b8 != 0) && (DAT_832155c0 == 0)) {
      DAT_832155c0 = DAT_832155b8;
      DAT_832155e8 = DAT_832155e8 ^ 1;
      DAT_832155b8 = 0;
    }
  }
  KfReleaseSpinLock(0xffffffff832155b0,uVar6);
LAB_829ce91c:
  if (DAT_832178dc == 0) {
    KeSetEvent(0xffffffff83215044,1,0);
  }
  else {
    fn_829CDF10();
  }
  return;
}
