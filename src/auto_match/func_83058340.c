extern int fn_82F655D8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern int fn_83057DD0();
extern int fn_83057ED8();
extern int fn_83058100();
extern int fn_8305B970();
extern int fn_8305B9A0();
extern int fn_8305BB28();
extern int fn_8305BE58();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005778;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8207F700;
extern unsigned int lbl_8217E370;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_83058340(unsigned __int64 param_1,double param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned __int64 uVar11;
  double dVar12;
  
  uVar6 = (unsigned int)((unsigned __int64)param_6 >> 0x20);
  piVar3 = (int *)fn_82F6A540();
  dVar8 = param_3 - lbl_8207F700;
  if (param_3 - lbl_8207F700 < lbl_8217E370) {
    dVar8 = lbl_8217E370;
  }
  iVar4 = *piVar3;
  dVar7 = param_2;
  if (dVar8 < lbl_82005710) {
    dVar7 = param_2 - lbl_82005778;
  }
  dVar9 = lbl_82005778;
  dVar10 = lbl_82005710;
  uVar11 = lbl_82015618;
  dVar12 = lbl_82005720;
  dVar7 = (double)fn_82F655D8(lbl_82015618,dVar7 * lbl_82005720);
  iVar4 = *(int *)(iVar4 + 8);
  iVar5 = *piVar3;
  *(float *)(iVar4 + 0x54) = (float)dVar7;
  *(float *)(iVar4 + 0x44) = (float)dVar7;
  if (dVar8 < dVar10) {
    param_2 = param_2 - dVar9;
  }
  dVar7 = (double)fn_82F655D8(uVar11,param_2 * dVar12);
  iVar4 = *(int *)(iVar5 + 8);
  uVar1 = *(unsigned int *)(*piVar3 + 8);
  *(float *)(iVar4 + 0x54) = (float)dVar7;
  *(float *)(iVar4 + 0x44) = (float)dVar7;
  fn_8305B9A0(dVar8,param_4,(unsigned __int64)uVar1 + 0xf34,600);
  puVar2 = (unsigned int *)*piVar3;
  iVar4 = fn_8305B970((double)*puVar2,puVar2 + 3);
  dVar8 = (double)fn_8305BE58((double)(__int64)iVar4);
  uVar1 = puVar2[2];
  iVar4 = *piVar3;
  *(float *)(uVar1 + 0x24) = (float)dVar8;
  fn_83057DD0(param_5,iVar4,uVar1,uVar6);
  fn_83057ED8(param_5,*piVar3,uVar6);
  puVar2 = (unsigned int *)*piVar3;
  iVar5 = fn_8305BB28((double)*puVar2,puVar2 + 3);
  iVar4 = *piVar3;
  *(float *)(puVar2[2] + 0x1c) = (float)(__int64)(iVar5 + 1);
  fn_83058100(iVar4);
  fn_82F6A58C();
  return;
}

