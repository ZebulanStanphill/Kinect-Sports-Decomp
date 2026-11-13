extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_83231DC0;
extern unsigned int lbl_83231E10;


void fn_82C31658(void)

{
  int iVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  unsigned __int64 uVar5;
  
  iVar1 = -5;
  pfVar2 = (float *)0x83231d70;
  uVar5 = lbl_82015618;
  do {
    dVar3 = (double)fn_82F655D8(uVar5,(double)(__int64)iVar1);
    *pfVar2 = (float)dVar3;
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)pfVar2 < -0x7cdce240);
  pfVar2 = (float *)&lbl_83231DC0;
  iVar1 = 0;
  dVar3 = (double)lbl_82005718;
  do {
    dVar4 = (double)fn_82F655D8(uVar5,(double)(float)((double)(__int64)iVar1 * dVar3));
    *pfVar2 = (float)dVar4;
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + 1;
  } while ((int)pfVar2 < -0x7cdce1f0);
  lbl_83231E10 = 1;
  return;
}

