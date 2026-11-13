extern int fn_82C31658();
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_83231D84;
extern unsigned int lbl_83231DC0;
extern unsigned int lbl_83231E10;


double fn_82C31720(__int64 param_1)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar5;
  double dVar6;
  
  if (lbl_83231E10 == 0) {
    fn_82C31658();
  }
  iVar5 = (int)param_1;
  if ((iVar5 < 0x14) || (0x13f < iVar5)) {
    dVar6 = (double)fn_82F655D8(lbl_82015618,(double)((float)(__int64)iVar5 * lbl_82005718));
    fVar1 = (float)dVar6;
  }
  else {
    iVar3 = iVar5 / 0x14;
    uVar2 = iVar5 / 0x14 + (iVar5 >> 0x1f);
    uVar4 = (__int64)(int)uVar2 + (unsigned __int64)(uVar2 >> 0x1f);
    uVar4 = param_1 + (uVar4 + (uVar4 & 0x3fffffff) * 4 & 0x3fffffff) * -4;
    if ((__int64)uVar4 < 0) {
      uVar4 = uVar4 + 0x14;
      iVar3 = iVar3 + -1;
    }
    fVar1 = *(float *)(&lbl_83231DC0 + (int)((uVar4 & 0xffffffff) << 2)) *
            *(float *)(&lbl_83231D84 + iVar3 * 4);
  }
  return (double)fVar1;
}

