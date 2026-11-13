extern int fn_82522D98();
extern int fn_825D5108();
extern int fn_825D5998();
extern int fn_825D5B08();
extern int fn_82809868();
extern int fn_82BA02A8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821954FC;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8257E950(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned char uVar5;
  double extraout_f1;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  
  iVar2 = fn_82F6A544();
  iVar2 = *(int *)(iVar2 + 0x93c);
  if (*(int **)(iVar2 + 0x10) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(iVar2 + 0x10);
  }
  dVar7 = extraout_f1;
  if (iVar3 == 0) {
    iVar3 = fn_82522D98(0x84);
    fn_825D5998();
    if ((iVar3 != 0) && (piVar4 = (int *)fn_82522D98(0x14), piVar4 != (int *)0x0)) {
      *piVar4 = iVar3;
      piVar4[1] = (int)fn_82BA02A8;
      piVar4[2] = (int)fn_825D5108;
      piVar4[3] = (int)fn_825D5B08;
      piVar4[4] = *(int *)(iVar2 + 0x10);
      *(int **)(iVar2 + 0x10) = piVar4;
    }
  }
  dVar9 = (double)ltcg_pool_0_0f;
  dVar8 = (double)lbl_821CA460;
  dVar6 = dVar9;
  if (param_5 != 0) {
    dVar6 = dVar8;
  }
  if (1 < (param_4 & 0xffffffff)) goto LAB_8257eb08;
  iVar1 = (int)param_4;
  iVar2 = iVar1 * 0x30 + iVar3;
  *(unsigned int *)(iVar2 + 8) = in_register_00010010;
  *(unsigned int *)(iVar2 + 0xc) = in_register_00010014;
  *(unsigned int *)(iVar2 + 0x10) = in_register_00010018;
  *(float *)(iVar2 + 0x14) = (float)dVar6;
  if (*(int *)((int)((param_4 + 0x1a & 0xffffffff) << 2) + iVar3) != 0) {
    if (((dVar6 == dVar9) || (param_8 == 0)) && (*(char *)(iVar3 + iVar1 + 0x70) != '\0')) {
      uVar5 = 0;
    }
    else {
      if (((dVar6 != dVar8) || (param_8 == 0)) || (*(char *)(iVar3 + iVar1 + 0x70) != '\0'))
      goto LAB_8257eac8;
      uVar5 = 1;
    }
    *(unsigned char *)(iVar3 + iVar1 + 0x70) = uVar5;
  }
LAB_8257eac8:
  dVar10 = (double)lbl_821954FC;
  dVar6 = (double)fn_82809868((double)(float)(param_2 * dVar10));
  *(float *)(iVar2 + 0x2c) = (float)dVar6;
  dVar7 = (double)fn_82809868((double)(float)(dVar7 * dVar10));
  dVar7 = (double)(float)(dVar7 - (double)*(float *)(iVar2 + 0x2c));
  if (dVar9 < dVar7) {
    dVar8 = (double)(float)(dVar8 / dVar7);
  }
  *(float *)(iVar2 + 0x28) = (float)dVar8;
LAB_8257eb08:
  fn_82F6A590();
  return;
}

