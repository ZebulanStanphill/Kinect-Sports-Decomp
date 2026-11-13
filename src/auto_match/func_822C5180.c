typedef unsigned char bool;
extern int fn_82520780();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822C5180(__int64 param_1,unsigned int param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  
  if (7 < (param_1 - 3U & 0xffffffff)) {
    return 0xffffffff82196582;
  }
  bVar1 = (int)(param_1 - 3U) != 0;
  if (param_1 == 4 && bVar1) {
    iVar3 = fn_82520780((double)lbl_8218E8E8,0xffffffff83265a28);
    if (iVar3 == 0) {
      return 0xffffffff821acf10;
    }
  }
  else {
    if ((param_1 == 5 && bVar1) || (param_1 == 6 && bVar1)) {
      return 0xffffffff821acf24;
    }
    if ((param_1 == 7 && bVar1) || (param_1 == 8 && bVar1)) {
      uVar2 = 1 << (param_2 & 0x3f);
      if (((uVar2 & 0xe0) == 0) &&
         (((uVar2 & 0xe) != 0 ||
          (lVar4 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f, lbl_83265A28 = (int)lVar4,
          lVar4 < 1)))) {
        return 0xffffffff821acf48;
      }
      return 0xffffffff821acf34;
    }
    if ((param_1 != 9 || !bVar1) && (!bVar1)) {
      uVar2 = 1 << (param_2 & 0x3f);
      if ((uVar2 & 0xe0) != 0) {
        return 0xffffffff821aceb4;
      }
      if ((uVar2 & 0xe) != 0) {
        return 0xffffffff821acec8;
      }
      if (param_2 == 0) {
        return 0xffffffff821acedc;
      }
      return 0xffffffff821aceec;
    }
  }
  return 0xffffffff821acf00;
}

