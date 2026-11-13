extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8209A970;
extern unsigned int lbl_8209A978;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E691F8(void)

{
  unsigned int uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  pfVar4 = (float *)0x83240200;
  iVar2 = 0;
  uVar1 = lbl_82002AE0 & 0x7f800000;
  uVar6 = lbl_8209A978;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 * 0x800 + uVar1),uVar6);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdbbdfc);
  iVar2 = 0;
  pfVar4 = (float *)0x83248610;
  pfVar3 = (float *)0x83244608;
  uVar7 = lbl_8209A970;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 * 0x800 + uVar1),uVar7);
    *pfVar3 = (float)dVar5;
    pfVar3 = pfVar3 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar3 < -0x7cdb79f4);
  iVar2 = 0;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 << 0x17),uVar6);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdb75f0);
  pfVar4 = (float *)0x83244208;
  iVar2 = 0;
  do {
    dVar5 = (double)fn_82F655D8((double)(float)(iVar2 << 0x17),uVar7);
    *pfVar4 = (float)dVar5;
    pfVar4 = pfVar4 + 1;
    iVar2 = iVar2 + 1;
  } while ((int)pfVar4 < -0x7cdbb9f8);
  return;
}

