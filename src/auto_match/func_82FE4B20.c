extern int fn_82F655D8();
extern int fn_82F65E20();
extern int fn_82F65FB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015618;
extern float lbl_8202DCE0;
extern unsigned int lbl_820FC388;
extern float lbl_8217BA90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82FE4B20(unsigned __int64 param_1,double param_2)

{
  int iVar1;
  unsigned __int64 in_r6;
  unsigned __int64 in_r7;
  double extraout_f1;
  double dVar2;
  double dVar3;
  double dVar4;
  unsigned __int64 uVar5;
  
  iVar1 = fn_82F6A548();
  uVar5 = lbl_82015618;
  dVar2 = (double)fn_82F655D8(lbl_82015618,
                                    ((double)(in_r7 & 0xffffffff) * lbl_8217BA90) /
                                    (extraout_f1 * (double)(in_r6 & 0xffffffff)));
  dVar3 = (double)fn_82F65FB0();
  dVar4 = (double)fn_82F65E20(uVar5);
  dVar3 = dVar3 * dVar4 * -(param_2 * param_2 - lbl_82005758) * lbl_8202DCE0;
  if (lbl_820FC388 < dVar3) {
    dVar3 = lbl_820FC388;
  }
  dVar4 = lbl_82005758 - dVar3;
  *(float *)(iVar1 + 8) = (float)-dVar3;
  *(float *)(iVar1 + 4) = (float)(dVar4 * dVar2);
  fn_82F6A594();
  return;
}

