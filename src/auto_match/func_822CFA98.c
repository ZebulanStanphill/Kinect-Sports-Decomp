extern int fn_822CF9D8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_822CFA98(void)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  double dVar3;
  
  dVar3 = (double)fn_822CF9D8();
  if (dVar3 <= (double)lbl_82191FB0) {
    lVar2 = 1;
    if (dVar3 <= (double)lbl_82193D04) {
      lVar2 = 2;
    }
  }
  else {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    if ((lVar2 == 1) &&
       (lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f,
       lbl_8218E8E8 < (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460)) {
      return 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

