extern int fn_82F655D8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern int fn_83059018();
extern int fn_83059120();
extern int fn_83059348();
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

void fn_83059570(unsigned __int64 param_1,double *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  unsigned __int64 uVar10;
  double dVar11;
  
  piVar3 = (int *)fn_82F6A544();
  dVar7 = param_2[1] - lbl_8207F700;
  if (param_2[1] - lbl_8207F700 < lbl_8217E370) {
    dVar7 = lbl_8217E370;
  }
  dVar6 = *param_2;
  iVar4 = *piVar3;
  if (dVar7 < lbl_82005710) {
    dVar6 = dVar6 - lbl_82005778;
  }
  dVar8 = lbl_82005778;
  dVar9 = lbl_82005710;
  uVar10 = lbl_82015618;
  dVar11 = lbl_82005720;
  dVar6 = (double)fn_82F655D8(lbl_82015618,dVar6 * lbl_82005720);
  iVar5 = *piVar3;
  *(float *)(*(int *)(iVar4 + 8) + 0x3c) = (float)dVar6;
  dVar6 = *param_2;
  if (dVar7 < dVar9) {
    dVar6 = dVar6 - dVar8;
  }
  dVar6 = (double)fn_82F655D8(uVar10,dVar6 * dVar11);
  uVar1 = *(unsigned int *)(*piVar3 + 8);
  *(float *)(*(int *)(iVar5 + 8) + 0x3c) = (float)dVar6;
  fn_8305B9A0(dVar7,param_2[2],(unsigned __int64)uVar1 + 0xcc4,600);
  puVar2 = (unsigned int *)*piVar3;
  iVar4 = fn_8305B970((double)*puVar2,puVar2 + 3);
  dVar7 = (double)fn_8305BE58((double)(__int64)iVar4);
  iVar4 = *piVar3;
  *(float *)(puVar2[2] + 0x1c) = (float)dVar7;
  fn_83059018(param_2[3],iVar4);
  fn_83059120(param_2[3],*piVar3,*(unsigned int *)(param_2 + 4));
  puVar2 = (unsigned int *)*piVar3;
  iVar5 = fn_8305BB28((double)*puVar2,puVar2 + 3);
  iVar4 = *piVar3;
  *(float *)(puVar2[2] + 0x14) = (float)(__int64)(iVar5 + 1);
  fn_83059348(iVar4);
  fn_82F6A590();
  return;
}

