extern unsigned int fStack_20;
extern int fn_822315A0();
extern int fn_82511928();
extern int fn_825138E0();
extern int fn_8251A108();
extern unsigned int iStack_1c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_83297810;


void fn_824C1AD8(int *param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  float fVar5;
  unsigned __int64 uVar6;
  float fStack_20;
  int iStack_1c;
  
  fVar5 = lbl_821CA460;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  param_1[10] = ltcg_pool_0_0f;
  fStack_20 = (float)(uVar4 | 0x3f800000);
  param_1[0xb] = (int)(((float)param_1[9] - (float)param_1[8]) * (fStack_20 - fVar5) +
                      (float)param_1[8]);
  *(unsigned int *)*param_1 = 2;
  *(unsigned int *)(*param_1 + 0x2c) = 8;
  uVar6 = (unsigned __int64)lbl_83297810;
  uVar1 = *(unsigned int *)(param_1[1] + 8);
  if (uVar6 == 0) {
    uVar6 = fn_82511928();
  }
  fn_825138E0(&fStack_20,uVar6,uVar1);
  if (fStack_20 != 0.0) {
    piVar2 = *(int **)((int)fStack_20 + 0x18);
    iVar3 = *param_1;
    (**(int (***)())(*piVar2 + 4))(piVar2);
    fn_8251A108(piVar2 + 4,iVar3);
  }
  if (iStack_1c != 0) {
    fn_822315A0();
  }
  return;
}

