extern int fn_827B3858();
extern int fn_82F655D8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;


void fn_827B3C68(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = fn_82F6A548();
  dVar5 = extraout_f1;
  if (extraout_f1 == (double)lbl_82002AE0) {
    *(unsigned int *)(iVar1 + 0xc) = 0;
  }
  else {
    fn_827B3858((int *)(iVar1 + 8),0x100,0);
    *(unsigned int *)(iVar1 + 0xc) = 0x100;
    iVar2 = 0;
    iVar3 = 0;
    dVar7 = (double)lbl_82005CCC;
    dVar6 = (double)lbl_82002C5C;
    dVar8 = (double)lbl_82005328;
    do {
      dVar4 = (double)fn_82F655D8((double)(float)((double)(__int64)iVar2 * dVar8),dVar5);
      iVar2 = iVar2 + 1;
      *(int *)(*(int *)(iVar1 + 8) + iVar3) = (int)(__int64)((double)(float)dVar4 * dVar7 + dVar6);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x400);
  }
  *(float *)(iVar1 + 4) = (float)dVar5;
  fn_82F6A594();
  return;
}

