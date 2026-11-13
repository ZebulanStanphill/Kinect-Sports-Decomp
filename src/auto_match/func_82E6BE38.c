extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;


void fn_82E6BE38(void)

{
  float *pfVar1;
  unsigned int uVar2;
  double dVar3;
  unsigned __int64 uVar4;
  double dVar5;
  
  uVar2 = 0;
  pfVar1 = (float *)0x83248a0c;
  dVar5 = (double)lbl_82005718;
  uVar4 = lbl_82015618;
  do {
    dVar3 = (double)fn_82F655D8(uVar4,(double)(float)((double)uVar2 * dVar5));
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 1;
    *pfVar1 = (float)dVar3;
  } while (uVar2 < 0x102);
  return;
}

