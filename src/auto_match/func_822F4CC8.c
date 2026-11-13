#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_822F9B78();
extern int fn_824CCFC8();
extern unsigned int iStack_2c;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCE10;


double fn_822F4CC8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_30 [4];
  int iStack_2c;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  if (iVar2 == 0) {
    puVar3 = (unsigned int *)fn_822F9B78(auStack_30,*(unsigned int *)(param_1 + 0x18));
    dVar7 = (double)(**(int (***)())(*(int *)*puVar3 + 0xc))();
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  else {
    if (param_2 == 0) {
      piVar1 = *(int **)(iVar2 + 0x104);
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x100);
    }
    dVar5 = (double)ltcg_pool_0_0f;
    dVar7 = (double)lbl_821CA460;
    dVar6 = dVar5;
    if ((piVar1 != (int *)0x0) && (iVar2 = fn_824CCFC8(), dVar6 = dVar5, iVar2 != 0)) {
      dVar5 = (double)(**(int (***)())(*piVar1 + 0x14))(piVar1);
      dVar5 = (double)(float)(dVar5 * (double)lbl_821916FC - dVar7);
    }
    dVar4 = (double)(float)((double)(float)(dVar5 * (double)lbl_831CCE10) - (double)lbl_82192734);
    dVar5 = (double)(float)(dVar5 * (double)lbl_831CCE10);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar6) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar6)) << 2)) <
        0.0) {
      dVar5 = (double)lbl_82192734;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((double)(float)(dVar5 - dVar7) < dVar6) << 2) |
                  (unsigned int)(NAN((double)(float)(dVar5 - dVar7)) || NAN(dVar6)) << 2)) < 0.0) {
      dVar7 = dVar5;
    }
  }
  return dVar7;
}

